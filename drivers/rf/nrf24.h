/* Bluetooth Low Energy Protocol for QMK.
 * Author: Wez Furlong, 2016
 * Supports the Adafruit BLE board built around the nRF51822 chip.
 */

#pragma once

#include <stdbool.h>
#include <stdint.h>
#include "report.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Instruct the module to enable HID keyboard support and reset */
extern bool nrf24_enable_keyboard(void);

/* Query to see if the BLE module is connected */
extern bool nrf24_query_is_connected(void);

/* Returns true if we believe that the BLE module is connected.
 * This uses our cached understanding that is maintained by
 * calling ble_task() periodically. */
extern bool nrf24_is_connected(void);

extern void nrf24_init(void);

/* Call this periodically to process BLE-originated things */
extern void nrf24_task(void);

/* Generates keypress events for a set of keys.
 * The hid modifier mask specifies the state of the modifier keys for
 * this set of keys.
 * Also sends a key release indicator, so that the keys do not remain
 * held down. */
extern void nrf24_send_keyboard(report_keyboard_t *report);

/* Send a consumer usage.
 * (milliseconds) */
extern void nrf24_send_consumer(uint16_t usage);

/* Send a mouse/wheel movement report.
 * The parameters are signed and indicate positive or negative direction
 * change. */
extern void nrf24_send_mouse(report_mouse_t *report);

/* Compute battery voltage by reading an analog pin.
 * Returns the integer number of millivolts */
extern uint32_t nrf24_read_battery_voltage(void);

extern bool nrf24_set_mode_leds(bool on);
extern bool nrf24_set_power_level(int8_t level);

#ifdef __cplusplus
}
#endif
