/*
 * Timer.h
 *
 * Created: 8/31/2020 1:31:47 AM
 *  Author: PC
 */ 


#ifndef TIMER_H_
#define TIMER_H_


void Timer_init(uint32_t Point);


void Timer_start(uint32_t prescaler);


void Timer_stop();


void Set_point(uint32_t Point);


void Get_state(uint32_t goal ,uint8_t *flag);



#endif /* TIMER_H_ */