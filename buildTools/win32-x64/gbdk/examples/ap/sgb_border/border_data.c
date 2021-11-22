const unsigned char border_chr[]={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x00,
0x02,0x02,0x0b,0x08,0x1c,0x13,0x30,0x2f,0x61,0x5f,0x22,0x1e,0xc4,0xbc,0x49,0x39,0xfe,0xfd,0xfb,0xf4,0xfc,0xe0,0xf0,0xc0,0xe0,0x81,0xa0,0xc3,0xc0,0x07,0x40,0x8f,
0x7f,0x80,0x80,0x7f,0x00,0xff,0x38,0xf8,0x80,0x80,0x1c,0x1f,0xc0,0xff,0x00,0xff,0x7f,0x00,0x80,0x00,0x00,0x00,0x00,0x3f,0x00,0xff,0x00,0xfc,0x00,0xc0,0x00,0x00,
0xff,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
0xfe,0x01,0x01,0xfe,0x00,0xff,0x1c,0x1f,0x01,0x01,0x38,0xf8,0x03,0xff,0x00,0xff,0xfe,0x00,0x01,0x00,0x00,0x00,0x00,0xfc,0x00,0xff,0x00,0x3f,0x00,0x03,0x00,0x00,
0x40,0x40,0xd0,0x10,0x38,0xc8,0x0c,0xf4,0x86,0xfa,0x44,0x78,0x23,0x3d,0x92,0x9c,0x7f,0xbf,0xdf,0x2f,0x3f,0x07,0x0f,0x03,0x07,0x81,0x05,0xc3,0x03,0xe0,0x02,0xf1,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xfe,0xfe,0xfe,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,
0x4a,0xbb,0x82,0x73,0x90,0x73,0x94,0x77,0x94,0x77,0x84,0x67,0x80,0x67,0x80,0x67,0x40,0x0e,0x80,0x0e,0x80,0x1c,0x80,0x1c,0x80,0x1c,0x80,0x1c,0x80,0x18,0x80,0x18,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0x00,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,0x00,
0x00,0xff,0x00,0xff,0x0e,0xfe,0x09,0xfd,0x09,0xff,0x09,0xfd,0x0e,0xfe,0x00,0xff,0x00,0x00,0x00,0x00,0x06,0x01,0x00,0x02,0x00,0x00,0x00,0x02,0x06,0x01,0x00,0x00,
0x00,0xff,0x00,0xff,0x33,0xb7,0x49,0xcf,0x49,0xff,0x49,0xcf,0x31,0xb7,0x00,0xff,0x00,0x00,0x00,0x00,0x31,0x48,0x00,0x30,0x00,0x00,0x00,0x30,0x30,0x48,0x00,0x00,
0x00,0xff,0x00,0xff,0x81,0xff,0x01,0xfd,0x03,0xff,0x02,0xfe,0x02,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x03,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0x42,0xfa,0x45,0x5d,0xe5,0xf7,0xaf,0xbf,0x28,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x40,0x05,0x05,0xa2,0xe0,0x08,0x0a,0x40,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0x3b,0xff,0x12,0xff,0x13,0x7f,0x92,0xff,0x92,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x01,0x80,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0x94,0xbd,0x52,0x7a,0x91,0xbd,0x92,0xba,0x54,0x7d,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x42,0x02,0x85,0x80,0x42,0x02,0x45,0x00,0x82,0x00,0x00,
0x00,0xff,0x00,0xff,0x41,0x7f,0x81,0xbf,0x01,0x7f,0x80,0xbe,0x40,0x7f,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x40,0x01,0x80,0x80,0x41,0x00,0x80,0x00,0x00,
0x00,0xff,0x00,0xff,0x15,0xff,0x14,0xff,0x54,0x5f,0xa4,0xaf,0xa4,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xa0,0xa0,0x50,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0xd2,0xff,0x92,0xff,0x9e,0xff,0x92,0xff,0x92,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0x07,0xf7,0x08,0xfb,0x06,0xf6,0x01,0xfd,0x0e,0xfe,0x00,0xff,0x00,0x00,0x00,0x00,0x05,0x08,0x00,0x04,0x00,0x09,0x00,0x02,0x0a,0x01,0x00,0x00,
0x00,0xff,0x00,0xff,0x77,0xff,0x24,0xff,0x27,0xff,0x24,0xff,0x27,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0x73,0xf7,0x4a,0xef,0x73,0xf7,0x52,0xf7,0x4b,0xef,0x00,0xff,0x00,0x00,0x00,0x00,0x21,0x08,0x00,0x10,0x30,0x08,0x00,0x08,0x01,0x10,0x00,0x00,
0x00,0xff,0x00,0xff,0x98,0xdb,0x24,0xe7,0xa4,0xff,0x24,0xe7,0x98,0xdb,0x00,0xff,0x00,0x00,0x00,0x00,0x18,0x24,0x00,0x18,0x80,0x00,0x00,0x18,0x18,0x24,0x00,0x00,
0x00,0xff,0x00,0xff,0x0e,0xef,0x10,0xf7,0x0c,0xed,0x02,0xfb,0x1c,0xfd,0x00,0xff,0x00,0x00,0x00,0x00,0x0a,0x10,0x00,0x08,0x00,0x12,0x00,0x04,0x14,0x02,0x00,0x00,
0x00,0xff,0x00,0xff,0x64,0x6f,0x94,0x9f,0x94,0xff,0x94,0x9c,0x63,0x6b,0x00,0xff,0x00,0x00,0x00,0x00,0x64,0x90,0x00,0x60,0x00,0x00,0x00,0x63,0x63,0x94,0x00,0x00,
0x00,0xff,0x00,0xff,0xa5,0xff,0xb5,0xff,0xbd,0xff,0xad,0xff,0x25,0x7f,0x00,0xff,0x00,0x00,0x00,0x00,0x84,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x20,0x80,0x00,0x00,
0x00,0xff,0x00,0xff,0xc0,0xdf,0x20,0xbf,0x20,0xff,0x20,0xbf,0xc0,0xdf,0x00,0xff,0x00,0x00,0x00,0x00,0xc0,0x20,0x00,0x40,0x00,0x00,0x00,0x40,0xc0,0x20,0x00,0x00,
0x52,0xdd,0x41,0xce,0x09,0xce,0x29,0xee,0x29,0xee,0x21,0xe6,0x01,0xe6,0x01,0xe6,0x02,0x70,0x01,0x70,0x01,0x38,0x01,0x38,0x01,0x38,0x01,0x38,0x01,0x18,0x01,0x18,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x7f,0x7f,0x7f,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,
0x80,0x67,0x80,0x67,0x80,0x67,0x80,0x67,0x80,0x67,0x80,0x67,0x80,0x67,0x80,0x67,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x01,0xfe,0x03,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x80,0x7f,0xc0,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xc0,0x00,
0x01,0xe6,0x01,0xe6,0x01,0xe6,0x01,0xe6,0x01,0xe6,0x01,0xe6,0x01,0xe6,0x01,0xe6,0x01,0x18,0x01,0x18,0x01,0x18,0x01,0x18,0x01,0x18,0x01,0x18,0x01,0x18,0x01,0x18,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,
0x03,0xfc,0x03,0xfc,0x03,0xfc,0x03,0xfc,0x03,0xfc,0x03,0xfc,0x03,0xfc,0x03,0xfc,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,
0x3c,0xc3,0x78,0x83,0xec,0x00,0xfc,0x00,0xfd,0x01,0x39,0x83,0x02,0x87,0x18,0xdb,0x3c,0x00,0x44,0x10,0x92,0x39,0x82,0x39,0x83,0x10,0x45,0x00,0x3a,0x40,0x18,0x24,
0x00,0xff,0x00,0xff,0xc4,0xd5,0xae,0xff,0xca,0xdf,0xae,0xff,0xca,0xdf,0x00,0xff,0x00,0x00,0x00,0x00,0x40,0x2a,0x2e,0x00,0xc0,0x20,0x2e,0x00,0x40,0x20,0x00,0x00,
0x00,0xff,0x00,0xff,0xee,0xff,0x44,0xff,0x44,0xff,0x44,0xff,0x44,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0xee,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0xee,0xff,0x8a,0xff,0xec,0xfd,0x8a,0xfb,0xea,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0xec,0x02,0x02,0x04,0x60,0x00,0x00,0x00,
0x03,0xfc,0x03,0xfc,0xa3,0xfc,0xa3,0xbc,0xe3,0xfc,0x43,0xfc,0x43,0xfc,0x03,0xfc,0x03,0x00,0x03,0x00,0xa3,0x00,0x03,0x40,0xe3,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,
0x29,0xee,0x2a,0xec,0x2a,0xec,0x0a,0xcc,0x03,0xcd,0x43,0xcd,0x53,0xdd,0x55,0xd9,0x01,0x38,0x02,0x39,0x02,0x39,0x02,0x39,0x03,0x30,0x03,0x70,0x02,0x70,0x04,0x72,
0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x01,0xff,0x01,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,
0x15,0x99,0x06,0x9a,0xa6,0xba,0xaa,0xb2,0x28,0x30,0x0c,0x34,0x4c,0x74,0x54,0x64,0x04,0x72,0x07,0x61,0x07,0xe1,0x09,0xe5,0x0b,0xe7,0x0f,0xc3,0x0f,0xc3,0x13,0xcb,
0x00,0xfe,0x02,0xfe,0x00,0xfc,0x01,0xf9,0x08,0xf9,0x00,0xf3,0x04,0xe7,0x21,0xe6,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x07,0x00,0x0e,0x00,0x0c,0x00,0x1c,0x01,0x38,
0x10,0x60,0x98,0xe8,0x20,0xc0,0x30,0xd0,0x40,0x80,0x60,0xa0,0xc0,0x40,0x40,0x40,0x17,0x8f,0x1f,0x87,0x2f,0x1f,0x3f,0x0f,0x5f,0x3f,0x5f,0x1f,0xff,0x3f,0x3f,0xbf,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,
0x80,0x67,0x80,0x67,0x84,0x67,0x94,0x77,0x94,0x77,0x90,0x73,0x82,0x73,0x4a,0xbb,0x80,0x18,0x80,0x18,0x80,0x1c,0x80,0x1c,0x80,0x1c,0x80,0x1c,0x80,0x0e,0x40,0x0e,
0x03,0xfc,0x01,0xfe,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x03,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xc0,0x3f,0x80,0x7f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xc0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x03,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0x00,0xff,0x00,0xff,0x00,0xfe,0x00,0xfc,0x08,0xf8,0x02,0xe3,0x40,0xc7,0x11,0x1e,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x0f,0x00,0x1e,0x00,0x78,0x01,0xf0,
0x41,0xce,0x93,0x9d,0x27,0x3b,0x4a,0x72,0x14,0xe4,0x28,0xc8,0x70,0xb0,0xc0,0x40,0x01,0x70,0x03,0xf0,0x06,0xe0,0x09,0xc5,0x13,0x0b,0x27,0x17,0x6f,0x0f,0xff,0x3f,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x49,0x39,0xc4,0xbc,0x22,0x1e,0x61,0x5f,0x30,0x2f,0x1c,0x13,0x0b,0x08,0x02,0x02,0x40,0x8f,0xc0,0x07,0xa0,0xc3,0xe0,0x81,0xf0,0xc0,0xfc,0xe0,0xfb,0xf4,0xfe,0xfd,
0x00,0xff,0xc0,0xff,0x1c,0x1f,0x80,0x80,0x38,0xf8,0x00,0xff,0x80,0x7f,0x7f,0x80,0x00,0x00,0x00,0xc0,0x00,0xfc,0x00,0xff,0x00,0x3f,0x00,0x00,0x80,0x00,0x7f,0x00,
0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0x00,
0x00,0xff,0x07,0xff,0xe0,0xe0,0x03,0x03,0xf0,0xff,0x01,0xfe,0x7e,0x80,0x8f,0x0f,0x00,0x00,0x00,0x07,0x00,0xff,0x00,0xff,0x00,0xf0,0x01,0x00,0x7e,0x01,0x8c,0x70,
0x30,0xf0,0x03,0x03,0x38,0x3f,0x81,0xfe,0x1e,0xe0,0xe7,0x07,0x70,0x70,0x80,0x80,0x00,0x3f,0x00,0xff,0x00,0xf8,0x01,0x80,0x1e,0x01,0xe6,0x18,0x6f,0x8f,0x7f,0x7f,
0x42,0x7c,0x0f,0xf3,0x34,0xc4,0xd0,0x10,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xc1,0x0e,0x00,0x33,0x0b,0xdf,0x2f,0x7f,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x04,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfb,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9c,0xe3,0xff,0x00,0xf3,0x0c,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9c,0x7f,0xff,0xff,0xf3,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x87,0xcf,0x08,0x87,0x48,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0x7f,0xff,0xf7,0xb7,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x80,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x7f,0xff,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x28,0x70,0x48,0x38,0x40,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xd7,0xff,0xf7,0xbf,0xbf,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x1c,0x08,0x14,0x3c,0x20,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xef,0xeb,0xff,0xff,0xdf,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x20,0x3f,0x20,0x1f,0x20,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xdf,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x10,0xf0,0x10,0xd0,0x30,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xef,0xdf,0xef,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x01,0x3f,0x20,0x3b,0x24,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xdf,0xfb,0xdf,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xc0,0xc0,0x20,0xe0,0x11,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xbf,0xdf,0xff,0xee,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4a,0x76,0x7f,0x81,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcb,0xbd,0x7f,0xfe,0xff,0xff,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x10,0x38,0x48,0x70,0x48,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xbf,0xf7,0xf7,0xbf,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x24,0x70,0x48,0x38,0x48,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xfb,0xf7,0xbf,0xbf,0xf7,
0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x08,0x7c,0x04,0x78,0x04,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,0xff,0xff,0xfb,0xfb,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xec,0x02,0xec,0x02,0xe0,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,0xfd,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x10,0xf8,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x0e,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x0f,0x08,0x0e,0x01,0x0c,0x12,0x1e,0x02,0x38,0x24,0x1c,0x24,0x3c,0x04,0x38,0x00,0xff,0xf7,0xfe,0xff,0xed,0xff,0xff,0xfd,0xfb,0xdf,0xdf,0xfb,0xff,0xfb,0xff,0xff,
0x63,0xe3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x41,0xfe,0x80,0x7f,0x9c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xfe,0xff,0x7f,
0x4f,0xc0,0x1f,0x10,0x0f,0x10,0x1d,0x02,0x3f,0x22,0x18,0x25,0x3c,0x05,0x77,0x4f,0x7f,0xbf,0xff,0xef,0xef,0xff,0xfd,0xff,0xff,0xdd,0xda,0xff,0xfe,0xfb,0xf7,0xb8,
0xc0,0x40,0xc0,0x40,0x80,0x40,0x80,0x40,0xc0,0x00,0xe0,0x20,0xe1,0x21,0xc0,0x21,0xff,0xbf,0xff,0xbf,0xbf,0xff,0xbf,0xff,0xff,0xff,0xff,0xdf,0xff,0xde,0xde,0xff,
0x3c,0x44,0x7c,0x04,0xf8,0x84,0x78,0x84,0x7c,0x80,0xdf,0x23,0xde,0x23,0xed,0x32,0xbf,0xfb,0xff,0xfb,0xfb,0x7f,0x7b,0xff,0x7f,0xff,0xdf,0xfc,0xde,0xfd,0xed,0xdf,
0x1c,0x20,0x7e,0x42,0x3e,0x42,0xfe,0x82,0x6c,0x92,0xcc,0x32,0xec,0x32,0x9e,0x50,0xdf,0xff,0xff,0xbd,0xbf,0xfd,0xff,0x7d,0x6d,0xff,0xcd,0xff,0xed,0xdf,0xbf,0xef,
0x1c,0x24,0x1c,0x24,0x38,0x00,0x30,0x08,0x30,0x08,0x7f,0x40,0x7f,0x40,0x7f,0x40,0xdf,0xfb,0xdf,0xfb,0xff,0xff,0xf7,0xff,0xf7,0xff,0xff,0xbf,0xff,0xbf,0xff,0xbf,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x20,0xe0,0x20,0xa0,0x60,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xff,0xdf,0xbf,0xdf,
0x1c,0x24,0x18,0x20,0x38,0x00,0x30,0x08,0x76,0x4f,0x7f,0x40,0x3f,0x40,0x3f,0x40,0xdf,0xfb,0xdf,0xff,0xff,0xff,0xf7,0xff,0xf6,0xb9,0xff,0xbf,0xbf,0xff,0xbf,0xff,
0x73,0x82,0xf1,0x82,0xf1,0x82,0x67,0x94,0xf3,0x14,0xc3,0x24,0xf3,0x14,0xe7,0x10,0x7f,0xfd,0xfd,0x7f,0xfd,0x7f,0x6f,0xfb,0xfb,0xef,0xdb,0xff,0xfb,0xef,0xef,0xff,
0xe7,0x18,0xe3,0x24,0x87,0x44,0xc3,0x40,0x03,0x80,0x83,0x80,0x83,0x80,0x07,0x04,0xe7,0xff,0xfb,0xdf,0xbf,0xfb,0xff,0xbf,0x7f,0xff,0xff,0x7f,0xff,0x7f,0xff,0xfb,
0xb0,0x88,0x98,0xa0,0x3d,0xa5,0x18,0x85,0x8f,0x12,0x9f,0x10,0x8f,0x00,0x06,0x89,0xf7,0x7f,0xdf,0x7f,0x7f,0xda,0x7a,0xff,0xef,0xfd,0xff,0xef,0xff,0xff,0x76,0xff,
0xe0,0x90,0x70,0x90,0xc0,0x20,0xe0,0x20,0x80,0x40,0xc0,0x40,0x00,0x80,0x80,0x80,0xef,0x7f,0x7f,0xef,0xdf,0xff,0xff,0xdf,0xbf,0xff,0xff,0xbf,0x7f,0xff,0xff,0x7f,
0x76,0x0a,0x7c,0x0a,0x73,0x05,0x76,0x05,0x71,0x02,0x73,0x02,0x70,0x01,0x00,0x00,0xf7,0xfd,0xfd,0xf7,0xfb,0xfe,0xfe,0xfb,0xfd,0xff,0xff,0xfd,0xfe,0xff,0xff,0xff,
0xe0,0x0e,0xee,0x00,0xee,0x00,0xee,0x00,0xee,0x00,0xee,0x00,0xee,0x00,0x00,0x00,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xe8,0x0e,0xfe,0x01,0xee,0x19,0xf7,0x10,0xe7,0x00,0xe7,0x00,0xe7,0x00,0x00,0x00,0xf9,0xf7,0xfe,0xff,0xee,0xf7,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x61,0x12,0x63,0x14,0x63,0x14,0x67,0x10,0x63,0x14,0x63,0x14,0x61,0x12,0x00,0x00,0xed,0xff,0xeb,0xff,0xeb,0xff,0xef,0xff,0xeb,0xff,0xeb,0xff,0xed,0xff,0xff,0xff,
0xe3,0x10,0xf3,0xc8,0x33,0x08,0xfb,0x00,0x03,0x00,0x53,0x68,0xe3,0x10,0x00,0x00,0xef,0xff,0xf7,0x3f,0xf7,0xff,0xff,0xff,0xff,0xff,0xd7,0xbf,0xef,0xff,0xff,0xff,
0xa0,0x38,0xf8,0x05,0xb8,0x65,0xdd,0x40,0x9c,0x01,0x9c,0x01,0x9c,0x00,0x00,0x00,0xe7,0xdf,0xfa,0xff,0xba,0xdf,0xff,0xbf,0xfe,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,
0x7e,0x80,0xfe,0x30,0xce,0x00,0xce,0x00,0xce,0x00,0xfe,0x30,0x7e,0x80,0x00,0x00,0x7f,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0x7f,0xff,0xff,0xff,
0x3c,0x42,0x7e,0x99,0x66,0x81,0xe7,0x00,0x66,0x81,0x7e,0x99,0x3c,0x42,0x00,0x00,0xbd,0xff,0x7e,0xe7,0x7e,0xff,0xff,0xff,0x7e,0xff,0x7e,0xe7,0xbd,0xff,0xff,0xff,
0x38,0x00,0x3c,0x04,0x3c,0x04,0x18,0x24,0x3d,0x23,0x0f,0x10,0x07,0x08,0x05,0x06,0xff,0xff,0xff,0xfb,0xff,0xfb,0xdb,0xff,0xfd,0xde,0xef,0xff,0xf7,0xff,0xfd,0xfb,
0x7c,0x82,0x0e,0x12,0x1c,0x00,0x38,0x24,0x7c,0x44,0x79,0x81,0xf0,0x09,0xd1,0x30,0x7d,0xff,0xef,0xfd,0xff,0xff,0xfb,0xdf,0xff,0xbb,0x7f,0xfe,0xf6,0xff,0xdf,0xef,
0x3f,0x40,0x7f,0x00,0xef,0x9f,0x70,0x90,0xe0,0x00,0xc0,0x20,0xe0,0x20,0xc0,0x00,0xbf,0xff,0xff,0xff,0xef,0x70,0x7f,0xef,0xff,0xff,0xdf,0xff,0xff,0xdf,0xff,0xff,
0xc0,0x21,0xe1,0x00,0x73,0x92,0x71,0x92,0xe1,0x92,0xe3,0x90,0x7f,0x0c,0x3b,0x4c,0xde,0xff,0xff,0xff,0x7f,0xed,0x7d,0xef,0xed,0x7f,0xef,0x7f,0xff,0xf3,0xbb,0xf7,
0xcd,0x12,0x9f,0x50,0x8f,0x40,0xc6,0x49,0x87,0x09,0x0c,0x8a,0x0e,0x8a,0x80,0x84,0xed,0xff,0xbf,0xef,0xbf,0xff,0xf6,0xbf,0xf7,0xfe,0x7d,0xf7,0x7f,0xf5,0xfb,0x7f,
0xde,0x50,0x0f,0x81,0x8f,0x81,0x07,0x09,0x06,0x09,0x06,0x09,0x0e,0x09,0x0f,0x08,0xff,0xaf,0x7f,0xfe,0xff,0x7e,0xf7,0xfe,0xf6,0xff,0xf6,0xff,0xfe,0xf7,0xff,0xf7,
0x38,0x48,0x38,0x48,0xb0,0xc0,0xe0,0x90,0xe0,0x90,0xff,0x80,0xff,0x80,0xff,0x80,0xbf,0xf7,0xbf,0xf7,0xbf,0x7f,0xef,0x7f,0xef,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x7f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x10,0xf0,0x10,0xd0,0x30,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xef,0xdf,0xef,
0x79,0x09,0x78,0x08,0xf0,0x80,0xe0,0x90,0x6d,0x9e,0x7f,0x80,0xff,0x00,0xf9,0x07,0xff,0xf6,0xff,0xf7,0xff,0x7f,0xef,0x7f,0x6d,0xf3,0x7f,0xff,0xff,0xff,0xf9,0xfe,
0x77,0x80,0xf7,0x80,0xf3,0x84,0x63,0x94,0xf7,0x14,0xc3,0x20,0x83,0x42,0x81,0x81,0x7f,0xff,0xff,0x7f,0xfb,0x7f,0x6b,0xff,0xff,0xeb,0xdf,0xff,0xbf,0xfd,0xff,0x7e,
0x07,0x04,0x03,0x04,0x8f,0x88,0x16,0x99,0xaf,0x71,0xfc,0x02,0xf8,0x04,0x48,0xb8,0xff,0xfb,0xfb,0xff,0xff,0x77,0x76,0xef,0xaf,0xde,0xfd,0xff,0xfb,0xff,0x4f,0xf7,
0x0e,0x89,0x8e,0x89,0x87,0x89,0x07,0x09,0x0e,0x00,0x0e,0x00,0x1c,0x12,0x1c,0x12,0x7e,0xf7,0xfe,0x77,0xf7,0x7e,0xf7,0xfe,0xff,0xff,0xff,0xff,0xfd,0xef,0xfd,0xef,
0x00,0x00,0x00,0x00,0x1c,0x22,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x00,0x08,0xff,0xff,0xff,0xff,0xdd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf7,0xff,
0x00,0x00,0x00,0x00,0x00,0x88,0x88,0x50,0xf8,0x20,0xa8,0x50,0xa8,0x00,0x20,0xa8,0xff,0xff,0xff,0xff,0x77,0xff,0xaf,0xff,0xff,0xdf,0xaf,0xff,0xff,0xff,0x77,0xdf,
};
extern const unsigned int border_chr_size = sizeof(border_chr);
const unsigned char border_map[]={
0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,
0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,
0x00,0x10,0x00,0x10,0x01,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,
0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0x03,0x10,0x00,0x10,0x00,0x10,
0x00,0x10,0x04,0x10,0x05,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,
0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x06,0x10,0x07,0x10,0x08,0x10,0x00,0x10,
0x09,0x10,0x0a,0x10,0x0b,0x10,0x0c,0x10,0x0c,0x10,0x0c,0x10,0x0c,0x10,0x0c,0x10,0x0c,0x10,0x0c,0x10,0x0d,0x10,0x0e,0x10,0x0f,0x10,0x10,0x10,0x11,0x10,0x12,0x10,
0x13,0x10,0x14,0x10,0x15,0x10,0x16,0x10,0x17,0x10,0x18,0x10,0x19,0x10,0x1a,0x10,0x1b,0x10,0x1c,0x10,0x1d,0x10,0x0c,0x10,0x0c,0x10,0x0b,0x10,0x1e,0x10,0x1f,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x22,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,
0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x23,0x10,0x24,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x2a,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x2b,0x10,0x2c,0x10,0x2d,0x10,0x2e,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x26,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x25,0x10,0x2f,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x30,0x10,0x31,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x32,0x10,0x33,0x10,0x00,0x10,
0x20,0x10,0x21,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x27,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,
0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x28,0x10,0x29,0x10,0x0b,0x10,0x0b,0x10,0x34,0x10,0x35,0x10,0x00,0x10,
0x36,0x10,0x37,0x10,0x0b,0x10,0x0b,0x10,0x0b,0x10,0x38,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,
0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x39,0x10,0x3a,0x10,0x3b,0x10,0x3c,0x10,0x3d,0x10,0x3e,0x10,0x00,0x10,
0x00,0x10,0x3f,0x10,0x40,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,
0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x41,0x10,0x42,0x10,0x43,0x10,0x44,0x10,0x45,0x10,0x00,0x10,0x00,0x10,
0x00,0x10,0x00,0x10,0x46,0x10,0x47,0x10,0x47,0x10,0x47,0x10,0x47,0x10,0x47,0x10,0x47,0x10,0x47,0x10,0x48,0x10,0x49,0x10,0x4a,0x10,0x4b,0x10,0x4c,0x10,0x4d,0x10,
0x4e,0x10,0x4f,0x10,0x50,0x10,0x51,0x10,0x52,0x10,0x53,0x10,0x54,0x10,0x47,0x10,0x47,0x10,0x55,0x10,0x56,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,
0x00,0x10,0x00,0x10,0x57,0x10,0x58,0x10,0x00,0x10,0x59,0x10,0x00,0x10,0x00,0x10,0x5a,0x10,0x00,0x10,0x5b,0x10,0x5c,0x10,0x5d,0x10,0x5e,0x10,0x5f,0x10,0x60,0x10,
0x61,0x10,0x62,0x10,0x63,0x10,0x64,0x10,0x65,0x10,0x66,0x10,0x67,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,
0x00,0x10,0x00,0x10,0x68,0x10,0x69,0x10,0x6a,0x10,0x6b,0x10,0x6c,0x10,0x6d,0x10,0x6e,0x10,0x6f,0x10,0x70,0x10,0x71,0x10,0x72,0x10,0x73,0x10,0x74,0x10,0x75,0x10,
0x76,0x10,0x77,0x10,0x78,0x10,0x79,0x10,0x7a,0x10,0x7b,0x10,0x7c,0x10,0x7d,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,
};
extern const unsigned int border_map_size = sizeof(border_map);
const unsigned char border_pal[]={
0x1f,0x7c,0x98,0x39,0xad,0x3d,0x19,0x63,0x11,0x31,0x49,0x1d,0xed,0x2c,0x94,0x52,0xef,0x45,0xdf,0x59,0xab,0x51,0xce,0x41,0x7c,0x73,0x06,0x3d,0x1f,0x7c,0x1f,0x7c,
};
extern const unsigned int border_pal_size = sizeof(border_pal);