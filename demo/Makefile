#
# Copyright (c) 2016 Alexei Ardyakov
# This project is distributed under the MIT license.
#

CC=avr-gcc
OBJCOPY=avr-objcopy
UPLOADER=avrdude

MCU=attiny2313
F_CPU=8000000

PROG=usbasp
BITRATE=19200
AVRDUDE_MCU=t2313

SOURCE=../mlcd.c ../mlcd_font.c
OUTFILE=a.out
TARGET=a.hex


build:
	$(CC) -mmcu=$(MCU) -O2 -DF_CPU=$(F_CPU) \
		-DMLCD_FONT_ASCII -DMLCD_FONT_CYRILLIC \
		-o $(OUTFILE) $(SOURCE) latin.c

	$(OBJCOPY) -O ihex $(OUTFILE) $(TARGET)

charset:
	$(CC) -mmcu=$(MCU) -O2 -DF_CPU=$(F_CPU) \
		-DMLCD_FONT_ASCII -DMLCD_FONT_CYRILLIC \
		-o $(OUTFILE) $(SOURCE) charset.c

	$(OBJCOPY) -O ihex $(OUTFILE) $(TARGET)

	$(UPLOADER) -p $(AVRDUDE_MCU) -c $(PROG) -b $(BITRATE) -v \
		-U flash:w:$(TARGET) -U lfuse:w:0xE4:m

latin:
	$(CC) -mmcu=$(MCU) -O2 -DF_CPU=$(F_CPU) -DMLCD_FONT_LATIN \
		-o $(OUTFILE) $(SOURCE) latin.c

	$(OBJCOPY) -O ihex $(OUTFILE) $(TARGET)

	$(UPLOADER) -p $(AVRDUDE_MCU) -c $(PROG) -b $(BITRATE) -v \
		-U flash:w:$(TARGET) -U lfuse:w:0xE4:m

cyrillic:
	$(CC) -mmcu=$(MCU) -O2 -DF_CPU=$(F_CPU) -DMLCD_FONT_CYRILLIC \
		-o $(OUTFILE) $(SOURCE) cyrillic.c

	$(OBJCOPY) -O ihex $(OUTFILE) $(TARGET)

	$(UPLOADER) -p $(AVRDUDE_MCU) -c $(PROG) -b $(BITRATE) -v \
		-U flash:w:$(TARGET) -U lfuse:w:0xE4:m

pgmstring:
	$(CC) -mmcu=$(MCU) -O2 -DF_CPU=$(F_CPU) -DMLCD_FONT_LATIN \
		-o $(OUTFILE) $(SOURCE) pgmstring.c

	$(OBJCOPY) -O ihex $(OUTFILE) $(TARGET)

	$(UPLOADER) -p $(AVRDUDE_MCU) -c $(PROG) -b $(BITRATE) -v \
		-U flash:w:$(TARGET) -U lfuse:w:0xE4:m

decor:
	$(CC) -mmcu=$(MCU) -O2 -DF_CPU=$(F_CPU) -DMLCD_FONT_DIGITS \
		-o $(OUTFILE) $(SOURCE) decor.c

	$(OBJCOPY) -O ihex $(OUTFILE) $(TARGET)

	$(UPLOADER) -p $(AVRDUDE_MCU) -c $(PROG) -b $(BITRATE) -v \
		-U flash:w:$(TARGET) -U lfuse:w:0xE4:m

clean:
	rm -f *.out *.hex
