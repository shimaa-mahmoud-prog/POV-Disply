/*
 * led_interface.h
 *
 *  Created on: Jan 31, 2020
 *      Author: Shimaa El-Debeky
 */


#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

void LED_VID_PinInit(u8 copy_u8_port,u8 copy_u8_pin);
void LEDS_VOID_PortValue(u8 copy_u8_port,u8 value);
void LEDS_void_PortINIT(u8 copy_u8_port);
void LED_ON(u8 u8_port_copy ,u8 u8_pin_copy);

void LED_OFF(u8 u8_port_copy ,u8 u8_pin_copy);

void LED_TOGGLE(u8 u8_port_copy ,u8 u8_pin_copy);

#endif
