#include "juma_sdk_api.h"

void on_ready()
{
    ble_device_set_name("Template");
    ble_device_set_advertising_interval(200);
    ble_device_start_advertising();
}

void ble_device_on_message(uint8_t type, uint16_t length, uint8_t* value)
{
    ble_device_send(type, length, value);
}

void ble_device_on_disconnect(uint8_t reason)
{
    ble_device_start_advertising();
}
