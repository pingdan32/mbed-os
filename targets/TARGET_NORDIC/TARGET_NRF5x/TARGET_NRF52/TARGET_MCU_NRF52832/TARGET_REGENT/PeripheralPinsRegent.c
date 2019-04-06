#include "pinmap_ex.h"
#include "mbed_toolchain.h"

/* Default mapping between I2C pins and I2C instance.
 * Can be overwritten by user.
 */
const PinMapI2C PinMap_I2C[] = {
        { OLED_I2C_SDA_PIN, OLED_I2C_SCL_PIN, 0 },
        { NC,               NC,               NC }
};

/* Default mapping between SPI pins and SPI instance.
 * Can be overwritten by user.
 */
const PinMapSPI PinMap_SPI[] = {
        { MPU9250_SPI_MOSI_PIN, MPU9250_SPI_MISO_PIN, MPU9250_SPI_SCK_PIN, 1  },
        { NC,                   NC,                   NC,                  NC },
        { NC,                   NC,                   NC,                  NC }
};

/* Default mapping between UART pins and UART instance.
 * Can be overwritten by user.
 */
const PinMapUART PinMap_UART[] = {
        { TX_PIN_NUMBER, RX_PIN_NUMBER, 0 }
};
