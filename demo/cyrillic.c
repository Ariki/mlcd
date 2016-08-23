/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * This demo project displays all Cyrillic letters.
 * Be sure to define MLCD_FONT_CYRILLIC macro in your Makefile.
 */

#include "../mlcd.h"

int main(void) {
    mlcd_init();
    mlcd_clear();
    for (unsigned char c = 0xc0; 0 != c && c <= 0xff; ++c) {
        mlcd_char(c);
    }
}
