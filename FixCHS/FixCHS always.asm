[MAP all mapa.txt]
[BITS 16]
[ORG 0x7C00]

	%define LoadSectors 3
	%define Partiton (LoadSectors*512)+0x1BE+0x7C00
	%define MBRLocation (LoadSectors*512)+0x7C00

	; Temp Memory
	%define NumberSpaces 0x9000
	%define LBACalc 0x9010
	%define BootDrive 0x9020
	%define Cyl 0x9030
	%define Heads 0x9040
	%define Sectors 0x9050
	%define LBATemp 0x9060
	%define STARTSectTuplet 0x9070
	%define BlankSpace EOF
	%define BlankSpaceLen (LoadSectors*512)

	; Start
	jmp start
	
	db "FOXCHSFIX"
	
start:
	mov ax,cs
	mov ds,ax
	mov es,ax

	mov [ds:BootDrive], dl

	cli
	mov ax,0x2000
    mov ss,ax
    mov sp,0xf000
    sti

	mov si, ABOUT
	call PUTSTR16

RetryRead:
	xor ax,ax
	mov es,ax
	mov ah, 0x2 ;read disk
	mov al, LoadSectors ;sectors
	mov ch, 0
	mov cl, 2
	mov dh, 0
	mov dl, [ds:BootDrive]
	mov bx, 0x7E00
	
	int 0x13
	jc RetryRead
	
	mov si, OK
	call PUTSTR16

	; Get Disk Geometry
RetryDiskRead:
	xor ax,ax
	mov es,ax
	mov di,0
	mov ah,0x8
	mov dl,[ds:BootDrive]
	int 0x13
	jc RetryDiskRead

	
	mov [ds:Heads], dh
	mov dl,cl
	and dl,00111111b
	mov [ds:Sectors], dl
	and cl,11000000b
	shr cl,6
	xchg cl,ch
	mov [ds:Cyl], cx

	mov si, DISK
	call PUTSTR16
	mov si, DISKGEOMC
	call PUTSTR16
	mov ax,[ds:Cyl]
	inc ax
	call PUTNUM_AX
	mov si, DISKGEOMH
	call PUTSTR16
	xor ax,ax
	mov al,[ds:Heads]
	inc ax
	call PUTNUM_AX
	mov si, DISKGEOMS
	call PUTSTR16
	xor ax,ax
	mov al,[ds:Sectors]
	call PUTNUM_AX
	mov si, CRLF
	call PUTSTR16

	mov cx,4
PartitonTest:
	mov si,Partiton
	cmp byte [ds:si],0x80 ;Bootable Partiton ?
	jz FixBoot
	add si,0x10
	loop PartitonTest,cx

	mov si, NoActivePart
	call PUTSTR16
	mov si, CRLF
	call PUTSTR16
	jmp $

RestoreMBR:
	mov si, WriteMBR
	call PUTSTR16
	
	xor al,al
	mov di,BlankSpace
	mov cx, BlankSpaceLen
	rep stosb
	
RetryWrite:
	xor ax,ax
	mov es,ax
	mov ah, 0x3 ;write disk
	mov al, LoadSectors+1 ;sectors
	mov ch, 0
	mov cl, 1
	mov dh, 0
	mov dl, [ds:BootDrive]
	mov bx, MBRLocation
	
	;int 0x13
	;jc RetryWrite
	nop
	nop
	nop
	nop
	
	mov si, OK
	call PUTSTR16

	jmp TestFS
	
PUTSTR16:
.top:
	lodsb
	and al, al
	jz .end
	mov ah, 0xE
	xor bx, bx
	int 0x10
	jmp .top
.end:
	ret
PUTNUM_AX:
	cld
	mov bx,NumberSpaces
	mov cx,8
.nullNumbers:
	mov [cs:bx], byte 0
	inc bx
	loop .nullNumbers,cx
	mov bx,NumberSpaces+7
