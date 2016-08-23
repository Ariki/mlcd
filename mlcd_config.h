/*
 * Copyright (c) 2016 Alexei Ardyakov
 * This project is distributed under the MIT license.
 */

/*
 * This is a setup for ATtiny2313 which uses port D, pins 2 to 6.
 * Replace this file with your settings or override definitions
 * in your Makefile.
 */

#ifndef _MLCD_SETUP_H_
#define _MLCD_SETUP_H_

#ifndef MLCD_PORT
#define MLCD_PORT PORTD
#endif

#ifndef MLCD_DDR
#define MLCD_DDR DDRD
#endif

#ifndef MLCD_CLK
#define MLCD_CLK PB6
#endif

#ifndef MLCD_DIN
#define MLCD_DIN PB5
#endif

#ifndef MLCD_DC
#define MLCD_DC PB4
#endif

#ifndef MLCD_RST
#define MLCD_RST PB3
#endif

/*
 * If your SCE pin is connected to the ground, just undefine MLCD_CE.
 */
#ifndef MLCD_CE
#define MLCD_CE PB2
#endif

/*
 * You probably don't need MLCD_DELAY_LOOPS if you use low frequency
 * configuration (such as 1 or 2 MHz). If you observe unstable work
 * or garbage on display, try enabling delay.
 */
#ifndef MLCD_DELAY_LOOPS
#define MLCD_DELAY_LOOPS 1
#endif

/*
 * To enable one or more font subsets, you also need to define one or more of
 * MLCD_FONT_XXX symbols. See mlcd_font.h
 */

#endif
