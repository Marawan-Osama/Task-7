/*
 * LED.c
 *
 * Created: 8/24/2020 4:47:39 AM
 *  Author: PC
 */ 

#include "LED.h"


void LED_init(uint8_t port, uint8_t pin){
	LED_port = port;
	LED_pin = pin;
	LED_off();
}


void LED_off(){
	DIO_write(LED_port,0);
	LED_state = 0;
}


void LED_on(){
	DIO_write(LED_port,1<<LED_pin);
	LED_state = 1;
}


void LED_change_state(){
	if(LED_state == 1){
		LED_off();
		}
		else{
		LED_on();
	}
}


uint8_t get_LED_state(){
	return LED_state;
}