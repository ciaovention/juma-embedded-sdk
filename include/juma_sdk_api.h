/*
  Copyright 2014-2015 juma.io

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef _JUMA_SDK_API_H_
#define _JUMA_SDK_API_H_
#include "juma_sdk_types.h"

#define run_after_delay(func, args, delay)          run_at_time((func), (args), current_time() + (delay))

void on_load( void );
void on_ready(void);
void on_lock_state_changed(uint8_t is_locked);
void on_gpio_pin_state_changed(uint8_t new_state);
void ble_device_on_open(void);
void ble_device_on_close(uint8_t reason);
void ble_device_on_message(uint8_t* data, uint32_t size);
void serial_on_open(void);
void serial_on_close(uint8_t reason);
void serial_on_message(uint8_t* data, uint32_t size);
void run_when_idle(function_t func, void* args);
void run_at_time(function_t func, void* args, uint32_t time);
uint32_t current_time(void);
void watch_gpio_pin_state(uint8_t pin, uint8_t change_direction);
void unwatch_gpio_pin_state(void);
void set_gpio_pin_mode(uint8_t pin, uint8_t mode);
void set_gpio_pin_state(uint8_t pin, uint8_t state);
uint8_t get_gpio_pin_state(uint8_t pin);
void read_analog_input(uint8_t pin, function_t on_complete);
uint8_t ble_device_is_connected(void);
void ble_device_set_name(const char* device_name);
void ble_device_disconnect(void);
void ble_device_send(uint8_t* data, uint32_t size);
void serial_setup(uint8_t rx_pin, uint8_t tx_pin, uint8_t irq_pin);
void serial_send(uint8_t* data, uint32_t size);
void setup_buzzer(uint8_t is_passive, uint8_t pin, uint8_t is_active_high);
void setup_indicator(uint8_t pin, uint8_t is_active_high);
void setup_light(uint8_t* pins, uint8_t is_active_high);
void set_light_power(uint8_t on);
void set_light_color(const uint8_t* rgb_values);
void setup_beacon(uint8_t* uuid, uint16_t major, uint16_t minor, uint8_t rssi);
#endif
