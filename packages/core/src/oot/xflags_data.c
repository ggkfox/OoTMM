#include <combo.h>
const u16 kXflagsTableScenes[] = {
  0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf,
  0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
  0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
  0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
  0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4f, 0x50,
  0x51, 0x52, 0x55, 0x59, 0x5d, 0x5f, 0x62, 0x64, 0x66, 0x68, 0x6b, 0x6d, 0x6f, 0x71, 0x74, 0x75,
  0x76, 0x78, 0x7a, 0x7c, 0x80, 0x81,
};

const u16 kXflagsTableSetups[] = {
  0x0, 0xc, 0x1d, 0x2d, 0x44, 0x5f, 0x76, 0x93, 0xaa, 0xb1, 0xbd, 0xc7, 0xd2, 0xd8, 0xec, 0xf1,
  0xf3, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x10a, 0x10c, 0x10d, 0x10e, 0x10f, 0x110, 0x111, 0x112,
  0x113, 0x114, 0x115, 0x116, 0x117, 0x118, 0x119, 0x11a, 0x11b, 0x11c, 0x11d, 0x11e, 0x11f, 0x120, 0x121, 0x122,
  0x123, 0x124, 0x125, 0x126, 0x127, 0x128, 0x129, 0x12a, 0x12b, 0x12c, 0x12d, 0x12e, 0x12f, 0x130, 0x131, 0x13f,
  0x140, 0x141, 0x144, 0x145, 0x147, 0x148, 0x149, 0x14a, 0x14b, 0x152, 0x153, 0x154, 0x155, 0x158, 0x159, 0x15a,
  0x15b, 0x15c, 0x15d, 0x15e, 0x15f, 0x160, 0x161, 0x162, 0x163, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170,
  0x173, 0x176, 0x179, 0x17a, 0x17b, 0x17c, 0x17d, 0x17f, 0x181, 0x182, 0x183, 0x184, 0x185, 0x186, 0x190, 0x19a,
  0x19b, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a5, 0x1a6, 0x1a7, 0x1a9, 0x1ab, 0x1af, 0x1b3, 0x1b4, 0x1b5, 0x1b6,
  0x1b7, 0x1b8,
};

const u16 kXflagsTableRooms[] = {
  0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0x2e,
  0x3a, 0x48, 0x48, 0x48, 0x50, 0x67, 0x77, 0x89, 0x89, 0x90, 0x90, 0x94, 0x94, 0x94, 0xa5, 0xbc,
  0xbc, 0xbc, 0xbc, 0xca, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xf2, 0xf2, 0xfa, 0x109, 0x109, 0x109, 0x109,
  0x11a, 0x11a, 0x11a, 0x11a, 0x126, 0x126, 0x126, 0x126, 0x126, 0x126, 0x126, 0x12e, 0x135, 0x135, 0x13d, 0x14c,
  0x14c, 0x14c, 0x14c, 0x14c, 0x14c, 0x157, 0x174, 0x180, 0x180, 0x180, 0x180, 0x184, 0x184, 0x184, 0x184, 0x1bf,
  0x1bf, 0x1bf, 0x1bf, 0x1bf, 0x1bf, 0x1c6, 0x1c6, 0x1d6, 0x1e5, 0x1e5, 0x1e5, 0x1e5, 0x1e5, 0x1e5, 0x1e5, 0x1e5,
  0x200, 0x200, 0x200, 0x21b, 0x22b, 0x22b, 0x237, 0x23b, 0x23b, 0x24b, 0x25f, 0x25f, 0x25f, 0x25f, 0x26f, 0x26f,
  0x279, 0x288, 0x288, 0x288, 0x29e, 0x2b2, 0x2b2, 0x2c8, 0x2d4, 0x2e2, 0x2e8, 0x2f5, 0x319, 0x319, 0x319, 0x332,
  0x33b, 0x33b, 0x33b, 0x33b, 0x33b, 0x33b, 0x34b, 0x351, 0x351, 0x351, 0x351, 0x351, 0x351, 0x351, 0x362, 0x367,
  0x374, 0x374, 0x381, 0x381, 0x38b, 0x391, 0x391, 0x391, 0x391, 0x391, 0x391, 0x391, 0x391, 0x391, 0x398, 0x398,
  0x398, 0x3a1, 0x3a1, 0x3a1, 0x3a1, 0x3a4, 0x3a4, 0x3a4, 0x3ab, 0x3c2, 0x3c2, 0x3f1, 0x429, 0x429, 0x430, 0x430,
  0x439, 0x43e, 0x442, 0x449, 0x44b, 0x45e, 0x45e, 0x45e, 0x465, 0x465, 0x465, 0x471, 0x471, 0x471, 0x471, 0x471,
  0x471, 0x471, 0x471, 0x471, 0x471, 0x471, 0x484, 0x484, 0x48d, 0x48d, 0x48d, 0x48d, 0x48d, 0x48d, 0x48d, 0x48d,
  0x48d, 0x48d, 0x48d, 0x493, 0x493, 0x49c, 0x4a3, 0x4ae, 0x4bc, 0x4bc, 0x4bc, 0x4bc, 0x4c0, 0x4c6, 0x4c6, 0x4c6,
  0x4cc, 0x4d7, 0x4d7, 0x4d7, 0x4dd, 0x4ed, 0x4f3, 0x4f3, 0x4f9, 0x4f9, 0x4f9, 0x4f9, 0x4ff, 0x4ff, 0x4ff, 0x4ff,
  0x4ff, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519, 0x519,
  0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x520, 0x561, 0x561, 0x561,
  0x561, 0x561, 0x561, 0x561, 0x561, 0x561, 0x561, 0x561, 0x561, 0x561, 0x569, 0x56d, 0x56d, 0x56d, 0x56d, 0x572,
  0x572, 0x572, 0x572, 0x572, 0x572, 0x572, 0x572, 0x572, 0x575, 0x575, 0x575, 0x575, 0x575, 0x575, 0x575, 0x575,
  0x575, 0x575, 0x575, 0x575, 0x575, 0x575, 0x57d, 0x57d, 0x57d, 0x57d, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589,
  0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x589, 0x58f, 0x58f, 0x58f, 0x58f,
  0x58f, 0x58f, 0x58f, 0x58f, 0x58f, 0x58f, 0x58f, 0x58f, 0x592, 0x5c6, 0x5d2, 0x5d2, 0x5d2, 0x5d2, 0x5d2, 0x5d2,
  0x5d2, 0x5e5, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7,
  0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x5f7, 0x603, 0x603, 0x603, 0x61d,
  0x61d, 0x623, 0x63b, 0x653, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680,
  0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680, 0x680,
  0x680, 0x680, 0x680, 0x684, 0x684, 0x68e, 0x68e, 0x68e, 0x68e, 0x6a1, 0x6a1, 0x6b2, 0x6b2, 0x6ba, 0x6be, 0x6ec,
  0x6ec, 0x6f0, 0x6f4, 0x701, 0x70b, 0x714, 0x714, 0x714, 0x714,
};

