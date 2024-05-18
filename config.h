#include "Arduino.h"

// ETHERNET MAGIC PINS
//BUILT_IN
const byte GIZMO_HW_ENET_CS = 1;
const byte GIZMO_HW_ENET_RST = 20;
const byte GIZMO_HW_ENET_INT = -1;
//ON_HEADER
/* const byte GIZMO_HW_ENET_CS = 13; */
/* const byte GIZMO_HW_ENET_RST = 17; */
/* const byte GIZMO_HW_ENET_INT = -1; */
//

// Pin assignments that are hardware specific.
const byte GIZMO_HW_ADC_BOARD_VOLTAGE = 28;
const byte GIZMO_HW_PWR_BOARD = 6;
const byte GIZMO_HW_PWR_PICO = 7;
const byte GIZMO_HW_PWR_GPIO = 8;
const byte GIZMO_HW_PWR_MAIN_A = 9;
const byte GIZMO_HW_PWR_MAIN_B = 10;
const byte GIZMO_HW_STATUS_NEOPIXELS_PIN = 15;
const byte GIZMO_HW_STATUS_NEOPIXELS_CNT = 3;
const byte GIZMO_HW_USER_RESET = 22;
const byte GIZMO_HW_I2C_SDA = 18;
const byte GIZMO_HW_I2C_SCL = 19;
const byte GIZMO_HW_PRACTICE_MODE = 0;

// Slow but standard serial speed
const int GIZMO_HW_SERIAL_SPEED = 9600;

// Watchdog bites at 15s without food.
const int GIZMO_PUBLIC_MILLIS_WATCHDOG = 15000;
