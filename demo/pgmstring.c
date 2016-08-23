/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * This demo project displays a string located in MCU program memory space.
 * Be sure to define MLCD_FONT_LATIN macro in your Makefile.
 */

#include <avr/pgmspace.h>
#include "../mlcd.h"

const char string_in_pgm[] PROGMEM = "Hello from program memory space";

int main(void) {
    mlcd_init();
    mlcd_clear();
    mlcd_str_P(18, 1, string_in_pgm);
}
