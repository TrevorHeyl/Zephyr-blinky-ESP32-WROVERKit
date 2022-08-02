#include <device.h>
#include <toolchain.h>

/* 1 : /soc/rtc@3ff48000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - /soc/i2c@3ff53000
 *   - (/soc/i2c@3ff67000)
 *   - (/soc/spi@3ff64000)
 *   - (/soc/spi@3ff65000)
 *   - /soc/uart@3ff40000
 *   - (/soc/uart@3ff50000)
 *   - (/soc/uart@3ff6e000)
 *   - (/soc/watchdog@3ff5f048)
 *   - (/soc/watchdog@3ff60048)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_rtc_3ff48000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 6, 5, DEVICE_HANDLE_ENDS };

/* 2 : /soc/pinmux@3ff49000:
 * Direct Dependencies:
 *   - (/soc)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pinmux_3ff49000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/gpio@3ff44800:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@3ff00104)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_3ff44800[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/gpio@3ff44000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@3ff00104)
 * Supported:
 *   - (/leds/led_0)
 *   - (/leds/led_1)
 *   - (/leds/led_2)
 *   - (/leds/ledgp1)
 *   - (/soc/spi@3ff65000/ili9341@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_3ff44000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/uart@3ff40000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@3ff00104)
 *   - /soc/rtc@3ff48000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_uart_3ff40000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/i2c@3ff53000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@3ff00104)
 *   - /soc/rtc@3ff48000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_i2c_3ff53000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
