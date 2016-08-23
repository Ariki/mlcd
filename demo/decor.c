/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * This demo project displays text with decoration.
 * Be sure to define MLCD_FONT_DIGITS macro in your Makefile.
 */

#include "../mlcd.h"

int main(void) {
    mlcd_init();
    mlcd_clear();
    mlcd_char_decor('0', MLCD_DECOR_NONE);
    mlcd_char_decor('1', MLCD_DECOR_INVERT);
    mlcd_char_decor('2', MLCD_DECOR_UNDERLINE);
    mlcd_char_decor('3', MLCD_DECOR_INVERT | MLCD_DECOR_UNDERLINE);
}
