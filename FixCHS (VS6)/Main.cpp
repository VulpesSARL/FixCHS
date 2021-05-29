#include <windows.h>
#include <stdio.h>

#include "MBRCode.h"

unsigned char OrigMBR[2048];

int param_install=0;
int param_force=0;
int param_newmbr=0;
int param_uninstall=0;
int param_alwaysrun=0;

int main(int argc, char *argv[])
{
	if (argc<2)
	{
		wprintf (L"Fox FixCHS V1.2 - Fixes CHS Boot issues\n");
		wprintf (L"Usage: FixCHS <Drive Number> [/i] [/f] [/m] [/u]\n");
		wprintf (L"              Drive Number - the drive to install it (normally 0)\n");
		wprintf (L"              /i           - installs FixCHS to the drive\n");
		wprintf (L"              /a           - always run FixCHS on boot (for USB Sticks)\n");
		wprintf (L"              /f           - forces installation of FixCHS to the drive\n");
		wprintf (L"              /m           - installs a new generic MBR\n");
		wprintf (L"              /u           - uninstalls FixCHS from the drive\n");
		wprintf (L"                                 (in case of failure to boot)\n");
		return(1);
	}

	int i;

	for (i=2;i<argc;i++)
	{
		if (strcmp(argv[i], "/i")==0)
			param_install=1;
		if (strcmp(argv[i], "/f")==0)
			param_force=1;
		if (strcmp(argv[i], "/m")==0)
			param_newmbr=1;
		if (strcmp(argv[i], "/u")==0)
			param_uninstall=1;
		if (strcmp(argv[i], "/a")==0)
			param_alwaysrun=1;
	}

	if (param_install==0 && param_uninstall==0)
	{
		wprintf (L"Please specify /i or /u\n");
		return(5);
	}

	if (param_install==1 && param_uninstall==1)
	{
		wprintf (L"You cannot specify both /i and /u\n");
		return(5);
	}

	unsigned j;

	for (j=0;j<strlen(argv[1]);j++)
	{
		if (isdigit(argv[1][j])==0)
		{
			wprintf (L"Invalid Drive Number\n");
			return(5);
		}
	}
	int DriveNumber = atoi(argv[1]);
	if (DriveNumber<0)
	{
		wprintf (L"Invalid Drive Number\n");
		return(5);
	}
	wchar_t Drive[1024];

	swprintf (Drive, L"\\\\.\\PHYSICALDRIVE%i", DriveNumber);

	HANDLE file = CreateFile (Drive, GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, NULL);

	if (file==INVALID_HANDLE_VALUE)
	{
		wprintf (L"Cannot open Disk%i\n",DriveNumber);
		return(1);
	}

	DWORD written=0;

	if (ReadFile (file, OrigMBR, 2048, &written, NULL)==0)
	{
		CloseHandle (file);
		wprintf (L"Cannot read from Disk%i\n",DriveNumber);
		return(1);
	}

	if (written!=2048)
	{
		CloseHandle (file);
		wprintf (L"Read did not complete fully on Disk%i\n",DriveNumber);
		return(1);
	}

	SetFilePointer (file, 0, 0, FILE_BEGIN);

	if (OrigMBR[0x1FE]!=0x55 || OrigMBR[0x1FF]!=0xAA)
	{
		CloseHandle (file);
		wprintf (L"Missing boot signature on Disk%i (0x55AA)\n",DriveNumber);
		return(1);
	}

	if (param_install==1)
	{
		char FoxInstallTest[50];
		memset (FoxInstallTest, 0, sizeof(FoxInstallTest));
		memcpy (FoxInstallTest, &OrigMBR[2], 9);
		if (strcmp(FoxInstallTest,"FOXCHSFIX")==0)
		{
			CloseHandle (file);
			wprintf (L"Fox FixCHS is already installed on Disk%i\n",DriveNumber);
			return(1);
		}

		if (OrigMBR[0x1BE]!=0x80 && OrigMBR[0x1CE]!=0x80 && OrigMBR[0x1DE]!=0x80 && OrigMBR[0x1EE]!=0x80)
		{
			CloseHandle (file);
			wprintf (L"No active partition found on Disk%i\n",DriveNumber);
			return(1);
		}

		for (int i=512;i<2048;i++)
		{
			if (OrigMBR[i]!=0)
			{
				wprintf (L"Sector 1,2 & 3 on Disk%i are not blank.\n",DriveNumber);
				if (param_force==0)
				{
					CloseHandle (file);
					return(1);
				}
				else
				{
					wprintf (L"Parameter /f specified - installing it anyway\n");
					break;
				}
			}
		}
		if (param_newmbr==0)
		{
			memcpy (&MBRCode[0x1B5], &OrigMBR[0x1B5], 0x49); //copy Partitiontable & NT ID
			memcpy (&MBRCode[0x600], &OrigMBR[0], 0x200); //Copy original MBR
		}
		else
		{
			memcpy (&MBRCode[0x1B5], &OrigMBR[0x1B5], 0x49); //copy Partitiontable & NT ID
			memcpy (&MBRCode[0x600], &MBRGeneric[0], 0x200); //Copy alternative MBR
			memcpy (&MBRCode[0x7B5], &OrigMBR[0x1B5], 0x49); //copy Partitiontable & NT ID
		}
		if (param_alwaysrun==1)
		{
			MBRCode[0xF4]=0x90;
			MBRCode[0xF5]=0x90;
			MBRCode[0xF6]=0x90;
			MBRCode[0xF7]=0x90;
		}
#ifdef NDEBUG
		if (WriteFile (file, MBRCode, sizeof(MBRCode), &written, NULL)==0)
		{
			CloseHandle (file);
			wprintf (L"Cannot write to Disk%i\n",DriveNumber);
			return(1);
		}
#endif
		wprintf (L"Fox FixCHS installed successfully to Disk%i\n",DriveNumber);
	}
	if (param_uninstall==1)
	{
		char FoxInstallTest[50];
		memset (FoxInstallTest, 0, sizeof(FoxInstallTest));
		memcpy (FoxInstallTest, &OrigMBR[2], 9);
		if (strcmp(FoxInstallTest,"FOXCHSFIX")!=0)
		{
			CloseHandle (file);
			wprintf (L"Fox FixCHS is not installed on Disk%i\n",DriveNumber);
			return(1);
		}

		memcpy (&OrigMBR[0], &OrigMBR[0x600], 0x200);
		memset (&OrigMBR[0x200], 0, 0x600);
#ifdef NDEBUG
		if (WriteFile (file, OrigMBR, sizeof(OrigMBR), &written, NULL)==0)
		{
			CloseHandle (file);
			wprintf (L"Cannot write to Disk%i\n",DriveNumber);
			return(1);
		}
#endif
		wprintf (L"Fox FixCHS uninstalled successfully from Disk%i\n",DriveNumber);
	}

	CloseHandle (file);

	return(0);
}