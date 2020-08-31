/*
 * LED.h
 *
 * Created: 8/24/2020 4:48:36 AM
 *  Author: PC
 */ 
#include "DIO.h"


#ifndef LED_H_
#define LED_H_


typedef unsigned char uint8_t;

uint8_t LED_state; 
uint8_t LED_port; 
uint8_t LED_pin; 


void LED_init(uint8_t port, uint8_t pin);


void LED_off();


void LED_on();


void LED_toggle();


#endif /* LED_H_ */