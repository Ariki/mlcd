/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

#ifndef _MLCD_FONT_H_
#define _MLCD_FONT_H_

#include "mlcd_config.h"

#define MLCD_FONT_WIDTH 6

#ifdef MLCD_FONT_ASCII
#define MLCD_FONT_SYMBOLS 1
#define MLCD_FONT_DIGITS 1
#define MLCD_FONT_LATIN 1
#endif

#ifdef MLCD_FONT_SYMBOLS
#define MLCD_FONT_SYMBOLS_1 1
#define MLCD_FONT_SYMBOLS_2 1
#define MLCD_FONT_SYMBOLS_3 1
#define MLCD_FONT_SYMBOLS_4 1
#endif

#ifdef MLCD_FONT_LATIN
#define MLCD_FONT_LATIN_U 1
#define MLCD_FONT_LATIN_L 1
#endif

#ifdef MLCD_FONT_CYRILLIC
#define MLCD_FONT_CYRILLIC_U 1
#define MLCD_FONT_CYRILLIC_L 1
#endif

uint8_t mlcd_font(unsigned char c, uint8_t i);

#endif
