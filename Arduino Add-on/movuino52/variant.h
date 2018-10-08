 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2017, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_FEATHER52_
#define _VARIANT_FEATHER52_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (32u)
#define NUM_DIGITAL_PINS     (32u)
#define NUM_ANALOG_INPUTS    (8u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LED1                (15)
#define PIN_LED2                (12)
#define PIN_LED3                (24)

#define LED_BUILTIN             PIN_LED1
#define LED_CONN                PIN_LED3

#define LED_RED                 PIN_LED1
#define LED_GREEN               PIN_LED2
#define LED_BLUE                PIN_LED3

#define LED_STATE_ON            0         // State when LED is litted

// Buttons
#define PIN_BUTTON1             (14)


/*
 * Analog pins
 */
#define PIN_A0               (2)
#define PIN_A1               (3)
#define PIN_A2               (4)
#define PIN_A3               (28)
#define PIN_A4               (29)
#define PIN_A5               (30)
#define PIN_A6               (31)
#define PIN_A7               (5)
#define PIN_D0               (7)
#define PIN_D1               (25)
#define PIN_D2               (24)
#define PIN_D3               (12)
#define PIN_D4               (15)
#define PIN_D5               (17)
#define PIN_D6               (14)
#define PIN_D7               (11)


static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
static const uint8_t A6  = PIN_A6 ;
static const uint8_t A7  = PIN_A7 ;
static const uint8_t D0  = PIN_D0 ;
static const uint8_t D1  = PIN_D1 ;
static const uint8_t D2  = PIN_D2 ;
static const uint8_t D3  = PIN_D3 ;
static const uint8_t D4  = PIN_D4 ;
static const uint8_t D5  = PIN_D5 ;
static const uint8_t D6  = PIN_D6 ;
static const uint8_t D7  = PIN_D7 ;
#define ADC_RESOLUTION    12

// Other pins
//#define PIN_AREF           (24)
#define PIN_DFU            (20)
#define PIN_NFC1           (9)
#define PIN_NFC2           (10)

//static const uint8_t AREF = PIN_AREF;

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (8)
#define PIN_SERIAL_TX       (6)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (23)
#define PIN_SPI_MOSI         (16)
#define PIN_SPI_SCK          (19)

static const uint8_t SS   = 7 ; //old 18
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (26u)
#define PIN_WIRE_SCL         (27u)


static inline bool isPinValid(uint32_t pin)
{
  // 0, 1 is xtal
  if (pin >= PINS_COUNT) return false;

  const uint8_t forbid[] = { 0, 1, };
  for(uint8_t i=0; i<sizeof(forbid); i++)
  {
    if ( pin == forbid[i] ) return false;
  }

  return true;
}

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