.again:
	mov cx,10
	mov dx,0
	div cx ;DX:AX -> Q=AX R=DX
	
	add dl,0x30 ;ASCII 0
	mov [cs:bx],dl
	dec bx
	cmp ax,0
	jne .again
	
	inc bx
	mov si,bx
	call PUTSTR16
	ret

ABOUT:
	db "Fox Fix CHS Loading...", 0
OK:
	db "OK",0xd,0xa,0
DISK:
	db "Disk ",0
PART:
	db "Part ",0
PARTSTART:
	db "Start ",0
PARTEND:
	db "End ",0
DISKGEOMC:
	db "C=",0
DISKGEOMH:
	db " H=",0
DISKGEOMS:
	db " S=",0
NoActivePart:
	db "No active partition found",0
WriteMBR:
	db "Writing...",0
CRLF:
	db 0xd,0xa,0
	
times	(0x1B5-$+$$) db 0xFF
times	(0x1FE-$+$$) db 0x00
	dw 0xAA55


CalcLBAToCHS:
	mov eax,[ds:LBATemp]
	xor edx,edx
	xor ecx,ecx
	mov cl,[ds:Sectors]
	div ecx ; EDXEAX / <op> = EAX R EDX
	inc edx
	mov [ds:LBACalc+0],edx ; Sectors
	
	mov eax,[ds:LBATemp]
	xor edx,edx
	xor ecx,ecx
	mov cl,[ds:Sectors]
	div ecx ; EDXEAX / <op> = EAX R EDX
	xor edx,edx
	xor ecx,ecx
	mov cl,[ds:Heads]
	inc ecx
	div ecx ; EDXEAX / <op> = EAX R EDX
	mov [ds:LBACalc+4],edx ; Heads

	xor ah,ah
	mov al,[ds:Heads]
	inc ax
	xor bh,bh
	mov bl,[ds:Sectors]
	mul bx ; ax * <op> = dx:ax
	xor ebx,ebx
	mov bx,dx
	shl ebx,16
	mov bx,ax
	mov ecx,ebx
	xor edx,edx
	mov eax,[ds:LBATemp] ;LBA Start
	div ecx ; EDXEAX / <op> = EAX R EDX
	cmp eax,1023
	jle CylOK
	mov eax,1023
	CylOK:
	mov [ds:LBACalc+8],eax ; Cylinders
	ret

CHSToPartition: ; AL = Head - BL = Sectors - CL = Cylinder
	mov eax,[ds:LBACalc+4] ; H
	mov ecx,[ds:LBACalc+8] ; C
	mov ebx,[ds:LBACalc+0] ; S
	
	and bl,00111111b
	shl ch,6
	and ch,11000000b
	or bl,ch
	ret

FixBoot:
	mov eax,[ds:si+0x8] ;LBA Start of the partition
	mov [ds:LBATemp],eax
	push si
	call CalcLBAToCHS

	mov si, PART
	call PUTSTR16
	mov si, PARTSTART
	call PUTSTR16
	mov si, DISKGEOMC
	call PUTSTR16
	mov eax,[ds:LBACalc+8]
	call PUTNUM_AX
	mov si, DISKGEOMH
	call PUTSTR16
	mov eax,[ds:LBACalc+4]
	call PUTNUM_AX
	mov si, DISKGEOMS
	call PUTSTR16
	mov eax,[ds:LBACalc+0]
	call PUTNUM_AX
	mov si, CRLF
	call PUTSTR16
	
	pop si
	call CHSToPartition ; AL = Head - BL = Sectors - CL = Cylinder
	mov [ds:si+0x1],al
	mov [ds:si+0x2],bl
	mov [ds:si+0x3],cl
	
	mov [ds:STARTSectTuplet+0x0],al
	mov [ds:STARTSectTuplet+0x1],bl
	mov [ds:STARTSectTuplet+0x2],cl

	;;;;;;;;;;;;;;;;;;;;

	mov eax,[ds:si+0xC] ;LBA End of the partition
	mov [ds:LBATemp],eax
	push si
	call CalcLBAToCHS

	mov si, PART
	call PUTSTR16
	mov si, PARTEND
	call PUTSTR16
	mov si, DISKGEOMC
	call PUTSTR16
	mov eax,[ds:LBACalc+8]
	call PUTNUM_AX
	mov si, DISKGEOMH
	call PUTSTR16
	mov eax,[ds:LBACalc+4]
	call PUTNUM_AX
	mov si, DISKGEOMS
	call PUTSTR16
	mov eax,[ds:LBACalc+0]
	call PUTNUM_AX
	mov si, CRLF
	call PUTSTR16
	
	pop si
	call CHSToPartition ; AL = Head - BL = Sectors - CL = Cylinder
	mov [ds:si+0x5],al
	mov [ds:si+0x6],bl
	mov [ds:si+0x7],cl
	jmp RestoreMBR

