unsigned char MBRCode[2048] = {
	0xEB, 0x09, 0x46, 0x4F, 0x58, 0x43, 0x48, 0x53, 0x46, 0x49, 0x58, 0x8C, 0xC8, 0x8E, 0xD8, 0x8E, 
	0xC0, 0x3E, 0x88, 0x16, 0x20, 0x90, 0xFA, 0xB8, 0x00, 0x20, 0x8E, 0xD0, 0xBC, 0x00, 0xF0, 0xFB, 
	0xBE, 0x3B, 0x7D, 0xE8, 0xDB, 0x00, 0x31, 0xC0, 0x8E, 0xC0, 0xB4, 0x02, 0xB0, 0x03, 0xB5, 0x00, 
	0xB1, 0x02, 0xB6, 0x00, 0x3E, 0x8A, 0x16, 0x20, 0x90, 0xBB, 0x00, 0x7E, 0xCD, 0x13, 0x72, 0xE6, 
	0xBE, 0x52, 0x7D, 0xE8, 0xBB, 0x00, 0x31, 0xC0, 0x8E, 0xC0, 0xBF, 0x00, 0x00, 0xB4, 0x08, 0x3E, 
	0x8A, 0x16, 0x20, 0x90, 0xCD, 0x13, 0x72, 0xEE, 0x3E, 0x88, 0x36, 0x40, 0x90, 0x88, 0xCA, 0x80, 
	0xE2, 0x3F, 0x3E, 0x88, 0x16, 0x50, 0x90, 0x80, 0xE1, 0xC0, 0xC0, 0xE9, 0x06, 0x86, 0xCD, 0x3E, 
	0x89, 0x0E, 0x30, 0x90, 0xBE, 0x57, 0x7D, 0xE8, 0x87, 0x00, 0xBE, 0x6F, 0x7D, 0xE8, 0x81, 0x00, 
	0x3E, 0xA1, 0x30, 0x90, 0x40, 0xE8, 0x87, 0x00, 0xBE, 0x72, 0x7D, 0xE8, 0x73, 0x00, 0x31, 0xC0, 
	0x3E, 0xA0, 0x40, 0x90, 0x40, 0xE8, 0x77, 0x00, 0xBE, 0x76, 0x7D, 0xE8, 0x63, 0x00, 0x31, 0xC0, 
	0x3E, 0xA0, 0x50, 0x90, 0xE8, 0x68, 0x00, 0xBE, 0x9F, 0x7D, 0xE8, 0x54, 0x00, 0xB9, 0x04, 0x00, 
	0xBE, 0xBE, 0x83, 0x3E, 0x80, 0x3C, 0x80, 0x0F, 0x84, 0xE3, 0x01, 0x83, 0xC6, 0x10, 0xE2, 0xF0, 
	0xBE, 0x7A, 0x7D, 0xE8, 0x3B, 0x00, 0xBE, 0x9F, 0x7D, 0xE8, 0x35, 0x00, 0xEB, 0xFE, 0xBE, 0x94, 
	0x7D, 0xE8, 0x2D, 0x00, 0x30, 0xC0, 0xBF, 0x00, 0x84, 0xB9, 0x00, 0x06, 0xF3, 0xAA, 0x31, 0xC0, 
	0x8E, 0xC0, 0xB4, 0x03, 0xB0, 0x04, 0xB5, 0x00, 0xB1, 0x01, 0xB6, 0x00, 0x3E, 0x8A, 0x16, 0x20, 
	0x90, 0xBB, 0x00, 0x82, 0xCD, 0x13, 0x72, 0xE6, 0xBE, 0x52, 0x7D, 0xE8, 0x03, 0x00, 0xE9, 0x85, 
	0x02, 0xAC, 0x20, 0xC0, 0x74, 0x08, 0xB4, 0x0E, 0x31, 0xDB, 0xCD, 0x10, 0xEB, 0xF3, 0xC3, 0xFC, 
	0xBB, 0x00, 0x90, 0xB9, 0x08, 0x00, 0x2E, 0xC6, 0x07, 0x00, 0x43, 0xE2, 0xF9, 0xBB, 0x07, 0x90, 
	0xB9, 0x0A, 0x00, 0xBA, 0x00, 0x00, 0xF7, 0xF1, 0x80, 0xC2, 0x30, 0x2E, 0x88, 0x17, 0x4B, 0x83, 
	0xF8, 0x00, 0x75, 0xEC, 0x43, 0x89, 0xDE, 0xE8, 0xC7, 0xFF, 0xC3, 0x46, 0x6F, 0x78, 0x20, 0x46, 
	0x69, 0x78, 0x20, 0x43, 0x48, 0x53, 0x20, 0x4C, 0x6F, 0x61, 0x64, 0x69, 0x6E, 0x67, 0x2E, 0x2E, 
	0x2E, 0x00, 0x4F, 0x4B, 0x0D, 0x0A, 0x00, 0x44, 0x69, 0x73, 0x6B, 0x20, 0x00, 0x50, 0x61, 0x72, 
	0x74, 0x20, 0x00, 0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x00, 0x45, 0x6E, 0x64, 0x20, 0x00, 0x43, 
	0x3D, 0x00, 0x20, 0x48, 0x3D, 0x00, 0x20, 0x53, 0x3D, 0x00, 0x4E, 0x6F, 0x20, 0x61, 0x63, 0x74, 
	0x69, 0x76, 0x65, 0x20, 0x70, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x66, 0x6F, 
	0x75, 0x6E, 0x64, 0x00, 0x57, 0x72, 0x69, 0x74, 0x69, 0x6E, 0x67, 0x2E, 0x2E, 0x2E, 0x00, 0x0D, 
	0x0A, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA, 
	0x3E, 0x66, 0xA1, 0x60, 0x90, 0x66, 0x31, 0xD2, 0x66, 0x31, 0xC9, 0x3E, 0x8A, 0x0E, 0x50, 0x90, 
	0x66, 0xF7, 0xF1, 0x66, 0x42, 0x3E, 0x66, 0x89, 0x16, 0x10, 0x90, 0x3E, 0x66, 0xA1, 0x60, 0x90, 
	0x66, 0x31, 0xD2, 0x66, 0x31, 0xC9, 0x3E, 0x8A, 0x0E, 0x50, 0x90, 0x66, 0xF7, 0xF1, 0x66, 0x31, 
	0xD2, 0x66, 0x31, 0xC9, 0x3E, 0x8A, 0x0E, 0x40, 0x90, 0x66, 0x41, 0x66, 0xF7, 0xF1, 0x3E, 0x66, 
	0x89, 0x16, 0x14, 0x90, 0x30, 0xE4, 0x3E, 0xA0, 0x40, 0x90, 0x40, 0x30, 0xFF, 0x3E, 0x8A, 0x1E, 
	0x50, 0x90, 0xF7, 0xE3, 0x66, 0x31, 0xDB, 0x89, 0xD3, 0x66, 0xC1, 0xE3, 0x10, 0x89, 0xC3, 0x66, 
	0x89, 0xD9, 0x66, 0x31, 0xD2, 0x3E, 0x66, 0xA1, 0x60, 0x90, 0x66, 0xF7, 0xF1, 0x66, 0x3D, 0xFF, 
	0x03, 0x00, 0x00, 0x7E, 0x06, 0x66, 0xB8, 0xFF, 0x03, 0x00, 0x00, 0x3E, 0x66, 0xA3, 0x18, 0x90, 
	0xC3, 0x3E, 0x66, 0xA1, 0x14, 0x90, 0x3E, 0x66, 0x8B, 0x0E, 0x18, 0x90, 0x3E, 0x66, 0x8B, 0x1E, 
	0x10, 0x90, 0x80, 0xE3, 0x3F, 0xC0, 0xE5, 0x06, 0x80, 0xE5, 0xC0, 0x08, 0xEB, 0xC3, 0x3E, 0x66, 
	0x8B, 0x44, 0x08, 0x3E, 0x66, 0xA3, 0x60, 0x90, 0x56, 0xE8, 0x54, 0xFF, 0xBE, 0x5D, 0x7D, 0xE8, 
	0x4F, 0xFE, 0xBE, 0x63, 0x7D, 0xE8, 0x49, 0xFE, 0xBE, 0x6F, 0x7D, 0xE8, 0x43, 0xFE, 0x3E, 0x66, 
	0xA1, 0x18, 0x90, 0xE8, 0x49, 0xFE, 0xBE, 0x72, 0x7D, 0xE8, 0x35, 0xFE, 0x3E, 0x66, 0xA1, 0x14, 
	0x90, 0xE8, 0x3B, 0xFE, 0xBE, 0x76, 0x7D, 0xE8, 0x27, 0xFE, 0x3E, 0x66, 0xA1, 0x10, 0x90, 0xE8, 
	0x2D, 0xFE, 0xBE, 0x9F, 0x7D, 0xE8, 0x19, 0xFE, 0x5E, 0xE8, 0x95, 0xFF, 0x3E, 0x88, 0x44, 0x01, 
	0x3E, 0x88, 0x5C, 0x02, 0x3E, 0x88, 0x4C, 0x03, 0x3E, 0xA2, 0x70, 0x90, 0x3E, 0x88, 0x1E, 0x71, 
	0x90, 0x3E, 0x88, 0x0E, 0x72, 0x90, 0x3E, 0x66, 0x8B, 0x44, 0x0C, 0x3E, 0x66, 0xA3, 0x60, 0x90, 
	0x56, 0xE8, 0xEC, 0xFE, 0xBE, 0x5D, 0x7D, 0xE8, 0xE7, 0xFD, 0xBE, 0x6A, 0x7D, 0xE8, 0xE1, 0xFD, 
	0xBE, 0x6F, 0x7D, 0xE8, 0xDB, 0xFD, 0x3E, 0x66, 0xA1, 0x18, 0x90, 0xE8, 0xE1, 0xFD, 0xBE, 0x72, 
	0x7D, 0xE8, 0xCD, 0xFD, 0x3E, 0x66, 0xA1, 0x14, 0x90, 0xE8, 0xD3, 0xFD, 0xBE, 0x76, 0x7D, 0xE8, 
	0xBF, 0xFD, 0x3E, 0x66, 0xA1, 0x10, 0x90, 0xE8, 0xC5, 0xFD, 0xBE, 0x9F, 0x7D, 0xE8, 0xB1, 0xFD, 
	0x5E, 0xE8, 0x2D, 0xFF, 0x3E, 0x88, 0x44, 0x05, 0x3E, 0x88, 0x5C, 0x06, 0x3E, 0x88, 0x4C, 0x07, 
	0xE9, 0x6B, 0xFD, 0xBE, 0x00, 0x82, 0xBF, 0x00, 0x7C, 0xB9, 0x00, 0x02, 0xAC, 0xAA, 0xE2, 0xFC, 
	0x66, 0x31, 0xC0, 0x66, 0x31, 0xDB, 0x66, 0x31, 0xC9, 0x66, 0x31, 0xD2, 0x3E, 0x8A, 0x16, 0x20, 
	0x90, 0xEA, 0x00, 0x7C, 0x00, 0x00, 0x31, 0xC0, 0x8E, 0xC0, 0x3E, 0x8A, 0x36, 0x70, 0x90, 0x3E, 
	0x8B, 0x0E, 0x71, 0x90, 0xB4, 0x02, 0xB0, 0x01, 0x3E, 0x8A, 0x16, 0x20, 0x90, 0xBB, 0x00, 0x84, 
	0xCD, 0x13, 0x72, 0xE2, 0xBE, 0x2B, 0x80, 0xE8, 0x57, 0xFD, 0x3E, 0x66, 0x81, 0x3E, 0x36, 0x84, 
	0x46, 0x41, 0x54, 0x31, 0x74, 0x20, 0x3E, 0x66, 0x81, 0x3E, 0x52, 0x84, 0x46, 0x41, 0x54, 0x33, 
	0x74, 0x1C, 0x3E, 0x66, 0x81, 0x3E, 0x03, 0x84, 0x4E, 0x54, 0x46, 0x53, 0x74, 0x18, 0xBE, 0x55, 
	0x80, 0xE8, 0x2D, 0xFD, 0xEB, 0x8D, 0xBE, 0x40, 0x80, 0xE8, 0x25, 0xFD, 0xEB, 0x0E, 0xBE, 0x4C, 
	0x80, 0xE8, 0x1D, 0xFD, 0xEB, 0x06, 0xBE, 0x38, 0x80, 0xE8, 0x15, 0xFD, 0x31, 0xC0, 0x3E, 0xA0, 
	0x50, 0x90, 0x3E, 0xA3, 0x18, 0x84, 0x3E, 0xA0, 0x40, 0x90, 0x3C, 0xFF, 0x74, 0x02, 0xFE, 0xC0, 
	0x3E, 0xA3, 0x1A, 0x84, 0x31, 0xC0, 0x8E, 0xC0, 0x3E, 0x8A, 0x36, 0x70, 0x90, 0x3E, 0x8B, 0x0E, 
	0x71, 0x90, 0xB4, 0x03, 0xB0, 0x01, 0x3E, 0x8A, 0x16, 0x20, 0x90, 0xBB, 0x00, 0x84, 0xCD, 0x13, 
	0x72, 0xE2, 0xBE, 0x52, 0x7D, 0xE8, 0xD9, 0xFC, 0xE9, 0x38, 0xFF, 0x46, 0x69, 0x6C, 0x65, 0x73, 
	0x79, 0x73, 0x74, 0x65, 0x6D, 0x3A, 0x20, 0x00, 0x4E, 0x54, 0x46, 0x53, 0x2E, 0x2E, 0x2E, 0x00, 
	0x46, 0x41, 0x54, 0x31, 0x32, 0x2F, 0x31, 0x36, 0x2E, 0x2E, 0x2E, 0x00, 0x46, 0x41, 0x54, 0x33, 
	0x32, 0x2E, 0x2E, 0x2E, 0x00, 0x55, 0x4E, 0x4B, 0x4E, 0x4F, 0x57, 0x4E, 0x0D, 0x0A, 0x00, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x4D, 0x42, 0x52, 0x20, 0x67, 0x6F, 0x65, 0x73, 0x20, 0x68, 0x65, 0x72, 0x65, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

unsigned char MBRGeneric[512] = {
	0x33, 0xC0, 0x8E, 0xD0, 0xBC, 0x00, 0x7C, 0xFB, 0x50, 0x07, 0x50, 0x1F, 0xFC, 0xBE, 0x1B, 0x7C, 
	0xBF, 0x1B, 0x06, 0x50, 0x57, 0xB9, 0xE5, 0x01, 0xF3, 0xA4, 0xCB, 0xBD, 0xBE, 0x07, 0xB1, 0x04, 
	0x38, 0x6E, 0x00, 0x7C, 0x09, 0x75, 0x13, 0x83, 0xC5, 0x10, 0xE2, 0xF4, 0xCD, 0x18, 0x8B, 0xF5, 
	0x83, 0xC6, 0x10, 0x49, 0x74, 0x19, 0x38, 0x2C, 0x74, 0xF6, 0xA0, 0xB5, 0x07, 0xB4, 0x07, 0x8B, 
	0xF0, 0xAC, 0x3C, 0x00, 0x74, 0xFC, 0xBB, 0x07, 0x00, 0xB4, 0x0E, 0xCD, 0x10, 0xEB, 0xF2, 0x88, 
	0x4E, 0x10, 0xE8, 0x46, 0x00, 0x73, 0x2A, 0xFE, 0x46, 0x10, 0x80, 0x7E, 0x04, 0x0B, 0x74, 0x0B, 
	0x80, 0x7E, 0x04, 0x0C, 0x74, 0x05, 0xA0, 0xB6, 0x07, 0x75, 0xD2, 0x80, 0x46, 0x02, 0x06, 0x83, 
	0x46, 0x08, 0x06, 0x83, 0x56, 0x0A, 0x00, 0xE8, 0x21, 0x00, 0x73, 0x05, 0xA0, 0xB6, 0x07, 0xEB, 
	0xBC, 0x81, 0x3E, 0xFE, 0x7D, 0x55, 0xAA, 0x74, 0x0B, 0x80, 0x7E, 0x10, 0x00, 0x74, 0xC8, 0xA0, 
	0xB7, 0x07, 0xEB, 0xA9, 0x8B, 0xFC, 0x1E, 0x57, 0x8B, 0xF5, 0xCB, 0xBF, 0x05, 0x00, 0x8A, 0x56, 
	0x00, 0xB4, 0x08, 0xCD, 0x13, 0x72, 0x23, 0x8A, 0xC1, 0x24, 0x3F, 0x98, 0x8A, 0xDE, 0x8A, 0xFC, 
	0x43, 0xF7, 0xE3, 0x8B, 0xD1, 0x86, 0xD6, 0xB1, 0x06, 0xD2, 0xEE, 0x42, 0xF7, 0xE2, 0x39, 0x56, 
	0x0A, 0x77, 0x23, 0x72, 0x05, 0x39, 0x46, 0x08, 0x73, 0x1C, 0xB8, 0x01, 0x02, 0xBB, 0x00, 0x7C, 
	0x8B, 0x4E, 0x02, 0x8B, 0x56, 0x00, 0xCD, 0x13, 0x73, 0x51, 0x4F, 0x74, 0x4E, 0x32, 0xE4, 0x8A, 
	0x56, 0x00, 0xCD, 0x13, 0xEB, 0xE4, 0x8A, 0x56, 0x00, 0x60, 0xBB, 0xAA, 0x55, 0xB4, 0x41, 0xCD, 
	0x13, 0x72, 0x36, 0x81, 0xFB, 0x55, 0xAA, 0x75, 0x30, 0xF6, 0xC1, 0x01, 0x74, 0x2B, 0x61, 0x60, 
	0x6A, 0x00, 0x6A, 0x00, 0xFF, 0x76, 0x0A, 0xFF, 0x76, 0x08, 0x6A, 0x00, 0x68, 0x00, 0x7C, 0x6A, 
	0x01, 0x6A, 0x10, 0xB4, 0x42, 0x8B, 0xF4, 0xCD, 0x13, 0x61, 0x61, 0x73, 0x0E, 0x4F, 0x74, 0x0B, 
	0x32, 0xE4, 0x8A, 0x56, 0x00, 0xCD, 0x13, 0xEB, 0xD6, 0x61, 0xF9, 0xC3, 0x49, 0x6E, 0x76, 0x61, 
	0x6C, 0x69, 0x64, 0x20, 0x70, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x74, 0x61, 
	0x62, 0x6C, 0x65, 0x00, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x6C, 0x6F, 0x61, 0x64, 0x69, 0x6E, 
	0x67, 0x20, 0x6F, 0x70, 0x65, 0x72, 0x61, 0x74, 0x69, 0x6E, 0x67, 0x20, 0x73, 0x79, 0x73, 0x74, 
	0x65, 0x6D, 0x00, 0x4D, 0x69, 0x73, 0x73, 0x69, 0x6E, 0x67, 0x20, 0x6F, 0x70, 0x65, 0x72, 0x61, 
	0x74, 0x69, 0x6E, 0x67, 0x20, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};