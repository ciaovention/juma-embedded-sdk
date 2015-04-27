#include "juma_sdk_api.h"

#define LED_1 18


void led_on_task(void* args);
void led_off_task(void* args);

void on_load()
{
  ble_device_set_name("Blink");	
}

void on_ready()
{
  set_gpio_pin_mode(LED_1, GPIO_OUTPUT);
  run_after_delay(led_on_task, NULL, 100);
}

void led_on_task(void* args)
{
  // Pull Up
  set_gpio_pin_state(LED_1, 1);
  run_after_delay(led_off_task, NULL, 250);
}

void led_off_task(void* args)
{
  // Pull Down
  set_gpio_pin_state(LED_1, 0);
  run_after_delay(led_on_task, NULL, 750);
}

