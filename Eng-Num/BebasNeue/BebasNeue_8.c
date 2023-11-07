/*******************************************************************************
 * Size: 8 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#include "blynkgo_lib.h"

#ifndef BEBASNEUE_8
#define BEBASNEUE_8 1
#endif

#if BEBASNEUE_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x94, 0x94, 0x94, 0x83, 0x20, 0x83,

    /* U+0022 "\"" */
    0xa9, 0x57, 0x53,

    /* U+0023 "#" */
    0x29, 0xb0, 0x7d, 0xe1, 0x57, 0x90, 0xbc, 0xc0,
    0x87, 0x60, 0x97, 0x50,

    /* U+0024 "$" */
    0x0, 0x1, 0xd3, 0x97, 0xb6, 0xa0, 0x7, 0x9a,
    0x5d, 0x3e, 0x50, 0x30,

    /* U+0025 "%" */
    0x79, 0x8, 0x8, 0x86, 0x20, 0x88, 0x90, 0x5,
    0x98, 0x93, 0x7, 0x56, 0x70, 0x82, 0xa4,

    /* U+0026 "&" */
    0x6e, 0x80, 0xa3, 0x70, 0x5f, 0xf2, 0xa3, 0xd0,
    0xb2, 0xe0, 0x7c, 0xe0,

    /* U+0027 "'" */
    0xa2, 0x70,

    /* U+0028 "(" */
    0x4b, 0x95, 0x94, 0x94, 0x94, 0x95, 0x4b,

    /* U+0029 ")" */
    0x97, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x97,

    /* U+002A "*" */
    0x19, 0x0, 0x7c, 0x91, 0x38, 0x80, 0x0, 0x0,

    /* U+002B "+" */
    0x9, 0x8, 0xda, 0xa, 0x0,

    /* U+002C "," */
    0x92, 0x70, 0x0,

    /* U+002D "-" */
    0xac,

    /* U+002E "." */
    0x92,

    /* U+002F "/" */
    0x0, 0xc0, 0x4, 0x70, 0xa, 0x20, 0xb, 0x0,
    0x66, 0x0, 0xb0, 0x0,

    /* U+0030 "0" */
    0x6e, 0x9b, 0x2e, 0xb2, 0xeb, 0x2e, 0xb2, 0xe6,
    0xe9,

    /* U+0031 "1" */
    0x5, 0x73, 0xe7, 0x7, 0x70, 0x77, 0x7, 0x70,
    0x77,

    /* U+0032 "2" */
    0x5e, 0x9a, 0x2d, 0x4, 0xa1, 0xd1, 0x85, 0xa,
    0xdb,

    /* U+0033 "3" */
    0x6e, 0x98, 0x2d, 0xc, 0x80, 0xd, 0xa2, 0xd6,
    0xe8,

    /* U+0034 "4" */
    0x7, 0xb0, 0xd, 0xb0, 0x4b, 0xb0, 0xa5, 0xb0,
    0xce, 0xf1, 0x3, 0xb0,

    /* U+0035 "5" */
    0x8e, 0xa9, 0x30, 0xac, 0x94, 0x1e, 0xa2, 0xe6,
    0xe9,

    /* U+0036 "6" */
    0x6e, 0x9b, 0x37, 0xbc, 0xab, 0x3e, 0xb3, 0xe6,
    0xe9,

    /* U+0037 "7" */
    0x9d, 0xe0, 0x2b, 0x6, 0x70, 0xa3, 0xd, 0x3,
    0xa0,

    /* U+0038 "8" */
    0x7e, 0x9b, 0x3d, 0x7f, 0xab, 0x3d, 0xc2, 0xe6,
    0xe9,

    /* U+0039 "9" */
    0x6e, 0x8b, 0x2d, 0xc3, 0xe7, 0xce, 0x61, 0xd6,
    0xe8,

    /* U+003A ":" */
    0x92, 0x0, 0x0, 0x92,

    /* U+003B ";" */
    0x92, 0x0, 0x0, 0x92, 0x70, 0x0,

    /* U+003C "<" */
    0x0, 0x24, 0xa5, 0x5a, 0x40, 0x3,

    /* U+003D "=" */
    0x7a, 0x97, 0xa9,

    /* U+003E ">" */
    0x20, 0x3, 0xa6, 0x29, 0x73, 0x0,

    /* U+003F "?" */
    0x8e, 0x6d, 0x3b, 0x7, 0x70, 0xc0, 0x4, 0x1,
    0xa0,

    /* U+0040 "@" */
    0x4, 0xbb, 0x70, 0x3b, 0x0, 0x93, 0x94, 0xcc,
    0x65, 0xc5, 0x7c, 0x73, 0xb4, 0xbb, 0x80, 0x77,
    0x0, 0x20, 0x8, 0xbb, 0x20,

    /* U+0041 "A" */
    0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90, 0x85, 0xb0,
    0xac, 0xd0, 0xc0, 0xd0,

    /* U+0042 "B" */
    0xae, 0xa0, 0xa3, 0xd0, 0xae, 0xa0, 0xa3, 0xd0,
    0xa3, 0xd0, 0xae, 0xa0,

    /* U+0043 "C" */
    0x6e, 0x8b, 0x2d, 0xb2, 0xb, 0x23, 0xb2, 0xd6,
    0xe8,

    /* U+0044 "D" */
    0xae, 0xaa, 0x3e, 0xa3, 0xea, 0x3e, 0xa3, 0xea,
    0xea,

    /* U+0045 "E" */
    0xae, 0x9a, 0x30, 0xae, 0x5a, 0x30, 0xa3, 0xa,
    0xe9,

    /* U+0046 "F" */
    0xae, 0x8a, 0x30, 0xae, 0x4a, 0x30, 0xa3, 0xa,
    0x30,

    /* U+0047 "G" */
    0x6e, 0x8b, 0x2d, 0xb2, 0xb, 0x7d, 0xb2, 0xd6,
    0xe9,

    /* U+0048 "H" */
    0xa3, 0xd0, 0xa3, 0xd0, 0xae, 0xf0, 0xa3, 0xd0,
    0xa3, 0xd0, 0xa3, 0xd0,

    /* U+0049 "I" */
    0xa3, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3,

    /* U+004A "J" */
    0x1d, 0x1d, 0x1d, 0x1d, 0x1c, 0xc8,

    /* U+004B "K" */
    0xa3, 0xc0, 0xa8, 0x70, 0xaf, 0x40, 0xad, 0x80,
    0xa5, 0xc0, 0xa3, 0xd1,

    /* U+004C "L" */
    0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0xe8,

    /* U+004D "M" */
    0xaa, 0x5f, 0xab, 0x7f, 0xab, 0x9d, 0xab, 0x9d,
    0xa8, 0xad, 0xa6, 0x8d,

    /* U+004E "N" */
    0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1, 0xa8, 0xf1,
    0xa4, 0xf1, 0xa1, 0xe1,

    /* U+004F "O" */
    0x6e, 0x9b, 0x2e, 0xb2, 0xeb, 0x2e, 0xb2, 0xe6,
    0xe9,

    /* U+0050 "P" */
    0xae, 0x9a, 0x3e, 0xa3, 0xda, 0xe8, 0xa3, 0xa,
    0x30,

    /* U+0051 "Q" */
    0x6e, 0x90, 0xb2, 0xd0, 0xb2, 0xe0, 0xb2, 0xe0,
    0xb2, 0xe0, 0x6e, 0xc0, 0x0, 0x82,

    /* U+0052 "R" */
    0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xd0, 0xae, 0x90,
    0xa3, 0xe0, 0xa3, 0xe0,

    /* U+0053 "S" */
    0x7e, 0x7c, 0x38, 0x7a, 0x0, 0x97, 0xa2, 0xc7,
    0xe7,

    /* U+0054 "T" */
    0xcf, 0xa0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0,

    /* U+0055 "U" */
    0xb2, 0xdb, 0x2d, 0xb2, 0xdb, 0x2d, 0xb3, 0xd6,
    0xe9,

    /* U+0056 "V" */
    0xd0, 0xcb, 0x3b, 0x87, 0x96, 0xb7, 0x4e, 0x52,
    0xf2,

    /* U+0057 "W" */
    0xd4, 0xc7, 0x4b, 0x6e, 0x83, 0xa9, 0xda, 0x18,
    0xca, 0xc0, 0x7f, 0x7d, 0x5, 0xe6, 0xd0,

    /* U+0058 "X" */
    0xb3, 0xc0, 0x5b, 0x90, 0xf, 0x40, 0x1f, 0x50,
    0x69, 0xa0, 0xb1, 0xd0,

    /* U+0059 "Y" */
    0xc2, 0xd0, 0x79, 0x90, 0x2f, 0x40, 0xe, 0x0,
    0xd, 0x0, 0xd, 0x0,

    /* U+005A "Z" */
    0xae, 0xb0, 0x77, 0xd, 0x13, 0xb0, 0x95, 0xd,
    0xd9,

    /* U+005B "[" */
    0x7b, 0x85, 0x85, 0x85, 0x85, 0x85, 0x7b,

    /* U+005C "\\" */
    0xb0, 0x0, 0x66, 0x0, 0xb, 0x0, 0xa, 0x20,
    0x4, 0x70, 0x0, 0xc0,

    /* U+005D "]" */
    0x8a, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x9a,

    /* U+005E "^" */
    0x6, 0x0, 0x2d, 0x50, 0x92, 0xb0,

    /* U+005F "_" */
    0xbb, 0x40,

    /* U+0060 "`" */
    0x9, 0x30,

    /* U+0061 "a" */
    0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90, 0x85, 0xb0,
    0xac, 0xd0, 0xc0, 0xd0,

    /* U+0062 "b" */
    0xae, 0xa0, 0xa3, 0xd0, 0xae, 0xa0, 0xa3, 0xd0,
    0xa3, 0xd0, 0xae, 0xa0,

    /* U+0063 "c" */
    0x6e, 0x8b, 0x2d, 0xb2, 0xb, 0x23, 0xb2, 0xd6,
    0xe8,

    /* U+0064 "d" */
    0xae, 0xaa, 0x3e, 0xa3, 0xea, 0x3e, 0xa3, 0xea,
    0xea,

    /* U+0065 "e" */
    0xae, 0x9a, 0x30, 0xae, 0x5a, 0x30, 0xa3, 0xa,
    0xe9,

    /* U+0066 "f" */
    0xae, 0x8a, 0x30, 0xae, 0x4a, 0x30, 0xa3, 0xa,
    0x30,

    /* U+0067 "g" */
    0x6e, 0x8b, 0x2d, 0xb2, 0xb, 0x7d, 0xb2, 0xd6,
    0xe9,

    /* U+0068 "h" */
    0xa3, 0xd0, 0xa3, 0xd0, 0xae, 0xf0, 0xa3, 0xd0,
    0xa3, 0xd0, 0xa3, 0xd0,

    /* U+0069 "i" */
    0xa3, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3,

    /* U+006A "j" */
    0x1d, 0x1d, 0x1d, 0x1d, 0x1c, 0xc8,

    /* U+006B "k" */
    0xa3, 0xc0, 0xa8, 0x70, 0xaf, 0x40, 0xad, 0x80,
    0xa5, 0xc0, 0xa3, 0xd1,

    /* U+006C "l" */
    0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0xe8,

    /* U+006D "m" */
    0xaa, 0x5f, 0xab, 0x7f, 0xab, 0x9d, 0xab, 0x9d,
    0xa8, 0xad, 0xa6, 0x8d,

    /* U+006E "n" */
    0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1, 0xa8, 0xf1,
    0xa4, 0xf1, 0xa1, 0xe1,

    /* U+006F "o" */
    0x6e, 0x9b, 0x2e, 0xb2, 0xeb, 0x2e, 0xb2, 0xe6,
    0xe9,

    /* U+0070 "p" */
    0xae, 0x9a, 0x3e, 0xa3, 0xda, 0xe8, 0xa3, 0xa,
    0x30,

    /* U+0071 "q" */
    0x6e, 0x90, 0xb2, 0xd0, 0xb2, 0xe0, 0xb2, 0xe0,
    0xb2, 0xe0, 0x6e, 0xc0, 0x0, 0x82,

    /* U+0072 "r" */
    0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xd0, 0xae, 0x90,
    0xa3, 0xe0, 0xa3, 0xe0,

    /* U+0073 "s" */
    0x7e, 0x7c, 0x38, 0x7a, 0x0, 0x97, 0xa2, 0xc7,
    0xe7,

    /* U+0074 "t" */
    0xcf, 0xa0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0,

    /* U+0075 "u" */
    0xb2, 0xdb, 0x2d, 0xb2, 0xdb, 0x2d, 0xb3, 0xd6,
    0xe9,

    /* U+0076 "v" */
    0xd0, 0xcb, 0x3b, 0x87, 0x96, 0xb7, 0x4e, 0x52,
    0xf2,

    /* U+0077 "w" */
    0xd4, 0xc7, 0x4b, 0x6e, 0x83, 0xa9, 0xda, 0x18,
    0xca, 0xc0, 0x7f, 0x7d, 0x5, 0xe6, 0xd0,

    /* U+0078 "x" */
    0xb3, 0xc0, 0x5b, 0x90, 0xf, 0x40, 0x1f, 0x50,
    0x69, 0xa0, 0xb1, 0xd0,

    /* U+0079 "y" */
    0xc2, 0xd0, 0x79, 0x90, 0x2f, 0x40, 0xe, 0x0,
    0xd, 0x0, 0xd, 0x0,

    /* U+007A "z" */
    0xae, 0xb0, 0x77, 0xd, 0x13, 0xb0, 0x95, 0xd,
    0xd9,

    /* U+007B "{" */
    0x1c, 0x5, 0x70, 0x57, 0xc, 0x30, 0x57, 0x5,
    0x70, 0x2c, 0x0,

    /* U+007C "|" */
    0x22, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55,

    /* U+007D "}" */
    0xa4, 0x4, 0x80, 0x38, 0x1, 0xe0, 0x38, 0x4,
    0x80, 0xa4, 0x0,

    /* U+007E "~" */
    0x6b, 0x80,

    /* U+00A1 "¡" */
    0x83, 0x20, 0x83, 0x94, 0x94, 0x94,

    /* U+00A2 "¢" */
    0x1d, 0x28, 0x9c, 0xa3, 0x2a, 0x36, 0x8a, 0xc0,
    0xc1,

    /* U+00A3 "£" */
    0x5e, 0x99, 0x4b, 0x67, 0x8, 0xe7, 0x1a, 0xb,
    0xec,

    /* U+00A4 "¤" */
    0x0, 0x7, 0xa9, 0x64, 0x97, 0xb9, 0x0, 0x0,

    /* U+00A5 "¥" */
    0xc2, 0xd0, 0x69, 0xa0, 0x1f, 0x50, 0x4f, 0x70,
    0x5e, 0x70, 0xd, 0x0,

    /* U+00A6 "¦" */
    0x22, 0x55, 0x55, 0x55, 0x0, 0x22, 0x55, 0x55,
    0x55,

    /* U+00A7 "§" */
    0x6d, 0x90, 0xb5, 0x60, 0x7e, 0x90, 0xb2, 0xe0,
    0x5e, 0xa0, 0x72, 0xe0, 0x5c, 0x70,

    /* U+00A8 "¨" */
    0xa, 0xa0,

    /* U+00A9 "©" */
    0x5, 0x99, 0x40, 0x66, 0x86, 0x74, 0x90, 0x95,
    0x9, 0x90, 0x96, 0x9, 0x66, 0x86, 0x74, 0x5,
    0x99, 0x40,

    /* U+00AA "ª" */
    0x47, 0x7b, 0x8a, 0x67,

    /* U+00AB "«" */
    0x87, 0x49, 0x85,

    /* U+00AC "¬" */
    0x8a, 0xb0, 0x9,

    /* U+00AD "­" */
    0xac,

    /* U+00AE "®" */
    0x5, 0x99, 0x40, 0x66, 0xa8, 0x74, 0x90, 0xca,
    0x9, 0x90, 0x99, 0x9, 0x66, 0x44, 0x74, 0x5,
    0x99, 0x40,

    /* U+00AF "¯" */
    0x99,

    /* U+00B0 "°" */
    0x1a, 0x36, 0x49, 0x1b, 0x30,

    /* U+00B1 "±" */
    0x1, 0x7, 0xd9, 0xa, 0x7, 0xc9,

    /* U+00B2 "²" */
    0x7a, 0x36, 0x97,

    /* U+00B3 "³" */
    0x79, 0x3a, 0x79,

    /* U+00B4 "´" */
    0x39, 0x0,

    /* U+00B5 "µ" */
    0x20, 0x3a, 0x3e, 0xa3, 0xea, 0x3e, 0xad, 0xea,
    0x30, 0x31, 0x0,

    /* U+00B6 "¶" */
    0x6f, 0xd3, 0xcf, 0x83, 0x9f, 0x83, 0xb, 0x83,
    0x9, 0x83, 0x9, 0x83, 0x6, 0x52,

    /* U+00B7 "·" */
    0x92,

    /* U+00B8 "¸" */
    0x13, 0x57,

    /* U+00B9 "¹" */
    0x38, 0x8, 0x8,

    /* U+00BA "º" */
    0x57, 0x88, 0x79, 0x68,

    /* U+00BB "»" */
    0x88, 0x39, 0x94,

    /* U+00BC "¼" */
    0x5, 0x6, 0x0, 0x49, 0x7, 0x0, 0x8, 0x62,
    0x30, 0x8, 0x82, 0xb0, 0x1, 0x67, 0x90, 0x7,
    0x19, 0xc0, 0x2, 0x0, 0x20,

    /* U+00BD "½" */
    0x39, 0x8, 0x0, 0x82, 0x60, 0x8, 0x76, 0x70,
    0x68, 0x48, 0x4, 0x46, 0x20, 0x60, 0x87,

    /* U+00BE "¾" */
    0x57, 0x6, 0x0, 0x38, 0x17, 0x0, 0x1a, 0x62,
    0x0, 0x48, 0x81, 0xc0, 0x59, 0x67, 0xa0, 0x7,
    0x19, 0xc0, 0x2, 0x0, 0x20,

    /* U+00BF "¿" */
    0xc, 0x0, 0x50, 0x1c, 0x8, 0x50, 0xc3, 0xb8,
    0xe6,

    /* U+00C0 "À" */
    0x1a, 0x0, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00C1 "Á" */
    0x8, 0x30, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00C2 "Â" */
    0x7, 0x10, 0x24, 0x40, 0x1f, 0x40, 0x3e, 0x60,
    0x59, 0x90, 0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00C3 "Ã" */
    0x2a, 0x50, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00C4 "Ä" */
    0x57, 0x80, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00C5 "Å" */
    0x7, 0x10, 0x8, 0x10, 0x1f, 0x40, 0x3e, 0x60,
    0x59, 0x90, 0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00C6 "Æ" */
    0x8, 0xfd, 0x60, 0xbe, 0x0, 0xb, 0xed, 0x24,
    0x8e, 0x0, 0x8d, 0xe0, 0xc, 0xe, 0xd6,

    /* U+00C7 "Ç" */
    0x6e, 0x8b, 0x2d, 0xb2, 0xb, 0x25, 0xb4, 0xc4,
    0xd4, 0x19, 0x20,

    /* U+00C8 "È" */
    0x2a, 0xa, 0xe9, 0xa3, 0xa, 0xe5, 0xa3, 0xa,
    0x30, 0xae, 0x90,

    /* U+00C9 "É" */
    0x9, 0x2a, 0xe9, 0xa3, 0xa, 0xe5, 0xa3, 0xa,
    0x30, 0xae, 0x90,

    /* U+00CA "Ê" */
    0x7, 0x3, 0x43, 0xae, 0x9a, 0x30, 0xae, 0x5a,
    0x30, 0xa3, 0xa, 0xe9,

    /* U+00CB "Ë" */
    0x67, 0x7a, 0xe9, 0xa3, 0xa, 0xe5, 0xa3, 0xa,
    0x30, 0xae, 0x90,

    /* U+00CC "Ì" */
    0xb, 0x0, 0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30,
    0xa3, 0xa, 0x30,

    /* U+00CD "Í" */
    0x65, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3,

    /* U+00CE "Î" */
    0x6, 0x21, 0x55, 0xa, 0x30, 0xa3, 0xa, 0x30,
    0xa3, 0xa, 0x30, 0xa3,

    /* U+00CF "Ï" */
    0x37, 0xa0, 0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30,
    0xa3, 0xa, 0x30,

    /* U+00D0 "Ð" */
    0x8e, 0xc0, 0x85, 0xc1, 0xdb, 0xc2, 0x85, 0xc2,
    0x85, 0xc1, 0x8e, 0xc0,

    /* U+00D1 "Ñ" */
    0x2a, 0x60, 0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1,
    0xa8, 0xf1, 0xa4, 0xf1, 0xa1, 0xe1,

    /* U+00D2 "Ò" */
    0x1a, 0x6, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+00D3 "Ó" */
    0x8, 0x36, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+00D4 "Ô" */
    0x7, 0x12, 0x44, 0x6e, 0x9b, 0x2e, 0xb2, 0xeb,
    0x2e, 0xb2, 0xe6, 0xe9,

    /* U+00D5 "Õ" */
    0x27, 0x44, 0x55, 0x6e, 0x9b, 0x2e, 0xb2, 0xeb,
    0x2e, 0xb2, 0xe6, 0xe9,

    /* U+00D6 "Ö" */
    0x57, 0x86, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+00D7 "×" */
    0x10, 0x15, 0xa8, 0x4b, 0x72, 0x2,

    /* U+00D8 "Ø" */
    0x0, 0x0, 0x6e, 0xc0, 0xb4, 0xe0, 0xb9, 0xe0,
    0xba, 0xe0, 0xb5, 0xe0, 0x9e, 0x90, 0x0, 0x0,

    /* U+00D9 "Ù" */
    0x1a, 0xb, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+00DA "Ú" */
    0x8, 0x3b, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+00DB "Û" */
    0x7, 0x12, 0x44, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+00DC "Ü" */
    0x57, 0x8b, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+00DD "Ý" */
    0x9, 0x30, 0xc2, 0xd0, 0x79, 0x90, 0x2f, 0x40,
    0xe, 0x0, 0xd, 0x0, 0xd, 0x0,

    /* U+00DE "Þ" */
    0xa3, 0xa, 0xe8, 0xa3, 0xda, 0x3d, 0xae, 0x8a,
    0x30,

    /* U+00DF "ß" */
    0xae, 0xf0, 0xa5, 0xb0, 0xaa, 0x90, 0xa4, 0xd0,
    0xa3, 0xd1, 0xa9, 0xb0,

    /* U+00E0 "à" */
    0x1a, 0x0, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00E1 "á" */
    0x8, 0x30, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00E2 "â" */
    0x7, 0x10, 0x24, 0x40, 0x1f, 0x40, 0x3e, 0x60,
    0x59, 0x90, 0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00E3 "ã" */
    0x2a, 0x50, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00E4 "ä" */
    0x57, 0x80, 0x1f, 0x40, 0x3e, 0x60, 0x59, 0x90,
    0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00E5 "å" */
    0x7, 0x10, 0x8, 0x10, 0x1f, 0x40, 0x3e, 0x60,
    0x59, 0x90, 0x85, 0xb0, 0xac, 0xd0, 0xc0, 0xd0,

    /* U+00E6 "æ" */
    0x8, 0xfd, 0x60, 0xbe, 0x0, 0xb, 0xed, 0x24,
    0x8e, 0x0, 0x8d, 0xe0, 0xc, 0xe, 0xd6,

    /* U+00E7 "ç" */
    0x6e, 0x8b, 0x2d, 0xb2, 0xb, 0x25, 0xb4, 0xc4,
    0xd4, 0x19, 0x20,

    /* U+00E8 "è" */
    0x2a, 0xa, 0xe9, 0xa3, 0xa, 0xe5, 0xa3, 0xa,
    0x30, 0xae, 0x90,

    /* U+00E9 "é" */
    0x9, 0x2a, 0xe9, 0xa3, 0xa, 0xe5, 0xa3, 0xa,
    0x30, 0xae, 0x90,

    /* U+00EA "ê" */
    0x7, 0x3, 0x43, 0xae, 0x9a, 0x30, 0xae, 0x5a,
    0x30, 0xa3, 0xa, 0xe9,

    /* U+00EB "ë" */
    0x67, 0x7a, 0xe9, 0xa3, 0xa, 0xe5, 0xa3, 0xa,
    0x30, 0xae, 0x90,

    /* U+00EC "ì" */
    0xb, 0x0, 0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30,
    0xa3, 0xa, 0x30,

    /* U+00ED "í" */
    0x65, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3,

    /* U+00EE "î" */
    0x6, 0x21, 0x55, 0xa, 0x30, 0xa3, 0xa, 0x30,
    0xa3, 0xa, 0x30, 0xa3,

    /* U+00EF "ï" */
    0x37, 0xa0, 0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30,
    0xa3, 0xa, 0x30,

    /* U+00F0 "ð" */
    0x8e, 0xc0, 0x85, 0xc1, 0xdb, 0xc2, 0x85, 0xc2,
    0x85, 0xc1, 0x8e, 0xc0,

    /* U+00F1 "ñ" */
    0x2a, 0x60, 0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1,
    0xa8, 0xf1, 0xa4, 0xf1, 0xa1, 0xe1,

    /* U+00F2 "ò" */
    0x1a, 0x6, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+00F3 "ó" */
    0x8, 0x36, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+00F4 "ô" */
    0x7, 0x12, 0x44, 0x6e, 0x9b, 0x2e, 0xb2, 0xeb,
    0x2e, 0xb2, 0xe6, 0xe9,

    /* U+00F5 "õ" */
    0x27, 0x44, 0x55, 0x6e, 0x9b, 0x2e, 0xb2, 0xeb,
    0x2e, 0xb2, 0xe6, 0xe9,

    /* U+00F6 "ö" */
    0x57, 0x86, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+00F7 "÷" */
    0xb, 0x0, 0x0, 0x8a, 0xa0, 0xb0,

    /* U+00F8 "ø" */
    0x0, 0x0, 0x6e, 0xc0, 0xb4, 0xe0, 0xb9, 0xe0,
    0xba, 0xe0, 0xb5, 0xe0, 0x9e, 0x90, 0x0, 0x0,

    /* U+00F9 "ù" */
    0x1a, 0xb, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+00FA "ú" */
    0x8, 0x3b, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+00FB "û" */
    0x7, 0x12, 0x44, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+00FC "ü" */
    0x57, 0x8b, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+00FD "ý" */
    0x9, 0x30, 0xc2, 0xd0, 0x79, 0x90, 0x2f, 0x40,
    0xe, 0x0, 0xd, 0x0, 0xd, 0x0,

    /* U+00FE "þ" */
    0xa3, 0xa, 0xe8, 0xa3, 0xda, 0x3d, 0xae, 0x8a,
    0x30,

    /* U+00FF "ÿ" */
    0x67, 0x80, 0xc2, 0xd0, 0x79, 0x90, 0x2f, 0x40,
    0xe, 0x0, 0xd, 0x0, 0xd, 0x0,

    /* U+0131 "ı" */
    0xa3, 0xa3, 0xa3, 0xa3, 0xa3, 0xa3,

    /* U+0132 "Ĳ" */
    0xa3, 0x85, 0xa3, 0x85, 0xa3, 0x85, 0xa3, 0x85,
    0xa3, 0x85, 0xa7, 0xd2,

    /* U+0133 "ĳ" */
    0xa3, 0x85, 0xa3, 0x85, 0xa3, 0x85, 0xa3, 0x85,
    0xa3, 0x85, 0xa7, 0xd2,

    /* U+0134 "Ĵ" */
    0x26, 0x4, 0x51, 0x1d, 0x1, 0xd0, 0x1d, 0x1,
    0xd0, 0x1c, 0xc, 0x80,

    /* U+0135 "ĵ" */
    0x26, 0x4, 0x51, 0x1d, 0x1, 0xd0, 0x1d, 0x1,
    0xd0, 0x1c, 0xc, 0x80,

    /* U+0136 "Ķ" */
    0xa3, 0xc0, 0xa8, 0x70, 0xaf, 0x40, 0xad, 0x80,
    0xa5, 0xc0, 0xa3, 0xd1, 0x8, 0x10, 0x1, 0x0,

    /* U+0137 "ķ" */
    0xa3, 0xc0, 0xa8, 0x70, 0xaf, 0x40, 0xad, 0x80,
    0xa5, 0xc0, 0xa3, 0xd1, 0x8, 0x10, 0x1, 0x0,

    /* U+0138 "ĸ" */
    0xa3, 0xc0, 0xa8, 0x70, 0xaf, 0x40, 0xad, 0x80,
    0xa5, 0xc0, 0xa3, 0xd1,

    /* U+0139 "Ĺ" */
    0x57, 0xa, 0x30, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0x30, 0xae, 0x80,

    /* U+013A "ĺ" */
    0x57, 0xa, 0x30, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0x30, 0xae, 0x80,

    /* U+013B "Ļ" */
    0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0xe8, 0x9, 0x0, 0x10,

    /* U+013C "ļ" */
    0xa3, 0xa, 0x30, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0xe8, 0x9, 0x0, 0x10,

    /* U+013D "Ľ" */
    0xa7, 0x7a, 0x43, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0xe8,

    /* U+013E "ľ" */
    0xa7, 0x7a, 0x43, 0xa3, 0xa, 0x30, 0xa3, 0xa,
    0xe8,

    /* U+013F "Ŀ" */
    0xa3, 0xa, 0x30, 0xa3, 0xa, 0x78, 0xa3, 0xa,
    0xe8,

    /* U+0140 "ŀ" */
    0xa3, 0xa, 0x30, 0xa3, 0xa, 0x78, 0xa3, 0xa,
    0xe8,

    /* U+0141 "Ł" */
    0x86, 0x8, 0x61, 0x8d, 0x39, 0x80, 0xd6, 0x8,
    0xea,

    /* U+0142 "ł" */
    0x86, 0x8, 0x61, 0x8d, 0x39, 0x80, 0xd6, 0x8,
    0xea,

    /* U+0143 "Ń" */
    0x7, 0x50, 0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1,
    0xa8, 0xf1, 0xa4, 0xf1, 0xa1, 0xe1,

    /* U+0144 "ń" */
    0x7, 0x50, 0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1,
    0xa8, 0xf1, 0xa4, 0xf1, 0xa1, 0xe1,

    /* U+0145 "Ņ" */
    0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1, 0xa8, 0xf1,
    0xa4, 0xf1, 0xa1, 0xe1, 0x8, 0x0, 0x1, 0x0,

    /* U+0146 "ņ" */
    0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xb1, 0xa8, 0xf1,
    0xa4, 0xf1, 0xa1, 0xe1, 0x8, 0x0, 0x1, 0x0,

    /* U+0147 "Ň" */
    0x14, 0x40, 0x6, 0x20, 0xa8, 0xb1, 0xac, 0xb1,
    0xac, 0xb1, 0xa8, 0xf1, 0xa4, 0xf1, 0xa1, 0xe1,

    /* U+0148 "ň" */
    0x14, 0x40, 0x6, 0x20, 0xa8, 0xb1, 0xac, 0xb1,
    0xac, 0xb1, 0xa8, 0xf1, 0xa4, 0xf1, 0xa1, 0xe1,

    /* U+0149 "ŉ" */
    0xcc, 0x7c, 0x4, 0xca, 0xc0, 0xc, 0xbc, 0x0,
    0xc8, 0xf0, 0xc, 0x4f, 0x0, 0xc1, 0xf0,

    /* U+014A "Ŋ" */
    0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xc1, 0xa8, 0xf1,
    0xa4, 0xf1, 0xa1, 0xf1, 0x0, 0xc1, 0x6, 0xa0,

    /* U+014B "ŋ" */
    0xa8, 0xb1, 0xac, 0xb1, 0xac, 0xc1, 0xa8, 0xf1,
    0xa4, 0xf1, 0xa1, 0xf1, 0x0, 0xc1, 0x6, 0xa0,

    /* U+014C "Ō" */
    0x3a, 0x56, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+014D "ō" */
    0x3a, 0x56, 0xe9, 0xb2, 0xeb, 0x2e, 0xb2, 0xeb,
    0x2e, 0x6e, 0x90,

    /* U+014E "Ŏ" */
    0x10, 0x11, 0x93, 0x6e, 0x9b, 0x2e, 0xb2, 0xeb,
    0x2e, 0xb2, 0xe6, 0xe9,

    /* U+014F "ŏ" */
    0x10, 0x11, 0x93, 0x6e, 0x9b, 0x2e, 0xb2, 0xeb,
    0x2e, 0xb2, 0xe6, 0xe9,

    /* U+0150 "Ő" */
    0x39, 0xa0, 0x6e, 0x90, 0xb2, 0xe0, 0xb2, 0xe0,
    0xb2, 0xe0, 0xb2, 0xe0, 0x6e, 0x90,

    /* U+0151 "ő" */
    0x39, 0xa0, 0x6e, 0x90, 0xb2, 0xe0, 0xb2, 0xe0,
    0xb2, 0xe0, 0xb2, 0xe0, 0x6e, 0x90,

    /* U+0152 "Œ" */
    0x6e, 0xfd, 0x5b, 0x2e, 0x0, 0xb2, 0xfd, 0x1b,
    0x2e, 0x0, 0xb2, 0xe0, 0x6, 0xef, 0xd5,

    /* U+0153 "œ" */
    0x6e, 0xfd, 0x5b, 0x2e, 0x0, 0xb2, 0xfd, 0x1b,
    0x2e, 0x0, 0xb2, 0xe0, 0x6, 0xef, 0xd5,

    /* U+0154 "Ŕ" */
    0x9, 0x30, 0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xd0,
    0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xe0,

    /* U+0155 "ŕ" */
    0x9, 0x30, 0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xd0,
    0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xe0,

    /* U+0156 "Ŗ" */
    0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xd0, 0xae, 0x90,
    0xa3, 0xe0, 0xa3, 0xe0, 0x9, 0x0, 0x1, 0x0,

    /* U+0157 "ŗ" */
    0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xd0, 0xae, 0x90,
    0xa3, 0xe0, 0xa3, 0xe0, 0x9, 0x0, 0x1, 0x0,

    /* U+0158 "Ř" */
    0x24, 0x30, 0x7, 0x0, 0xae, 0x90, 0xa3, 0xe0,
    0xa3, 0xd0, 0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xe0,

    /* U+0159 "ř" */
    0x24, 0x30, 0x7, 0x0, 0xae, 0x90, 0xa3, 0xe0,
    0xa3, 0xd0, 0xae, 0x90, 0xa3, 0xe0, 0xa3, 0xe0,

    /* U+015A "Ś" */
    0xa, 0x27, 0xe7, 0xc3, 0x87, 0xa0, 0x9, 0x7a,
    0x2c, 0x7e, 0x70,

    /* U+015B "ś" */
    0xa, 0x27, 0xe7, 0xc3, 0x87, 0xa0, 0x9, 0x7a,
    0x2c, 0x7e, 0x70,

    /* U+015C "Ŝ" */
    0x7, 0x3, 0x43, 0x7e, 0x7c, 0x38, 0x7a, 0x0,
    0x97, 0xa2, 0xc7, 0xe7,

    /* U+015D "ŝ" */
    0x7, 0x3, 0x43, 0x7e, 0x7c, 0x38, 0x7a, 0x0,
    0x97, 0xa2, 0xc7, 0xe7,

    /* U+015E "Ş" */
    0x7e, 0x7c, 0x38, 0x6c, 0x0, 0x89, 0xc4, 0xb5,
    0xd3, 0x19, 0x10,

    /* U+015F "ş" */
    0x7e, 0x7c, 0x38, 0x6c, 0x0, 0x89, 0xc4, 0xb5,
    0xd3, 0x19, 0x10,

    /* U+0160 "Š" */
    0x34, 0x30, 0x70, 0x7e, 0x7c, 0x38, 0x7a, 0x0,
    0x97, 0xa2, 0xc7, 0xe7,

    /* U+0161 "š" */
    0x34, 0x30, 0x70, 0x7e, 0x7c, 0x38, 0x7a, 0x0,
    0x97, 0xa2, 0xc7, 0xe7,

    /* U+0162 "Ţ" */
    0xcf, 0xa0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0x29, 0x10,

    /* U+0163 "ţ" */
    0xcf, 0xa0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0x29, 0x10,

    /* U+0164 "Ť" */
    0x34, 0x20, 0x70, 0xcf, 0xa0, 0xe0, 0xe, 0x0,
    0xe0, 0xe, 0x0, 0xe0,

    /* U+0165 "ť" */
    0x34, 0x20, 0x70, 0xcf, 0xa0, 0xe0, 0xe, 0x0,
    0xe0, 0xe, 0x0, 0xe0,

    /* U+0166 "Ŧ" */
    0xcf, 0xa0, 0xe0, 0x8f, 0x60, 0xe0, 0xe, 0x0,
    0xe0,

    /* U+0167 "ŧ" */
    0xcf, 0xa0, 0xe0, 0x8f, 0x60, 0xe0, 0xe, 0x0,
    0xe0,

    /* U+0168 "Ũ" */
    0x27, 0x44, 0x45, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+0169 "ũ" */
    0x27, 0x44, 0x45, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+016A "Ū" */
    0x3a, 0x5b, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+016B "ū" */
    0x3a, 0x5b, 0x2d, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x3d, 0x6e, 0x90,

    /* U+016C "Ŭ" */
    0x10, 0x11, 0x93, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+016D "ŭ" */
    0x10, 0x11, 0x93, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+016E "Ů" */
    0x7, 0x10, 0x81, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+016F "ů" */
    0x7, 0x10, 0x81, 0xb2, 0xdb, 0x2d, 0xb2, 0xdb,
    0x2d, 0xb3, 0xd6, 0xe9,

    /* U+0170 "Ű" */
    0x39, 0xa0, 0xb2, 0xd0, 0xb2, 0xd0, 0xb2, 0xd0,
    0xb2, 0xd0, 0xb3, 0xd0, 0x6e, 0x90,

    /* U+0171 "ű" */
    0x39, 0xa0, 0xb2, 0xd0, 0xb2, 0xd0, 0xb2, 0xd0,
    0xb2, 0xd0, 0xb3, 0xd0, 0x6e, 0x90,

    /* U+0172 "Ų" */
    0xb2, 0xdb, 0x2d, 0xb2, 0xdb, 0x2d, 0xb3, 0xc6,
    0xe4, 0x8, 0x20,

    /* U+0173 "ų" */
    0xb2, 0xdb, 0x2d, 0xb2, 0xdb, 0x2d, 0xb3, 0xc6,
    0xe4, 0x8, 0x20,

    /* U+0174 "Ŵ" */
    0x2, 0x60, 0x0, 0x55, 0x10, 0xd4, 0xc7, 0x4b,
    0x6e, 0x83, 0xa9, 0xda, 0x18, 0xca, 0xc0, 0x7f,
    0x7d, 0x5, 0xe6, 0xd0,

    /* U+0175 "ŵ" */
    0x2, 0x60, 0x0, 0x55, 0x10, 0xd4, 0xc7, 0x4b,
    0x6e, 0x83, 0xa9, 0xda, 0x18, 0xca, 0xc0, 0x7f,
    0x7d, 0x5, 0xe6, 0xd0,

    /* U+0176 "Ŷ" */
    0x4, 0x0, 0x27, 0x40, 0xc2, 0xd0, 0x79, 0x90,
    0x2f, 0x40, 0xe, 0x0, 0xd, 0x0, 0xd, 0x0,

    /* U+0177 "ŷ" */
    0x4, 0x0, 0x27, 0x40, 0xc2, 0xd0, 0x79, 0x90,
    0x2f, 0x40, 0xe, 0x0, 0xd, 0x0, 0xd, 0x0,

    /* U+0178 "Ÿ" */
    0x67, 0x80, 0xc2, 0xd0, 0x79, 0x90, 0x2f, 0x40,
    0xe, 0x0, 0xd, 0x0, 0xd, 0x0,

    /* U+0179 "Ź" */
    0xa, 0x2a, 0xeb, 0x7, 0x70, 0xd1, 0x3b, 0x9,
    0x50, 0xdd, 0x90,

    /* U+017A "ź" */
    0xa, 0x2a, 0xeb, 0x7, 0x70, 0xd1, 0x3b, 0x9,
    0x50, 0xdd, 0x90,

    /* U+017B "Ż" */
    0xb, 0xa, 0xeb, 0x7, 0x70, 0xd1, 0x3b, 0x9,
    0x50, 0xdd, 0x90,

    /* U+017C "ż" */
    0xb, 0xa, 0xeb, 0x7, 0x70, 0xd1, 0x3b, 0x9,
    0x50, 0xdd, 0x90,

    /* U+017D "Ž" */
    0x34, 0x30, 0x70, 0xae, 0xb0, 0x77, 0xd, 0x13,
    0xb0, 0x95, 0xd, 0xd9,

    /* U+017E "ž" */
    0x34, 0x30, 0x70, 0xae, 0xb0, 0x77, 0xd, 0x13,
    0xb0, 0x95, 0xd, 0xd9,

    /* U+0192 "ƒ" */
    0x36, 0x20, 0xce, 0x90, 0x86, 0xd0, 0x8f, 0xa0,
    0x85, 0xe0, 0xce, 0xa0, 0x48, 0x20,

    /* U+01FC "Ǽ" */
    0x0, 0xb1, 0x0, 0x8f, 0xd6, 0xb, 0xe0, 0x0,
    0xbe, 0xd2, 0x48, 0xe0, 0x8, 0xde, 0x0, 0xc0,
    0xed, 0x60,

    /* U+01FD "ǽ" */
    0x0, 0xb1, 0x0, 0x8f, 0xd6, 0xb, 0xe0, 0x0,
    0xbe, 0xd2, 0x48, 0xe0, 0x8, 0xde, 0x0, 0xc0,
    0xed, 0x60,

    /* U+01FE "Ǿ" */
    0x8, 0x30, 0x6e, 0xc0, 0xb4, 0xe0, 0xb9, 0xe0,
    0xba, 0xe0, 0xb5, 0xe0, 0x9e, 0x90, 0x0, 0x0,

    /* U+01FF "ǿ" */
    0x8, 0x30, 0x6e, 0xc0, 0xb4, 0xe0, 0xb9, 0xe0,
    0xba, 0xe0, 0xb5, 0xe0, 0x9e, 0x90, 0x0, 0x0,

    /* U+0218 "Ș" */
    0x7e, 0x7c, 0x38, 0x7a, 0x0, 0x97, 0xa2, 0xc7,
    0xe7, 0x9, 0x0, 0x10,

    /* U+0219 "ș" */
    0x7e, 0x7c, 0x38, 0x7a, 0x0, 0x97, 0xa2, 0xc7,
    0xe7, 0x9, 0x0, 0x10,

    /* U+021A "Ț" */
    0xcf, 0xa0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0x9, 0x0, 0x10,

    /* U+021B "ț" */
    0xcf, 0xa0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0x9, 0x0, 0x10,

    /* U+0237 "ȷ" */
    0x1d, 0x1d, 0x1d, 0x1d, 0x1c, 0xc8,

    /* U+02BC "ʼ" */
    0x66, 0x22,

    /* U+02C6 "ˆ" */
    0xa, 0xa0,

    /* U+02C7 "ˇ" */
    0xa, 0xa0,

    /* U+02C9 "ˉ" */
    0x99,

    /* U+02D8 "˘" */
    0x11, 0x77,

    /* U+02D9 "˙" */
    0x55,

    /* U+02DA "˚" */
    0x54, 0x55,

    /* U+02DB "˛" */
    0x0, 0x74, 0x11,

    /* U+02DC "˜" */
    0x9, 0x90,

    /* U+02DD "˝" */
    0xa, 0x93,

    /* U+2002 " " */

    /* U+2003 " " */

    /* U+2007 " " */

    /* U+2008 " " */

    /* U+200B "​" */

    /* U+2012 "‒" */
    0xcc, 0xc2,

    /* U+2013 "–" */
    0xcc, 0x40,

    /* U+2014 "—" */
    0xcc, 0xcc,

    /* U+2018 "‘" */
    0x61, 0x92,

    /* U+2019 "’" */
    0xa2, 0x60,

    /* U+201A "‚" */
    0x92, 0x70, 0x0,

    /* U+201C "“" */
    0x64, 0x39, 0x95,

    /* U+201D "”" */
    0xa9, 0x56, 0x51,

    /* U+201E "„" */
    0x99, 0x57, 0x51, 0x0, 0x0,

    /* U+2020 "†" */
    0xc, 0x0, 0xaf, 0xd0, 0xc, 0x0, 0xc, 0x0,
    0xc, 0x0, 0xc, 0x0, 0x9, 0x0,

    /* U+2021 "‡" */
    0xc, 0x0, 0xaf, 0xd0, 0xc, 0x0, 0xc, 0x0,
    0xaf, 0xc0, 0xc, 0x0, 0x9, 0x0,

    /* U+2022 "•" */
    0x7c, 0x8, 0xd0,

    /* U+2026 "…" */
    0xa7, 0x7a,

    /* U+2030 "‰" */
    0x79, 0x8, 0x0, 0x8, 0x86, 0x20, 0x0, 0x88,
    0x90, 0x0, 0x5, 0x98, 0x94, 0x93, 0x7, 0x56,
    0xa6, 0x70, 0x82, 0xa6, 0xa5,

    /* U+2039 "‹" */
    0x82, 0x92,

    /* U+203A "›" */
    0x81, 0x92,

    /* U+2044 "⁄" */
    0x0, 0x8, 0x0, 0x62, 0x0, 0x90, 0x1, 0x70,
    0x7, 0x10, 0x8, 0x0,

    /* U+2070 "⁰" */
    0x89, 0x98, 0x8a,

    /* U+2074 "⁴" */
    0x1c, 0x6, 0x90, 0x8c, 0x0,

    /* U+2075 "⁵" */
    0x9e, 0x39, 0x79,

    /* U+2076 "⁶" */
    0x8d, 0x98, 0x89,

    /* U+2077 "⁷" */
    0x5b, 0x8, 0x44,

    /* U+2078 "⁸" */
    0x79, 0x9b, 0x8a,

    /* U+2079 "⁹" */
    0x89, 0x6b, 0x69,

    /* U+2080 "₀" */
    0x79, 0x98, 0x98, 0x79,

    /* U+2081 "₁" */
    0x7, 0x49, 0x8, 0x8,

    /* U+2082 "₂" */
    0x79, 0x19, 0x54, 0x97,

    /* U+2083 "₃" */
    0x79, 0x8, 0x2a, 0x79,

    /* U+2084 "₄" */
    0xb, 0x4, 0xb0, 0x79, 0x8, 0xc0,

    /* U+2085 "₅" */
    0x87, 0x97, 0x39, 0x79,

    /* U+2086 "₆" */
    0x78, 0x97, 0x98, 0x79,

    /* U+2087 "₇" */
    0x5b, 0x8, 0x17, 0x53,

    /* U+2088 "₈" */
    0x79, 0x88, 0x8b, 0x8a,

    /* U+2089 "₉" */
    0x79, 0x98, 0x6b, 0x69,

    /* U+20AC "€" */
    0x4e, 0xa9, 0x4a, 0xb9, 0x3b, 0x93, 0x94, 0xc4,
    0xea,

    /* U+20B9 "₹" */
    0x79, 0x90, 0x5c, 0xa0, 0x5b, 0x80, 0xba, 0x0,
    0x2d, 0x10, 0x6, 0xa0,

    /* U+20BF "₿" */
    0x36, 0x20, 0xce, 0x90, 0x86, 0xd0, 0x8f, 0xa0,
    0x85, 0xe0, 0xce, 0xa0, 0x48, 0x20,

    /* U+2113 "ℓ" */
    0x8, 0xb1, 0xe, 0x94, 0xe, 0xc1, 0x1f, 0x50,
    0x5d, 0x63, 0xb, 0xd2,

    /* U+2116 "№" */
    0x73, 0x60, 0xc, 0x8b, 0x0, 0xc9, 0xb7, 0x8c,
    0x9b, 0x99, 0xc7, 0xc9, 0x9c, 0x4c, 0x78,

    /* U+2117 "℗" */
    0x5, 0x99, 0x40, 0x56, 0x76, 0x74, 0x90, 0x99,
    0x9, 0x90, 0xb7, 0x9, 0x73, 0x80, 0x56, 0x8,
    0x99, 0x70,

    /* U+2120 "℠" */
    0x55, 0x84, 0x59, 0x3c, 0x98, 0x49, 0x9a, 0x84,
    0x33, 0x33,

    /* U+2122 "™" */
    0x1a, 0x4c, 0x56, 0x9, 0xd, 0xa7, 0x9, 0xa,
    0x97, 0x0, 0x0, 0x0,

    /* U+2126 "Ω" */
    0x5c, 0x5d, 0x2d, 0xe0, 0xed, 0xd, 0xa3, 0x9c,
    0xac,

    /* U+212E "℮" */
    0x3, 0x33, 0x30, 0x4, 0x40, 0x1, 0x70, 0xc3,
    0x0, 0xe, 0xd, 0x52, 0x22, 0x40, 0x83, 0x0,
    0x0, 0x0, 0x53, 0x34, 0x0,

    /* U+2153 "⅓" */
    0x39, 0x8, 0x0, 0x82, 0x60, 0x8, 0x77, 0x70,
    0x68, 0x38, 0x3, 0x53, 0xa0, 0x80, 0x78,

    /* U+2154 "⅔" */
    0x79, 0x8, 0x2, 0x92, 0x60, 0x62, 0x77, 0x77,
    0x78, 0x38, 0x3, 0x53, 0xa0, 0x80, 0x78,

    /* U+215B "⅛" */
    0x39, 0x8, 0x0, 0x82, 0x60, 0x8, 0x77, 0x70,
    0x68, 0x88, 0x3, 0x59, 0xb0, 0x80, 0x79,

    /* U+215C "⅜" */
    0x79, 0x8, 0x2, 0xa2, 0x60, 0x48, 0x77, 0x75,
    0x78, 0x88, 0x3, 0x59, 0xb0, 0x80, 0x79,

    /* U+215D "⅝" */
    0x97, 0x8, 0x9, 0x82, 0x60, 0x58, 0x77, 0x75,
    0x78, 0x88, 0x3, 0x59, 0xb0, 0x80, 0x79,

    /* U+215E "⅞" */
    0x6c, 0x8, 0x0, 0x82, 0x60, 0x17, 0x77, 0x74,
    0x48, 0x88, 0x23, 0x59, 0xa0, 0x80, 0x89,

    /* U+2202 "∂" */
    0x3c, 0x76, 0x3e, 0x6a, 0xdd, 0x3c, 0xe2, 0xb9,
    0xd6,

    /* U+2205 "∅" */
    0x0, 0x10, 0x0, 0xb, 0xbb, 0xc0, 0x68, 0xa,
    0xd1, 0x85, 0xa3, 0xa3, 0x4f, 0x42, 0xd0, 0x48,
    0xbb, 0x30,

    /* U+2206 "∆" */
    0x9, 0x20, 0x2f, 0x60, 0x5b, 0x80, 0x76, 0xb0,
    0xa2, 0xd0, 0xdc, 0xf0,

    /* U+220F "∏" */
    0xac, 0xcd, 0xe, 0xd0, 0xed, 0xe, 0xd0, 0xed,
    0xe, 0xd0, 0xe1, 0x1,

    /* U+2211 "∑" */
    0xac, 0xc0, 0x86, 0x0, 0xc, 0x0, 0x7, 0x60,
    0xc, 0x10, 0x68, 0x0, 0xcc, 0xc0, 0x0, 0x0,

    /* U+2212 "−" */
    0x7a, 0x90,

    /* U+2215 "∕" */
    0x0, 0x60, 0x1, 0x90, 0x7, 0x30, 0xa, 0x0,
    0x46, 0x0, 0x90, 0x0,

    /* U+2219 "∙" */
    0x10, 0xc2,

    /* U+221A "√" */
    0x0, 0x4, 0x0, 0x37, 0x0, 0x73, 0xa7, 0xa0,
    0x2a, 0xa0, 0xe, 0x70, 0x7, 0x20,

    /* U+221E "∞" */
    0x7b, 0x8b, 0x9b, 0x1e, 0x2b, 0x39, 0x28, 0x50,

    /* U+222B "∫" */
    0xa, 0x90, 0xd0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0x6d, 0x0, 0x0,

    /* U+2248 "≈" */
    0x0, 0x0, 0x8b, 0xa0, 0x45, 0x50, 0x66, 0x70,

    /* U+2260 "≠" */
    0x0, 0x46, 0xba, 0x6d, 0x95, 0x10,

    /* U+2264 "≤" */
    0x0, 0x24, 0xa7, 0x17, 0x95, 0xa9,

    /* U+2265 "≥" */
    0x10, 0x3, 0x99, 0x59, 0x45, 0xa9
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 20, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 27, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 43, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 9, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 33, .adv_w = 75, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 24, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 62, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 69, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 76, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 84, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 89, .adv_w = 24, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 92, .adv_w = 35, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 93, .adv_w = 24, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 50, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 24, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 24, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 209, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 215, .adv_w = 51, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 218, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 224, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 254, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 52, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 50, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 54, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 25, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 34, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 55, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 424, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 48, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 50, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 527, .adv_w = 50, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 546, .adv_w = 51, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 552, .adv_w = 38, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 554, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 556, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 52, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 50, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 54, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 25, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 34, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 55, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 726, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 48, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 71, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 50, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 35, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 833, .adv_w = 64, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 842, .adv_w = 35, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 853, .adv_w = 51, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 855, .adv_w = 27, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 870, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 51, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 887, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 64, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 908, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 922, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 924, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 946, .adv_w = 43, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 949, .adv_w = 51, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 952, .adv_w = 35, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 953, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 64, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 972, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 977, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 983, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 986, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 989, .adv_w = 64, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 991, .adv_w = 52, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1002, .adv_w = 57, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1016, .adv_w = 24, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1017, .adv_w = 64, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1019, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1022, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1026, .adv_w = 43, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1029, .adv_w = 84, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1050, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 84, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1086, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1153, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1167, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 74, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1198, .adv_w = 49, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1209, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1220, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1231, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1254, .adv_w = 25, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 25, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 25, .box_w = 3, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 25, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 54, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1307, .adv_w = 55, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1321, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1332, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1355, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1367, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1378, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1384, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1400, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1411, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1422, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1434, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1445, .adv_w = 50, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1468, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1480, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1494, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1508, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1538, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1552, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1568, .adv_w = 74, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1583, .adv_w = 49, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1594, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1605, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1616, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1628, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1639, .adv_w = 25, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1650, .adv_w = 25, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1657, .adv_w = 25, .box_w = 3, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1669, .adv_w = 25, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 54, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1692, .adv_w = 55, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1706, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1728, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1740, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1752, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1763, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1769, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1785, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1796, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1807, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1819, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 50, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1844, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1853, .adv_w = 50, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1867, .adv_w = 25, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1873, .adv_w = 58, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1885, .adv_w = 58, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1897, .adv_w = 34, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1909, .adv_w = 34, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1921, .adv_w = 53, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1937, .adv_w = 53, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1953, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1965, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1976, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1987, .adv_w = 44, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1999, .adv_w = 44, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2011, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2020, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2029, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2038, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2047, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2056, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2065, .adv_w = 55, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2079, .adv_w = 55, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2093, .adv_w = 55, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2109, .adv_w = 55, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2125, .adv_w = 55, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2141, .adv_w = 55, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2157, .adv_w = 69, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2172, .adv_w = 55, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2188, .adv_w = 55, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2204, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2215, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2226, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2238, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2250, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2264, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2278, .adv_w = 74, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2293, .adv_w = 74, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2308, .adv_w = 52, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2322, .adv_w = 52, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2336, .adv_w = 52, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2352, .adv_w = 52, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2368, .adv_w = 52, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2384, .adv_w = 52, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2400, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2411, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2422, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2434, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2446, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2457, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2468, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2480, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2492, .adv_w = 47, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2503, .adv_w = 47, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2514, .adv_w = 47, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2526, .adv_w = 47, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2538, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2547, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2556, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2568, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2580, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2591, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2602, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2614, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2626, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2638, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2650, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2664, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2678, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2689, .adv_w = 51, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2700, .adv_w = 71, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2720, .adv_w = 71, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2740, .adv_w = 50, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2756, .adv_w = 50, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2772, .adv_w = 50, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2786, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2797, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2808, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2819, .adv_w = 46, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2830, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2842, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2854, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2868, .adv_w = 74, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2886, .adv_w = 74, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2904, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2920, .adv_w = 51, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2936, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2948, .adv_w = 48, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2960, .adv_w = 47, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2972, .adv_w = 47, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2984, .adv_w = 34, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2990, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -1, .ofs_y = 4},
    {.bitmap_index = 2992, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2994, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2996, .adv_w = 64, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2997, .adv_w = 64, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2999, .adv_w = 64, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3000, .adv_w = 64, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3002, .adv_w = 64, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3005, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3007, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3009, .adv_w = 38, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3009, .adv_w = 64, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3009, .adv_w = 51, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3009, .adv_w = 24, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3009, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3009, .adv_w = 51, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3011, .adv_w = 38, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3013, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3015, .adv_w = 24, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3017, .adv_w = 24, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3019, .adv_w = 24, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3022, .adv_w = 43, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3025, .adv_w = 43, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3028, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3033, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3047, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3061, .adv_w = 38, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3064, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3066, .adv_w = 108, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3087, .adv_w = 24, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3089, .adv_w = 24, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3091, .adv_w = 11, .box_w = 4, .box_h = 6, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 3103, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3106, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3111, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3114, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3117, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3120, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3123, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 3126, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3130, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3134, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3138, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3142, .adv_w = 36, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3148, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3152, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3156, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3160, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3164, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3168, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3177, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3189, .adv_w = 51, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3203, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3215, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3230, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3248, .adv_w = 77, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3258, .adv_w = 77, .box_w = 6, .box_h = 4, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 3270, .adv_w = 51, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3279, .adv_w = 105, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3300, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3315, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3330, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3345, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3360, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3375, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3390, .adv_w = 55, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3399, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3417, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3429, .adv_w = 60, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3441, .adv_w = 53, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3457, .adv_w = 51, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3459, .adv_w = 51, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3471, .adv_w = 28, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3473, .adv_w = 61, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3487, .adv_w = 82, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3495, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3507, .adv_w = 51, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3515, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3521, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 3527, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0x6a, 0x6b, 0x6c, 0x6d, 0x86, 0x87, 0x88,
    0x89, 0xa5, 0x12a, 0x134, 0x135, 0x137, 0x146, 0x147,
    0x148, 0x149, 0x14a, 0x14b, 0x1e70, 0x1e71, 0x1e75, 0x1e76,
    0x1e79, 0x1e80, 0x1e81, 0x1e82, 0x1e86, 0x1e87, 0x1e88, 0x1e8a,
    0x1e8b, 0x1e8c, 0x1e8e, 0x1e8f, 0x1e90, 0x1e94, 0x1e9e, 0x1ea7,
    0x1ea8, 0x1eb2, 0x1ede, 0x1ee2, 0x1ee3, 0x1ee4, 0x1ee5, 0x1ee6,
    0x1ee7, 0x1eee, 0x1eef, 0x1ef0, 0x1ef1, 0x1ef2, 0x1ef3, 0x1ef4,
    0x1ef5, 0x1ef6, 0x1ef7, 0x1f1a, 0x1f27, 0x1f2d, 0x1f81, 0x1f84,
    0x1f85, 0x1f8e, 0x1f90, 0x1f94, 0x1f9c, 0x1fc1, 0x1fc2, 0x1fc9,
    0x1fca, 0x1fcb, 0x1fcc, 0x2070, 0x2073, 0x2074, 0x207d, 0x207f,
    0x2080, 0x2083, 0x2087, 0x2088, 0x208c, 0x2099, 0x20b6, 0x20ce,
    0x20d2, 0x20d3
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 161, .range_length = 95, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 305, .range_length = 78, .glyph_id_start = 191,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 402, .range_length = 8404, .glyph_id_start = 269,
        .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 90, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 2, 0, 0, 0, 0, 3, 0,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 6, 7, 8, 9, 10, 11,
    12, 0, 0, 13, 14, 15, 0, 0,
    9, 16, 9, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 2, 0, 0, 0,
    0, 0, 6, 7, 8, 9, 10, 11,
    12, 0, 0, 0, 14, 15, 0, 0,
    9, 16, 9, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 27, 0, 0, 0, 28, 6,
    6, 6, 6, 6, 6, 10, 8, 10,
    10, 10, 10, 0, 0, 0, 0, 9,
    0, 9, 9, 9, 9, 9, 0, 9,
    20, 20, 20, 20, 24, 29, 30, 6,
    6, 6, 6, 6, 6, 10, 8, 10,
    10, 10, 10, 0, 0, 0, 0, 9,
    0, 9, 9, 9, 9, 9, 0, 9,
    20, 20, 20, 20, 24, 0, 24, 0,
    13, 13, 13, 0, 14, 14, 14, 15,
    15, 15, 15, 31, 32, 0, 0, 33,
    34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 9, 9, 9, 9, 9,
    10, 10, 17, 17, 17, 17, 17, 17,
    18, 18, 18, 18, 18, 18, 18, 18,
    19, 19, 19, 19, 35, 19, 20, 20,
    20, 20, 20, 20, 20, 20, 20, 20,
    20, 20, 22, 22, 24, 24, 24, 25,
    25, 25, 25, 25, 25, 0, 10, 10,
    9, 9, 18, 18, 19, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 3, 4, 0, 5, 6, 5,
    7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 8, 0, 0, 0,
    9, 10, 11, 0, 12, 0, 0, 0,
    12, 0, 0, 13, 0, 0, 0, 0,
    12, 0, 12, 0, 14, 15, 16, 17,
    18, 19, 20, 21, 0, 0, 3, 0,
    0, 0, 11, 0, 12, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 12, 0, 14, 15, 16, 17,
    18, 19, 20, 21, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    22, 23, 24, 0, 6, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0,
    0, 23, 25, 0, 0, 0, 0, 11,
    11, 11, 11, 11, 11, 26, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 12, 12, 12, 12, 0, 12,
    16, 16, 16, 16, 20, 0, 0, 11,
    11, 11, 11, 11, 11, 26, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 12, 12, 12, 12, 0, 12,
    16, 16, 16, 16, 20, 0, 20, 0,
    0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 12, 12, 12, 12, 12,
    12, 12, 0, 0, 0, 0, 0, 0,
    14, 14, 14, 14, 14, 14, 14, 14,
    15, 15, 15, 15, 27, 15, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 18, 18, 20, 20, 20, 21,
    21, 21, 21, 21, 21, 0, 26, 26,
    12, 12, 14, 14, 15, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6,
    6, 28, 29, 0, 28, 29, 5, 0,
    0, 0, 5, 0, 24, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 30, 30,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 1, 0, 2, 0, 1, 1,
    1, 1, 0, 0, 0, 0, 0, 1,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -8, 0, -9, 0, -3, -1, -4, -6,
    -2, 0, 0, 0, 0, -6, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, 0, 0, -3, 0, -6, 0,
    1, 0, 1, 1, 0, 1, 0, 0,
    0, 0, 0, -7, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -1, 0, 0, 0,
    0, 0, -3, -2, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, -7, 0,
    1, -6, 1, -3, 1, 1, -4, -1,
    1, 0, 0, 0, -6, 0, -4, -2,
    0, -6, 1, -1, -2, -3, -1, 1,
    -5, -6, -7, -4, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, -1, -2,
    0, 0, 0, 0, 0, -1, 0, 0,
    -1, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    1, 0, 1, 0, 0, 0, 0, 1,
    -1, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, -1, 0, -1, 0,
    0, 0, -2, -2, 0, 0, 0, 0,
    0, -1, -1, 0, 0, 0, 0, 0,
    1, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 2, 1,
    -9, -1, -4, 0, 1, -1, -4, 0,
    -7, 0, 1, 0, 1, 1, 0, 0,
    0, -1, 1, 0, 0, -9, 1, 1,
    1, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -1,
    1, -3, 1, -4, 0, 1, -1, -1,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, -4, -1, -6, -3, 0,
    0, -3, 0, -1, -9, 1, 2, -13,
    1, -9, 1, 1, -6, 0, 1, -1,
    1, 0, -10, 0, -6, -2, 0, -11,
    0, -1, -4, -8, -5, 1, -10, -9,
    -9, -8, 0, 0, 0, 1, -12, 0,
    -8, 0, 1, 0, -4, 0, -7, 1,
    0, 0, 0, 0, -2, -1, 0, 1,
    1, 1, 1, -9, 0, 0, 0, 1,
    -1, 0, 0, 0, 1, 0, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, 0, 1, 0, 0, -1,
    0, 0, 0, 0, 1, 0, 2, 1,
    -9, -9, -6, -4, 1, -3, -6, -1,
    -7, 0, 1, 0, 1, 1, 0, 1,
    0, -1, 1, -6, -4, -9, 1, 0,
    1, 1, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    1, -1, 1, 0, -7, -3, -3, -2,
    0, -1, -4, 0, -6, 0, 1, 0,
    1, 1, 0, 0, 0, -1, 0, -3,
    0, -7, 1, 0, 1, 1, 1, 0,
    1, 0, -3, -1, 0, -1, 0, -1,
    -2, 0, -3, 0, 1, 0, 1, 1,
    0, 0, 0, 0, 0, -1, 0, -4,
    1, 0, 1, 1, 0, -1, 1, -3,
    1, -4, 1, 1, -1, -1, 0, -2,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, -4, -1, -6, -3, 0, 0, -3,
    0, -1, 1, -3, 1, -1, -12, -6,
    -7, -5, -1, -5, -6, -2, -7, -2,
    1, 0, 0, 0, 0, 0, 0, -4,
    -1, -6, -4, -10, 1, -3, 1, 0,
    0, 0, 0, 0, 1, -2, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, -3, 0, -4, 0, 0, 0,
    -3, -4, 0, 0, 0, 0, 0, -3,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -6, 0, -6, 0, -3, -1, -6, -6,
    -1, 0, 0, 0, 0, -6, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -4, -1, 0, -6, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    -1, 0, -3, 0, -8, 1, -4, 0,
    0, 0, -3, 0, -7, 0, -4, 0,
    -1, 0, -5, -4, -5, 1, 1, 1,
    1, -6, -1, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 1, 2, 0,
    1, -6, 1, 1, 0, 0, 1, -1,
    1, 0, 2, 0, 1, 1, 0, 1,
    0, -1, -1, -5, -1, 1, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 1, 0,
    2, 0, 1, 1, 0, 1, 0, 0,
    0, 0, 0, 1, 2, 0, 0, 0,
    -6, 1, 2, -3, 1, -6, 1, 1,
    -4, 0, 1, -1, 1, 0, -9, 0,
    -5, -2, 0, -10, 0, -1, -4, -3,
    0, 1, -8, -6, -6, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 1, 0, -10, 0, -6, -2,
    0, -10, 0, 0, 0, 0, 0, 1,
    -10, 0, 0, 0, 1, 0, 2, 1,
    -9, -2, -6, -2, 1, -1, -5, -1,
    -7, 0, 1, 0, 1, 1, 0, 1,
    0, -1, 1, -1, -2, -9, 1, 0,
    1, 1
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 35,
    .right_class_cnt     = 30,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t BebasNeue_8 = {
#else
lv_font_t BebasNeue_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .user_data = NULL
};



#endif /*#if BEBASNEUE_8*/

