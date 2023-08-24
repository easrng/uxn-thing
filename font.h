char font[256][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 0x00 (nul)
    {0x00, 0x4e, 0x6a, 0x4a, 0x4a, 0xee, 0x00, 0xff}, // 0x01
    {0x00, 0xee, 0x8a, 0xca, 0x2a, 0xee, 0x00, 0xff}, // 0x02
    {0x00, 0xee, 0x8a, 0xca, 0x8a, 0xee, 0x00, 0xff}, // 0x03
    {0x00, 0xae, 0xaa, 0xea, 0x8a, 0x8e, 0x00, 0xff}, // 0x04
    {0x00, 0xee, 0x2a, 0x6a, 0x8a, 0x6e, 0x00, 0xff}, // 0x05
    {0x00, 0xee, 0x2a, 0xea, 0xaa, 0xee, 0x00, 0xff}, // 0x06
    {0x00, 0xee, 0x8a, 0x4a, 0x4a, 0x2e, 0x00, 0xff}, // 0x07
    {0x00, 0xee, 0xaa, 0xea, 0xaa, 0xee, 0x00, 0xff}, // 0x08
    {0x00, 0xee, 0xaa, 0xea, 0x8a, 0x8e, 0x00, 0xff}, // 0x09
    {0x00, 0x4e, 0xaa, 0xaa, 0xea, 0xae, 0x00, 0xff}, // 0x0a
    {0x00, 0x6e, 0xaa, 0x6a, 0xaa, 0x6e, 0x00, 0xff}, // 0x0b
    {0x00, 0xee, 0x2a, 0x2a, 0x2a, 0xee, 0x00, 0xff}, // 0x0c
    {0x00, 0x6e, 0xaa, 0xaa, 0xaa, 0x6e, 0x00, 0xff}, // 0x0d
    {0x00, 0xee, 0x2a, 0xea, 0x2a, 0xee, 0x00, 0xff}, // 0x0e
    {0x00, 0xee, 0x2a, 0xea, 0x2a, 0x2e, 0x00, 0xff}, // 0x0f
    {0x00, 0xe4, 0xa6, 0xa4, 0xa4, 0xee, 0x00, 0xff}, // 0x10
    {0x00, 0x44, 0x66, 0x44, 0x44, 0xee, 0x00, 0xff}, // 0x11
    {0x00, 0xe4, 0x86, 0xc4, 0x24, 0xee, 0x00, 0xff}, // 0x12
    {0x00, 0xe4, 0x86, 0xc4, 0x84, 0xee, 0x00, 0xff}, // 0x13
    {0x00, 0xa4, 0xa6, 0xe4, 0x84, 0x8e, 0x00, 0xff}, // 0x14
    {0x00, 0xe4, 0x26, 0x64, 0x84, 0x6e, 0x00, 0xff}, // 0x15
    {0x00, 0xe4, 0x26, 0xe4, 0xa4, 0xee, 0x00, 0xff}, // 0x16
    {0x00, 0xe4, 0x86, 0x44, 0x44, 0x2e, 0x00, 0xff}, // 0x17
    {0x00, 0xe4, 0xa6, 0xe4, 0xa4, 0xee, 0x00, 0xff}, // 0x18
    {0x00, 0xe4, 0xa6, 0xe4, 0x84, 0x8e, 0x00, 0xff}, // 0x19
    {0x00, 0x44, 0xa6, 0xa4, 0xe4, 0xae, 0x00, 0xff}, // 0x1a
    {0x00, 0x64, 0xa6, 0x64, 0xa4, 0x6e, 0x00, 0xff}, // 0x1b
    {0x00, 0xe4, 0x26, 0x24, 0x24, 0xee, 0x00, 0xff}, // 0x1c
    {0x00, 0x64, 0xa6, 0xa4, 0xa4, 0x6e, 0x00, 0xff}, // 0x1d
    {0x00, 0xe4, 0x26, 0xe4, 0x24, 0xee, 0x00, 0xff}, // 0x1e
    {0x00, 0xe4, 0x26, 0xe4, 0x24, 0x2e, 0x00, 0xff}, // 0x1f
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 ( )
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0xee, 0x28, 0xe4, 0x24, 0x22, 0x00, 0xff}, // 0x7f
    {0x00, 0xee, 0xaa, 0xae, 0xaa, 0xee, 0x00, 0xff}, // 0x80
    {0x00, 0x4e, 0x6a, 0x4e, 0x4a, 0xee, 0x00, 0xff}, // 0x81
    {0x00, 0xee, 0x8a, 0xce, 0x2a, 0xee, 0x00, 0xff}, // 0x82
    {0x00, 0xee, 0x8a, 0xce, 0x8a, 0xee, 0x00, 0xff}, // 0x83
    {0x00, 0xae, 0xaa, 0xee, 0x8a, 0x8e, 0x00, 0xff}, // 0x84
    {0x00, 0xee, 0x2a, 0x6e, 0x8a, 0x6e, 0x00, 0xff}, // 0x85
    {0x00, 0xee, 0x2a, 0xee, 0xaa, 0xee, 0x00, 0xff}, // 0x86
    {0x00, 0xee, 0x8a, 0x4e, 0x4a, 0x2e, 0x00, 0xff}, // 0x87
    {0x00, 0xee, 0xaa, 0xee, 0xaa, 0xee, 0x00, 0xff}, // 0x88
    {0x00, 0xee, 0xaa, 0xee, 0x8a, 0x8e, 0x00, 0xff}, // 0x89
    {0x00, 0x4e, 0xaa, 0xae, 0xea, 0xae, 0x00, 0xff}, // 0x8a
    {0x00, 0x6e, 0xaa, 0x6e, 0xaa, 0x6e, 0x00, 0xff}, // 0x8b
    {0x00, 0xee, 0x2a, 0x2e, 0x2a, 0xee, 0x00, 0xff}, // 0x8c
    {0x00, 0x6e, 0xaa, 0xae, 0xaa, 0x6e, 0x00, 0xff}, // 0x8d
    {0x00, 0xee, 0x2a, 0xee, 0x2a, 0xee, 0x00, 0xff}, // 0x8e
    {0x00, 0xee, 0x2a, 0xee, 0x2a, 0x2e, 0x00, 0xff}, // 0x8f
    {0x00, 0xee, 0xaa, 0xae, 0xa8, 0xe8, 0x00, 0xff}, // 0x90
    {0x00, 0x4e, 0x6a, 0x4e, 0x48, 0xe8, 0x00, 0xff}, // 0x91
    {0x00, 0xee, 0x8a, 0xce, 0x28, 0xe8, 0x00, 0xff}, // 0x92
    {0x00, 0xee, 0x8a, 0xce, 0x88, 0xe8, 0x00, 0xff}, // 0x93
    {0x00, 0xae, 0xaa, 0xee, 0x88, 0x88, 0x00, 0xff}, // 0x94
    {0x00, 0xee, 0x2a, 0x6e, 0x88, 0x68, 0x00, 0xff}, // 0x95
    {0x00, 0xee, 0x2a, 0xee, 0xa8, 0xe8, 0x00, 0xff}, // 0x96
    {0x00, 0xee, 0x8a, 0x4e, 0x48, 0x28, 0x00, 0xff}, // 0x97
    {0x00, 0xee, 0xaa, 0xee, 0xa8, 0xe8, 0x00, 0xff}, // 0x98
    {0x00, 0xee, 0xaa, 0xee, 0x88, 0x88, 0x00, 0xff}, // 0x99
    {0x00, 0x4e, 0xaa, 0xae, 0xe8, 0xa8, 0x00, 0xff}, // 0x9a
    {0x00, 0x6e, 0xaa, 0x6e, 0xa8, 0x68, 0x00, 0xff}, // 0x9b
    {0x00, 0xee, 0x2a, 0x2e, 0x28, 0xe8, 0x00, 0xff}, // 0x9c
    {0x00, 0x6e, 0xaa, 0xae, 0xa8, 0x68, 0x00, 0xff}, // 0x9d
    {0x00, 0xee, 0x2a, 0xee, 0x28, 0xe8, 0x00, 0xff}, // 0x9e
    {0x00, 0xee, 0x2a, 0xee, 0x28, 0x28, 0x00, 0xff}, // 0x9f
    {0x00, 0xe4, 0xaa, 0xaa, 0xae, 0xea, 0x00, 0xff}, // 0xa0
    {0x00, 0x44, 0x6a, 0x4a, 0x4e, 0xea, 0x00, 0xff}, // 0xa1
    {0x00, 0xe4, 0x8a, 0xca, 0x2e, 0xea, 0x00, 0xff}, // 0xa2
    {0x00, 0xe4, 0x8a, 0xca, 0x8e, 0xea, 0x00, 0xff}, // 0xa3
    {0x00, 0xa4, 0xaa, 0xea, 0x8e, 0x8a, 0x00, 0xff}, // 0xa4
    {0x00, 0xe4, 0x2a, 0x6a, 0x8e, 0x6a, 0x00, 0xff}, // 0xa5
    {0x00, 0xe4, 0x2a, 0xea, 0xae, 0xea, 0x00, 0xff}, // 0xa6
    {0x00, 0xe4, 0x8a, 0x4a, 0x4e, 0x2a, 0x00, 0xff}, // 0xa7
    {0x00, 0xe4, 0xaa, 0xea, 0xae, 0xea, 0x00, 0xff}, // 0xa8
    {0x00, 0xe4, 0xaa, 0xea, 0x8e, 0x8a, 0x00, 0xff}, // 0xa9
    {0x00, 0x44, 0xaa, 0xaa, 0xee, 0xaa, 0x00, 0xff}, // 0xaa
    {0x00, 0x64, 0xaa, 0x6a, 0xae, 0x6a, 0x00, 0xff}, // 0xab
    {0x00, 0xe4, 0x2a, 0x2a, 0x2e, 0xea, 0x00, 0xff}, // 0xac
    {0x00, 0x64, 0xaa, 0xaa, 0xae, 0x6a, 0x00, 0xff}, // 0xad
    {0x00, 0xe4, 0x2a, 0xea, 0x2e, 0xea, 0x00, 0xff}, // 0xae
    {0x00, 0xe4, 0x2a, 0xea, 0x2e, 0x2a, 0x00, 0xff}, // 0xaf
    {0x00, 0xe6, 0xaa, 0xa6, 0xaa, 0xe6, 0x00, 0xff}, // 0xb0
    {0x00, 0x46, 0x6a, 0x46, 0x4a, 0xe6, 0x00, 0xff}, // 0xb1
    {0x00, 0xe6, 0x8a, 0xc6, 0x2a, 0xe6, 0x00, 0xff}, // 0xb2
    {0x00, 0xe6, 0x8a, 0xc6, 0x8a, 0xe6, 0x00, 0xff}, // 0xb3
    {0x00, 0xa6, 0xaa, 0xe6, 0x8a, 0x86, 0x00, 0xff}, // 0xb4
    {0x00, 0xe6, 0x2a, 0x66, 0x8a, 0x66, 0x00, 0xff}, // 0xb5
    {0x00, 0xe6, 0x2a, 0xe6, 0xaa, 0xe6, 0x00, 0xff}, // 0xb6
    {0x00, 0xe6, 0x8a, 0x46, 0x4a, 0x26, 0x00, 0xff}, // 0xb7
    {0x00, 0xe6, 0xaa, 0xe6, 0xaa, 0xe6, 0x00, 0xff}, // 0xb8
    {0x00, 0xe6, 0xaa, 0xe6, 0x8a, 0x86, 0x00, 0xff}, // 0xb9
    {0x00, 0x46, 0xaa, 0xa6, 0xea, 0xa6, 0x00, 0xff}, // 0xba
    {0x00, 0x66, 0xaa, 0x66, 0xaa, 0x66, 0x00, 0xff}, // 0xbb
    {0x00, 0xe6, 0x2a, 0x26, 0x2a, 0xe6, 0x00, 0xff}, // 0xbc
    {0x00, 0x66, 0xaa, 0xa6, 0xaa, 0x66, 0x00, 0xff}, // 0xbd
    {0x00, 0xe6, 0x2a, 0xe6, 0x2a, 0xe6, 0x00, 0xff}, // 0xbe
    {0x00, 0xe6, 0x2a, 0xe6, 0x2a, 0x26, 0x00, 0xff}, // 0xbf
    {0x00, 0xee, 0xa2, 0xa2, 0xa2, 0xee, 0x00, 0xff}, // 0xc0
    {0x00, 0x4e, 0x62, 0x42, 0x42, 0xee, 0x00, 0xff}, // 0xc1
    {0x00, 0xee, 0x82, 0xc2, 0x22, 0xee, 0x00, 0xff}, // 0xc2
    {0x00, 0xee, 0x82, 0xc2, 0x82, 0xee, 0x00, 0xff}, // 0xc3
    {0x00, 0xae, 0xa2, 0xe2, 0x82, 0x8e, 0x00, 0xff}, // 0xc4
    {0x00, 0xee, 0x22, 0x62, 0x82, 0x6e, 0x00, 0xff}, // 0xc5
    {0x00, 0xee, 0x22, 0xe2, 0xa2, 0xee, 0x00, 0xff}, // 0xc6
    {0x00, 0xee, 0x82, 0x42, 0x42, 0x2e, 0x00, 0xff}, // 0xc7
    {0x00, 0xee, 0xa2, 0xe2, 0xa2, 0xee, 0x00, 0xff}, // 0xc8
    {0x00, 0xee, 0xa2, 0xe2, 0x82, 0x8e, 0x00, 0xff}, // 0xc9
    {0x00, 0x4e, 0xa2, 0xa2, 0xe2, 0xae, 0x00, 0xff}, // 0xca
    {0x00, 0x6e, 0xa2, 0x62, 0xa2, 0x6e, 0x00, 0xff}, // 0xcb
    {0x00, 0xee, 0x22, 0x22, 0x22, 0xee, 0x00, 0xff}, // 0xcc
    {0x00, 0x6e, 0xa2, 0xa2, 0xa2, 0x6e, 0x00, 0xff}, // 0xcd
    {0x00, 0xee, 0x22, 0xe2, 0x22, 0xee, 0x00, 0xff}, // 0xce
    {0x00, 0xee, 0x22, 0xe2, 0x22, 0x2e, 0x00, 0xff}, // 0xcf
    {0x00, 0xe6, 0xaa, 0xaa, 0xaa, 0xe6, 0x00, 0xff}, // 0xd0
    {0x00, 0x46, 0x6a, 0x4a, 0x4a, 0xe6, 0x00, 0xff}, // 0xd1
    {0x00, 0xe6, 0x8a, 0xca, 0x2a, 0xe6, 0x00, 0xff}, // 0xd2
    {0x00, 0xe6, 0x8a, 0xca, 0x8a, 0xe6, 0x00, 0xff}, // 0xd3
    {0x00, 0xa6, 0xaa, 0xea, 0x8a, 0x86, 0x00, 0xff}, // 0xd4
    {0x00, 0xe6, 0x2a, 0x6a, 0x8a, 0x66, 0x00, 0xff}, // 0xd5
    {0x00, 0xe6, 0x2a, 0xea, 0xaa, 0xe6, 0x00, 0xff}, // 0xd6
    {0x00, 0xe6, 0x8a, 0x4a, 0x4a, 0x26, 0x00, 0xff}, // 0xd7
    {0x00, 0xe6, 0xaa, 0xea, 0xaa, 0xe6, 0x00, 0xff}, // 0xd8
    {0x00, 0xe6, 0xaa, 0xea, 0x8a, 0x86, 0x00, 0xff}, // 0xd9
    {0x00, 0x46, 0xaa, 0xaa, 0xea, 0xa6, 0x00, 0xff}, // 0xda
    {0x00, 0x66, 0xaa, 0x6a, 0xaa, 0x66, 0x00, 0xff}, // 0xdb
    {0x00, 0xe6, 0x2a, 0x2a, 0x2a, 0xe6, 0x00, 0xff}, // 0xdc
    {0x00, 0x66, 0xaa, 0xaa, 0xaa, 0x66, 0x00, 0xff}, // 0xdd
    {0x00, 0xe6, 0x2a, 0xea, 0x2a, 0xe6, 0x00, 0xff}, // 0xde
    {0x00, 0xe6, 0x2a, 0xea, 0x2a, 0x26, 0x00, 0xff}, // 0xdf
    {0x00, 0xee, 0xa2, 0xae, 0xa2, 0xee, 0x00, 0xff}, // 0xe0
    {0x00, 0x4e, 0x62, 0x4e, 0x42, 0xee, 0x00, 0xff}, // 0xe1
    {0x00, 0xee, 0x82, 0xce, 0x22, 0xee, 0x00, 0xff}, // 0xe2
    {0x00, 0xee, 0x82, 0xce, 0x82, 0xee, 0x00, 0xff}, // 0xe3
    {0x00, 0xae, 0xa2, 0xee, 0x82, 0x8e, 0x00, 0xff}, // 0xe4
    {0x00, 0xee, 0x22, 0x6e, 0x82, 0x6e, 0x00, 0xff}, // 0xe5
    {0x00, 0xee, 0x22, 0xee, 0xa2, 0xee, 0x00, 0xff}, // 0xe6
    {0x00, 0xee, 0x82, 0x4e, 0x42, 0x2e, 0x00, 0xff}, // 0xe7
    {0x00, 0xee, 0xa2, 0xee, 0xa2, 0xee, 0x00, 0xff}, // 0xe8
    {0x00, 0xee, 0xa2, 0xee, 0x82, 0x8e, 0x00, 0xff}, // 0xe9
    {0x00, 0x4e, 0xa2, 0xae, 0xe2, 0xae, 0x00, 0xff}, // 0xea
    {0x00, 0x6e, 0xa2, 0x6e, 0xa2, 0x6e, 0x00, 0xff}, // 0xeb
    {0x00, 0xee, 0x22, 0x2e, 0x22, 0xee, 0x00, 0xff}, // 0xec
    {0x00, 0x6e, 0xa2, 0xae, 0xa2, 0x6e, 0x00, 0xff}, // 0xed
    {0x00, 0xee, 0x22, 0xee, 0x22, 0xee, 0x00, 0xff}, // 0xee
    {0x00, 0xee, 0x22, 0xee, 0x22, 0x2e, 0x00, 0xff}, // 0xef
    {0x00, 0xee, 0xa2, 0xae, 0xa2, 0xe2, 0x00, 0xff}, // 0xf0
    {0x00, 0x4e, 0x62, 0x4e, 0x42, 0xe2, 0x00, 0xff}, // 0xf1
    {0x00, 0xee, 0x82, 0xce, 0x22, 0xe2, 0x00, 0xff}, // 0xf2
    {0x00, 0xee, 0x82, 0xce, 0x82, 0xe2, 0x00, 0xff}, // 0xf3
    {0x00, 0xae, 0xa2, 0xee, 0x82, 0x82, 0x00, 0xff}, // 0xf4
    {0x00, 0xee, 0x22, 0x6e, 0x82, 0x62, 0x00, 0xff}, // 0xf5
    {0x00, 0xee, 0x22, 0xee, 0xa2, 0xe2, 0x00, 0xff}, // 0xf6
    {0x00, 0xee, 0x82, 0x4e, 0x42, 0x22, 0x00, 0xff}, // 0xf7
    {0x00, 0xee, 0xa2, 0xee, 0xa2, 0xe2, 0x00, 0xff}, // 0xf8
    {0x00, 0xee, 0xa2, 0xee, 0x82, 0x82, 0x00, 0xff}, // 0xf9
    {0x00, 0x4e, 0xa2, 0xae, 0xe2, 0xa2, 0x00, 0xff}, // 0xfa
    {0x00, 0x6e, 0xa2, 0x6e, 0xa2, 0x62, 0x00, 0xff}, // 0xfb
    {0x00, 0xee, 0x22, 0x2e, 0x22, 0xe2, 0x00, 0xff}, // 0xfc
    {0x00, 0x6e, 0xa2, 0xae, 0xa2, 0x62, 0x00, 0xff}, // 0xfd
    {0x00, 0xee, 0x22, 0xee, 0x22, 0xe2, 0x00, 0xff}, // 0xfe
    {0x00, 0xee, 0x22, 0xee, 0x22, 0x22, 0x00, 0xff}  // 0xff
};
