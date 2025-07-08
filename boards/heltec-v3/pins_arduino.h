#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

// TODO: Update all pin assignments for Heltec V3

#define USB_VID 0x303a // TODO: Set correct VID for Heltec V3
#define USB_PID 0x1001 // TODO: Set correct PID for Heltec V3

// TODO: Review NEOPIXEL and LED pin assignments
#define PIN_NEOPIXEL 48 // TODO: Set correct pin
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + PIN_NEOPIXEL;
#define BUILTIN_LED LED_BUILTIN
#define LED_BUILTIN LED_BUILTIN
#define RGB_BUILTIN LED_BUILTIN
#define RGB_BRIGHTNESS 64

// TODO: Update keyboard and HID definitions if needed
#define HAS_KEYBOARD
#define HAS_KEYBOARD_HID
#define KB_HID_EXIT_MSG "Mid Btn + Space to exit"

// TODO: Set correct UART pins
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// TODO: Set correct I2C pins
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

// TODO: Set correct SPI pins
static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK = 12;

// TODO: Update analog pin assignments as per Heltec V3
static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
static const uint8_t A7 = 8;
static const uint8_t A8 = 9;
static const uint8_t A9 = 10;
static const uint8_t A10 = 11;
static const uint8_t A11 = 12;
static const uint8_t A12 = 13;
static const uint8_t A13 = 14;
static const uint8_t A14 = 15;
static const uint8_t A15 = 16;
static const uint8_t A16 = 17;
static const uint8_t A17 = 18;
static const uint8_t A18 = 19;
static const uint8_t A19 = 20;

// TODO: Update touch pin assignments as per Heltec V3
static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;
static const uint8_t T13 = 13;
static const uint8_t T14 = 14;

// Deepsleep
#define DEEPSLEEP_WAKEUP_PIN 0 // TODO: Set correct pin
#define DEEPSLEEP_PIN_ACT LOW

#endif /* Pins_Arduino_h */
