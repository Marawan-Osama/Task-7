/*
 * GccApplication1.c
 *
 * Created: 8/31/2020 1:12:44 AM
 * Author : PC
 */ 

#include "DIO.h"
#include "Registers.h"
#include "LED.h"
#include "Timer.h"

int main(void)
{
	uint8_t button;
	uint8_t Flag = 0;
	uint32_t On_delay = 300;
	uint32_t Off_delay = 500;
	uint8_t CTRL_state[4] = {0x01,0x00,0x00,0x00};
	DIO_init(CTRL_state);
	LED_init('A',0);
	Timer_init(0x00);
	LED_init('A',0);
	uint32_t Timer_config = 0x05;
	
    while (1) 
    {
		DIO_read('C',&button);
		while(button == 1){
			Timer_start(Timer_config);
			LED_change_state();
			Get_state(On_delay,&Flag);
			if(Flag != 0){				
				Flag = 0;				
				Set_point(0x00);		
				LED_off();
				Get_state(Off_delay,&Flag);
			}
			DIO_read('C',&button);
    }
	LED_off();
}
	}

