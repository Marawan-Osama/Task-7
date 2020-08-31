/*
 * Timer.c
 *
 * Created: 8/31/2020 1:17:09 AM
 *  Author: PC
 */ 

#include "Registers.h"
#include "Timer.h"

void Timer_init(uint32_t Point){
	Time_point = Point;
}


void Timer_start(uint32_t prescaler){
	Prescaler = prescaler;
}


void Timer_stop(){
	Prescaler = 0;
}


void Set_point(uint32_t Point){
	Time_point = Point;
}


void Get_state(uint32_t goal ,uint8_t *flag){
	while(1){
		if(Time_point == 0xff || Time_point == goal){
			if(goal - Time_point > 0){
				Set_point(0);
				goal -= 256;
			}
			else{
				*flag = 1;
				break;
			}
		}
	}
}