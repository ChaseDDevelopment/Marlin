/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 5000
#define CUSTOM_BOOTSCREEN_BMPWIDTH 128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[6207] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x1C, 0x80, 0x00, 0x00, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x22, 0x80, 0x00, 0x00, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x22, 0xB1, 0xC6, 0x38, 0x98, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x20, 0xCA, 0x29, 0x44, 0x24, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x20, 0x88, 0x28, 0x44, 0x20, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x20, 0x89, 0xE6, 0x7C, 0x18, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x22, 0x8A, 0x21, 0x40, 0x04, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x22, 0x8A, 0x29, 0x44, 0x24, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x1C, 0x89, 0xE6, 0x38, 0x18, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x7C, 0x00, 0x80, 0x00, 0x78, 0x00, 0x1F, 0x80, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x40, 0x00, 0x80, 0x00, 0x84, 0x00, 0x1F, 0x80, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x42, 0xC7, 0x9C, 0xB0, 0x04, 0x00, 0x1F, 0x80, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x43, 0x28, 0xA2, 0xC0, 0x04, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x7A, 0x28, 0xA2, 0x80, 0x38, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x42, 0x28, 0xBE, 0x86, 0x04, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x1F, 0xC0,
0x00, 0x42, 0x28, 0xA0, 0x80, 0x04, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x42, 0x28, 0xA2, 0x80, 0x84, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x7E, 0x27, 0x9C, 0x80, 0x78, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x04, 0x40, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x04, 0x6D, 0xC0, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x04, 0x72, 0x20, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x07, 0xA2, 0x20, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x04, 0x22, 0x20, 0x00, 0x00, 0x1F, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x04, 0x22, 0x20, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x04, 0x22, 0x20, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x04, 0x21, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0
};