Handover:
	mov si, MBRLocation
	mov di, 0x7C00
	mov cx,512
Handovercopyloop:
	lodsb
	stosb
	loop Handovercopyloop
	xor eax,eax
	xor ebx,ebx
	xor ecx,ecx
	xor edx,edx
	mov dl,[ds:BootDrive]
	jmp 0:0x7C00
	
TestFS:
	; FAT12/16/32/NTFS - Sector Per Track (Sectors) - 0x0018 - DW
	; FAT12/16/32/NTFS - Heads Per Cylinder - 0x001A - DW
	; FAT12/16 - Magic - 0x0036 - 0x31544146 "FAT1" - DD
	; FAT32 - Magic - 0x0052 - 0x33544146 "FAT3" - DD
	; NTFS - Magic - 0x0003 - 0x5346544E "NTFS" - DD

RetryBootSect:
	xor ax,ax
	mov es,ax
	mov dh,[ds:STARTSectTuplet+0]
	mov cx,[ds:STARTSectTuplet+1]
	mov ah,0x2
	mov al,1
	mov dl,[ds:BootDrive]
	mov bx,BlankSpace
	int 0x13
	jc RetryBootSect
	
	mov si, FILESYSTEM
	call PUTSTR16
	
FSCMP:
	cmp dword [ds:BlankSpace+0x36], 0x31544146
	jz FSFAT16OK
	cmp dword [ds:BlankSpace+0x52], 0x33544146
	jz FSFAT32OK
	cmp dword [ds:BlankSpace+0x3], 0x5346544E
	jz FSNTFSOK

	mov si, UNK
	call PUTSTR16
	jmp Handover
FSFAT16OK:
	mov si, FAT16
	call PUTSTR16
	jmp FixFS
FSFAT32OK:
	mov si, FAT32
	call PUTSTR16
	jmp FixFS
FSNTFSOK:
	mov si, NTFS
	call PUTSTR16
FixFS:
	xor ax,ax
	mov al,[ds:Sectors]
	mov [ds:BlankSpace+0x18],ax
	mov al,[ds:Heads]
	cmp al,255
	jz FixFSNoChg
	inc al
FixFSNoChg:
	mov [ds:BlankSpace+0x1A],ax

RetryWriteBootSect:
	xor ax,ax
	mov es,ax
	mov dh,[ds:STARTSectTuplet+0]
	mov cx,[ds:STARTSectTuplet+1]
	mov ah,0x3
	mov al,1
	mov dl,[ds:BootDrive]
	mov bx,BlankSpace
	int 0x13
	jc RetryWriteBootSect
	
	mov si, OK
	call PUTSTR16
	
	jmp Handover

FILESYSTEM:
	db "Filesystem: ",0
NTFS:
	db "NTFS...", 0
FAT16:
	db "FAT12/16...",0
FAT32:
	db "FAT32...",0
UNK:
	db "UNKNOWN",0xd,0xa, 0

times	((LoadSectors*512)-$+$$) db 0xFF
MBR:
	db "MBR goes here"
times	(((LoadSectors+1)*512)-$+$$) db 0xFF
EOF: