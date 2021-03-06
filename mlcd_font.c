/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * The fonts defined in this source file are designed from scratch
 * and you can easily see that their author is not a good font designer.
 * Feel free to replace this file with anything that suits your needs.
 */

#include <avr/pgmspace.h>
#include "mlcd_font.h"

#ifdef MLCD_FONT_SYMBOLS_1
// !"#$%&'()*+,-./
const uint8_t mlcd_symbols_1[15][5] PROGMEM = {
    {0x00, 0x00, 0x5e, 0x00, 0x00}, // !
    {0x00, 0x06, 0x00, 0x06, 0x00}, // "
    {0x14, 0x3e, 0x14, 0x3e, 0x14}, // #
    {0x24, 0x4a, 0xff, 0x4a, 0x30}, // $
    {0x26, 0x16, 0x08, 0x34, 0x32}, // %
    {0x34, 0x4a, 0x52, 0x24, 0x50}, // &
    {0x00, 0x00, 0x06, 0x00, 0x00}, // '
    {0x00, 0x00, 0x3e, 0x41, 0x00}, // (
    {0x00, 0x41, 0x3e, 0x00, 0x00}, // )
    {0x14, 0x08, 0x3e, 0x08, 0x14}, // *
    {0x08, 0x08, 0x3e, 0x08, 0x08}, // +
    {0x00, 0x80, 0x60, 0x00, 0x00}, // ,
    {0x08, 0x08, 0x08, 0x08, 0x08}, // -
    {0x00, 0x00, 0x40, 0x00, 0x00}, // .
    {0x20, 0x10, 0x08, 0x04, 0x02}  // /
};
#endif

#ifdef MLCD_FONT_DIGITS
// 0123456789
const uint8_t mlcd_digits[10][5] PROGMEM = {
    {0x3c, 0x42, 0x5a, 0x42, 0x3c}, // 0
    {0x00, 0x44, 0x7e, 0x40, 0x00}, // 1
    {0x44, 0x62, 0x52, 0x52, 0x4c}, // 2
    {0x24, 0x42, 0x4a, 0x4a, 0x34}, // 3
    {0x30, 0x28, 0x24, 0x7e, 0x20}, // 4
    {0x2e, 0x4a, 0x4a, 0x4a, 0x32}, // 5
    {0x3c, 0x4a, 0x4a, 0x4a, 0x30}, // 6
    {0x02, 0x62, 0x12, 0x0a, 0x06}, // 7
    {0x34, 0x4a, 0x4a, 0x4a, 0x34}, // 8
    {0x0c, 0x52, 0x52, 0x52, 0x3c}  // 9
};
#endif

#ifdef MLCD_FONT_SYMBOLS_2
// :;<=>?@
const uint8_t mlcd_symbols_2[7][5] PROGMEM = {
    {0x00, 0x00, 0x24, 0x00, 0x00}, // :
    {0x00, 0x80, 0x64, 0x00, 0x00}, // ;
    {0x08, 0x14, 0x14, 0x22, 0x22}, // <
    {0x14, 0x14, 0x14, 0x14, 0x14}, // =
    {0x22, 0x22, 0x14, 0x14, 0x08}, // >
    {0x04, 0x02, 0x52, 0x0a, 0x04}, // ?
    {0x3c, 0x42, 0x5a, 0x5a, 0x1c}  // @
};
#endif

#ifdef MLCD_FONT_LATIN_U
// ABCDEFGHIJKLMNOPQRSTUVWXYZ
const uint8_t mlcd_latin_u[26][5] PROGMEM = {
    {0x70, 0x18, 0x14, 0x12, 0x7e}, // A
    {0x7e, 0x4a, 0x4a, 0x4a, 0x34}, // B
    {0x3c, 0x42, 0x42, 0x42, 0x24}, // C
    {0x7e, 0x42, 0x42, 0x42, 0x3c}, // D
    {0x7e, 0x4a, 0x4a, 0x4a, 0x42}, // E
    {0x7e, 0x12, 0x12, 0x12, 0x02}, // F
    {0x3c, 0x42, 0x42, 0x52, 0x34}, // G
    {0x7e, 0x08, 0x08, 0x08, 0x7e}, // H
    {0x00, 0x42, 0x7e, 0x42, 0x00}, // I
    {0x20, 0x42, 0x42, 0x42, 0x3e}, // J
    {0x7e, 0x08, 0x08, 0x14, 0x62}, // K
    {0x7e, 0x40, 0x40, 0x40, 0x40}, // L
    {0x7e, 0x04, 0x18, 0x04, 0x7e}, // M
    {0x7e, 0x04, 0x18, 0x20, 0x7e}, // N
    {0x3c, 0x42, 0x42, 0x42, 0x3c}, // O
    {0x7e, 0x12, 0x12, 0x12, 0x0c}, // P
    {0x3c, 0x42, 0x42, 0x22, 0x5c}, // Q
    {0x7e, 0x12, 0x12, 0x32, 0x4c}, // R
    {0x24, 0x4a, 0x4a, 0x52, 0x24}, // S
    {0x02, 0x02, 0x7e, 0x02, 0x02}, // T
    {0x3e, 0x40, 0x40, 0x40, 0x3e}, // U
    {0x06, 0x18, 0x60, 0x18, 0x06}, // V
    {0x1e, 0x60, 0x18, 0x60, 0x1e}, // W
    {0x62, 0x14, 0x08, 0x14, 0x62}, // X
    {0x06, 0x08, 0x70, 0x08, 0x06}, // Y
    {0x42, 0x62, 0x5a, 0x46, 0x42}  // z
};
#endif

