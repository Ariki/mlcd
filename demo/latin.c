/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * This demo project displays all Latin letters.
 * Be sure to define MLCD_FONT_LATIN macro in your Makefile.
 */

#include "../mlcd.h"

int main(void) {
    mlcd_init();
    mlcd_clear();
    for (unsigned char c = 'A'; c <= 'Z'; ++c) {
        mlcd_char(c);
    }
    for (unsigned char c = 'a'; c <= 'z'; ++c) {
        mlcd_char(c);
    }
}
