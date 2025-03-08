/*
 * Copyright 2022
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "rf.h"

#if defined(RF_NRF24L01)
#    include "nrf24.h"
#endif

void rf_init(void) {
#if defined(RF_NRF24L01)
    nrf24_init();
#endif
}

void rf_task(void) {
#if defined(RF_NRF24L01)
    nrf24_task();
#endif
}

void rf_send_keyboard(report_keyboard_t *report) {
#if defined(RF_NRF24L01)
    nrf24_send_keyboard(report);
#endif
}

void rf_send_mouse(report_mouse_t *report) {
#if defined(RF_NRF24L01)
    nrf24_send_mouse(report);
#endif
}

void rf_send_consumer(uint16_t usage) {
#if defined(RF_NRF24L01)
    nrf24_send_consumer(usage);
#endif
}