#ifdef MLCD_FONT_SYMBOLS_3
// [\]^_`
const uint8_t mlcd_symbols_3[6][5] PROGMEM = {
    {0x00, 0x00, 0x7f, 0x41, 0x00}, // [
    {0x02, 0x04, 0x08, 0x10, 0x20}, // backslash
    {0x00, 0x41, 0x7f, 0x00, 0x00}, // ]
    {0x08, 0x04, 0x02, 0x04, 0x08}, // ^
    {0x80, 0x80, 0x80, 0x80, 0x80}, // _
    {0x00, 0x02, 0x04, 0x00, 0x00}  // `
};
#endif

#ifdef MLCD_FONT_LATIN_L
// abcdefghijklmnopqrstuvwxyz
const uint8_t mlcd_latin_l[26][5] PROGMEM = {
    {0x20, 0x54, 0x54, 0x38, 0x40}, // a
    {0x7e, 0x48, 0x48, 0x30, 0x00}, // b
    {0x38, 0x44, 0x44, 0x28, 0x00}, // c
    {0x30, 0x48, 0x48, 0x7e, 0x00}, // d
    {0x38, 0x54, 0x54, 0x18, 0x00}, // e
    {0x08, 0x7c, 0x0a, 0x0a, 0x00}, // f
    {0x18, 0xa4, 0xa4, 0x7c, 0x00}, // g
    {0x7e, 0x08, 0x08, 0x70, 0x00}, // h
    {0x00, 0x00, 0x3a, 0x40, 0x00}, // i
    {0x00, 0x80, 0x7a, 0x00, 0x00}, // j
    {0x7e, 0x10, 0x18, 0x64, 0x00}, // k
    {0x00, 0x3e, 0x40, 0x40, 0x00}, // l
    {0x7c, 0x04, 0x7c, 0x04, 0x78}, // m
    {0x7c, 0x04, 0x04, 0x78, 0x00}, // n
    {0x38, 0x44, 0x44, 0x38, 0x00}, // o
    {0xfc, 0x24, 0x24, 0x18, 0x00}, // p
    {0x18, 0x24, 0x24, 0xfc, 0x00}, // q
    {0x7c, 0x08, 0x04, 0x04, 0x00}, // r
    {0x48, 0x54, 0x54, 0x24, 0x00}, // s
    {0x04, 0x3e, 0x44, 0x44, 0x00}, // t
    {0x3c, 0x40, 0x40, 0x7c, 0x00}, // u
    {0x0c, 0x30, 0x40, 0x30, 0x0c}, // v
    {0x3c, 0x40, 0x30, 0x40, 0x3c}, // w
    {0x44, 0x28, 0x10, 0x28, 0x44}, // x
    {0x9c, 0xa0, 0xa0, 0x7c, 0x00}, // y
    {0x44, 0x64, 0x54, 0x4c, 0x00}, // z
};
#endif

#ifdef MLCD_FONT_SYMBOLS_4
// {|}~
const uint8_t mlcd_symbols_4[4][5] PROGMEM = {
    {0x00, 0x08, 0x36, 0x41, 0x00}, // {
    {0x00, 0x00, 0x7f, 0x00, 0x00}, // |
    {0x00, 0x41, 0x36, 0x08, 0x00}, // }
    {0x08, 0x04, 0x08, 0x04, 0x00}  // ~
};
#endif

