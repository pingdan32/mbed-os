#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

#define PORT_SHIFT  3

typedef enum {
    p0  = 0,
    p1  = 1,
    p2  = 2,
    p3  = 3,
    p4  = 4,
    p5  = 5,
    p6  = 6,
    p7  = 7,
    p8  = 8,
    p9  = 9,
    p10 = 10,
    p11 = 11,
    p12 = 12,
    p13 = 13,
    p14 = 14,
    p15 = 15,
    p16 = 16,
    p17 = 17,
    p18 = 18,
    p19 = 19,
    p20 = 20,
    p21 = 21,
    p22 = 22,
    p23 = 23,
    p24 = 24,
    p25 = 25,
    p26 = 26,
    p27 = 27,
    p28 = 28,
    p29 = 29,
    p30 = 30,
    p31 = 31,

    P0_0  = p0,
    P0_1  = p1,
    P0_2  = p2,
    P0_3  = p3,
    P0_4  = p4,
    P0_5  = p5,
    P0_6  = p6,
    P0_7  = p7,

    P0_8  = p8,
    P0_9  = p9,
    P0_10 = p10,
    P0_11 = p11,
    P0_12 = p12,
    P0_13 = p13,
    P0_14 = p14,
    P0_15 = p15,

    P0_16 = p16,
    P0_17 = p17,
    P0_18 = p18,
    P0_19 = p19,
    P0_20 = p20,
    P0_21 = p21,
    P0_22 = p22,
    P0_23 = p23,

    P0_24 = p24,
    P0_25 = p25,
    P0_26 = p26,
    P0_27 = p27,
    P0_28 = p28,
    P0_29 = p29,
    P0_30 = p30,
    P0_31 = p31,

    RX_PIN_NUMBER           = (int)0xFFFFFFFF,
    TX_PIN_NUMBER           = p22,
    CTS_PIN_NUMBER          = (int)0xFFFFFFFF,
    RTS_PIN_NUMBER          = (int)0xFFFFFFFF,

    // mBed interface Pins
    USBTX                   = TX_PIN_NUMBER,
    USBRX                   = RX_PIN_NUMBER,
    STDIO_UART_TX           = TX_PIN_NUMBER,
    STDIO_UART_RX           = RX_PIN_NUMBER,
    STDIO_UART_CTS          = CTS_PIN_NUMBER,
    STDIO_UART_RTS          = RTS_PIN_NUMBER,

    // MPU9250 interface
    MPU9250_SPI_MISO_PIN    = p2,
    MPU9250_SPI_MOSI_PIN    = p31,
    MPU9250_SPI_SCK_PIN     = p30,
    MPU9250_SPI_SS_PIN      = p29,
    MPU9250_SPI_INT         = p28,

    // 0.96' OLED interface
    OLED_I2C_SDA_PIN        = p18,
    OLED_I2C_SCL_PIN        = p19,
    OLED_I2C_RST_PIN        = p20,

    // Stepper Motor interface
    MOTOR_PWR_PIN           = p6,
    MOTOR_EN_PIN            = p10,
    MOTOR_SLEEP_PIN         = p9,
    MOTOR_DIR_PIN           = p7,
    MOTOR_STEP_PIN          = p8,

    // Infrared Detection interface
    IR_PWR_PIN              = p13,
    IR_POS_PIN              = p11,
    IR_RST_PIN              = p12,

    // Battery charge state
    BAT_CHGING_PIN          = p3, // LOW
    BAT_PGOOD_PIN           = p4, // LOW
    // Battery level 
    BAT_LEVEL_PIN           = p5,
    // System led
    SYS_LED_PIN             = p25,
    // mbed used LED1
    LED1                    = SYS_LED_PIN,
    // BUzz interface
    BUZZ_PWR_PIN            = p26,

    // Button
    RST_BUTTON_PIN          = p21,
    INC_BUTTON_PIN          = p16,
    DEC_BUTTON_PIN          = p17,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

typedef enum {
    PullNone = 0,
    PullDown = 1,
    PullUp = 3,
    PullDefault = PullUp
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