#ifdef MLCD_FONT_CYRILLIC_U
// Uppercase cyrillic 0xc0-0xdf
const uint8_t mlcd_cyrillic_u[32][5] PROGMEM = {
    {0x70, 0x18, 0x14, 0x12, 0x7e}, // CYRILLIC CAPITAL LETTER A
    {0x7e, 0x4a, 0x4a, 0x4a, 0x32}, // CYRILLIC CAPITAL LETTER BE
    {0x7e, 0x4a, 0x4a, 0x4a, 0x34}, // CYRILLIC CAPITAL LETTER VE
    {0x7e, 0x02, 0x02, 0x02, 0x02}, // CYRILLIC CAPITAL LETTER GHE
    {0xc0, 0x7c, 0x42, 0x7e, 0xc0}, // CYRILLIC CAPITAL LETTER DE
    {0x7e, 0x4a, 0x4a, 0x4a, 0x42}, // CYRILLIC CAPITAL LETTER IE
    {0x66, 0x18, 0x7e, 0x18, 0x66}, // CYRILLIC CAPITAL LETTER ZHE
    {0x20, 0x42, 0x4a, 0x4a, 0x34}, // CYRILLIC CAPITAL LETTER ZE
    {0x7e, 0x20, 0x10, 0x08, 0x7e}, // CYRILLIC CAPITAL LETTER I
    {0x7e, 0x20, 0x11, 0x08, 0x7e}, // CYRILLIC CAPITAL LETTER SHORT I
    {0x7e, 0x08, 0x08, 0x14, 0x62}, // CYRILLIC CAPITAL LETTER KA
    {0x40, 0x3c, 0x02, 0x02, 0x7e}, // CYRILLIC CAPITAL LETTER EL
    {0x7e, 0x04, 0x08, 0x04, 0x7e}, // CYRILLIC CAPITAL LETTER EM
    {0x7e, 0x08, 0x08, 0x08, 0x7e}, // CYRILLIC CAPITAL LETTER EN
    {0x3c, 0x42, 0x42, 0x42, 0x3c}, // CYRILLIC CAPITAL LETTER O
    {0x7e, 0x02, 0x02, 0x02, 0x7e}, // CYRILLIC CAPITAL LETTER PE
    {0x7e, 0x12, 0x12, 0x12, 0x0c}, // CYRILLIC CAPITAL LETTER ER
    {0x3c, 0x42, 0x42, 0x42, 0x24}, // CYRILLIC CAPITAL LETTER ES
    {0x02, 0x02, 0x7e, 0x02, 0x02}, // CYRILLIC CAPITAL LETTER TE
    {0x0e, 0x50, 0x50, 0x50, 0x3e}, // CYRILLIC CAPITAL LETTER U
    {0x18, 0x24, 0x7e, 0x24, 0x18}, // CYRILLIC CAPITAL LETTER EF
    {0x62, 0x14, 0x08, 0x14, 0x62}, // CYRILLIC CAPITAL LETTER HA
    {0x7e, 0x40, 0x40, 0x7e, 0xc0}, // CYRILLIC CAPITAL LETTER TSE
    {0x0e, 0x10, 0x10, 0x10, 0x7e}, // CYRILLIC CAPITAL LETTER CHE
    {0x7e, 0x40, 0x7e, 0x40, 0x7e}, // CYRILLIC CAPITAL LETTER SHA
    {0x7e, 0x40, 0x7e, 0x40, 0x7e}, // CYRILLIC CAPITAL LETTER SHCHA
    {0x02, 0x7e, 0x48, 0x48, 0x30}, // CYRILLIC CAPITAL LETTER HARD SIGN
    {0x7e, 0x48, 0x48, 0x30, 0x7e}, // CYRILLIC CAPITAL LETTER YERU
    {0x7e, 0x48, 0x48, 0x30, 0x00}, // CYRILLIC CAPITAL LETTER SOFT SIGN
    {0x24, 0x42, 0x4a, 0x4a, 0x3c}, // CYRILLIC CAPITAL LETTER E
    {0x7e, 0x08, 0x7e, 0x42, 0x7c}, // CYRILLIC CAPITAL LETTER YU
    {0x4c, 0x32, 0x12, 0x12, 0x7e}  // CYRILLIC CAPITAL LETTER YA
};
#endif

#ifdef MLCD_FONT_CYRILLIC_L
// Lowercase cyrillic 0xe0-0xff
const uint8_t mlcd_cyrillic_l[32][5] PROGMEM = {
    {0x20, 0x54, 0x54, 0x38, 0x40}, // cyrillic small letter a
    {0x3C, 0x4A, 0x4A, 0x32, 0x00}, // cyrillic small letter be
    {0x7C, 0x54, 0x54, 0x28, 0x00}, // cyrillic small letter ve
    {0x7C, 0x04, 0x04, 0x04, 0x00}, // cyrillic small letter ghe
    {0xC0, 0x78, 0x44, 0x7C, 0xC0}, // cyrillic small letter de
    {0x38, 0x54, 0x54, 0x18, 0x00}, // cyrillic small letter ie
    {0x6C, 0x10, 0x7C, 0x10, 0x6C}, // cyrillic small letter zhe
    {0x44, 0x54, 0x54, 0x28, 0x00}, // cyrillic small letter ze
    {0x7C, 0x20, 0x10, 0x7C, 0x00}, // cyrillic small letter i
    {0x7C, 0x21, 0x11, 0x7C, 0x00}, // cyrillic small letter short i
    {0x7C, 0x10, 0x28, 0x44, 0x00}, // cyrillic small letter ka
    {0x40, 0x38, 0x04, 0x7C, 0x00}, // cyrillic small letter el
    {0x7C, 0x08, 0x10, 0x08, 0x7C}, // cyrillic small letter em
    {0x7C, 0x10, 0x10, 0x7C, 0x00}, // cyrillic small letter en
    {0x38, 0x44, 0x44, 0x38, 0x00}, // cyrillic small letter o
    {0x7C, 0x04, 0x04, 0x7C, 0x00}, // cyrillic small letter pe
    {0xFC, 0x24, 0x24, 0x18, 0x00}, // cyrillic small letter er
    {0x38, 0x44, 0x44, 0x28, 0x00}, // cyrillic small letter es
    {0x04, 0x04, 0x7C, 0x04, 0x04}, // cyrillic small letter te
    {0x1C, 0xA0, 0xA0, 0x7C, 0x00}, // cyrillic small letter u
    {0x30, 0x48, 0xFC, 0x48, 0x30}, // cyrillic small letter ef
    {0x44, 0x28, 0x10, 0x28, 0x44}, // cyrillic small letter ha
    {0x7C, 0x40, 0x40, 0x7C, 0xC0}, // cyrillic small letter tse
    {0x0C, 0x10, 0x10, 0x7C, 0x00}, // cyrillic small letter che
    {0x7C, 0x40, 0x7C, 0x40, 0x7C}, // cyrillic small letter sha
    {0x7C, 0x40, 0x7C, 0x40, 0x7C}, // cyrillic small letter shcha
    {0x04, 0x7C, 0x50, 0x50, 0x20}, // cyrillic small letter hard sign
    {0x7C, 0x50, 0x70, 0x00, 0x7C}, // cyrillic small letter yeru
    {0x7C, 0x50, 0x50, 0x20, 0x00}, // cyrillic small letter soft sign
    {0x28, 0x44, 0x54, 0x38, 0x00}, // cyrillic small letter e
    {0x7C, 0x10, 0x7C, 0x44, 0x78}, // cyrillic small letter yu
    {0x58, 0x34, 0x14, 0x7C, 0x00}  // cyrillic small letter ya
};
#endif


/**
 * Returns the i-th column of a 6-column font symbol c.
 * @param c The character.
 * @param i The column of symbol [0..5].
 * @return The 8 bit column of the font symbol.
 */
uint8_t mlcd_font(unsigned char c, uint8_t i) {
    if (i < 5) {

#ifdef MLCD_FONT_SYMBOLS_1
        if (c >= '!' && c <= '/') {
            return pgm_read_byte(&(mlcd_symbols_1[c - '!'][i]));
        }
#endif

#ifdef MLCD_FONT_DIGITS
        if (c >= '0' && c <= '9') {
            return pgm_read_byte(&(mlcd_digits[c - '0'][i]));
        }
#endif

#ifdef MLCD_FONT_SYMBOLS_2
        if (c >= ':' && c <= '@') {
            return pgm_read_byte(&(mlcd_symbols_2[c - ':'][i]));
        }
#endif

#ifdef MLCD_FONT_LATIN_U
        if (c >= 'A' && c <= 'Z') {
            return pgm_read_byte(&(mlcd_latin_u[c - 'A'][i]));
        }
#endif

#ifdef MLCD_FONT_SYMBOLS_3
        if (c >= '[' && c <= '`') {
            return pgm_read_byte(&(mlcd_symbols_3[c - '['][i]));
        }
#endif

#ifdef MLCD_FONT_LATIN_L
        if (c >= 'a' && c <= 'z') {
            return pgm_read_byte(&(mlcd_latin_l[c - 'a'][i]));
        }
#endif

#ifdef MLCD_FONT_SYMBOLS_4
        if (c >= '{' && c <= '~') {
            return pgm_read_byte(&(mlcd_symbols_4[c - '{'][i]));
        }
#endif

#ifdef MLCD_FONT_CYRILLIC_U
        if (c >= 0xc0 && c <= 0xdf) {
            return pgm_read_byte(&(mlcd_cyrillic_u[c - 0xc0][i]));
        }
#endif

#ifdef MLCD_FONT_CYRILLIC_L
        if (c >= 0xe0 && c <= 0xff) {
            return pgm_read_byte(&(mlcd_cyrillic_l[c - 0xe0][i]));
        }
#endif
    }

    // Special rules for the 6th column

#ifdef MLCD_FONT_CYRILLIC_U
    if (c == 0xd9) {
        return 0xc0; // The tail of cyrillic SHCHA
    }
#endif

#ifdef MLCD_FONT_CYRILLIC_L
    if (c == 0xf9) {
        return 0xc0; // The tail of cyrillic shcha
    }
#endif

    return 0x00;
}
