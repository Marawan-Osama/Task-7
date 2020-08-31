/*
 * Registers.h
 *
 * Created: 8/31/2020 1:13:15 AM
 *  Author: PC
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_


typedef unsigned char uint8_t;
typedef unsigned int uint32_t;


#define PA_DATA	(*(volatile uint8_t *)0x3B)
#define PA_CTRL	(*(volatile uint8_t *)0x3A)
#define PA_STAT (*(volatile uint8_t	*)0x39)



#define PB_DATA	(*(volatile uint8_t *)0x38)
#define PB_CTRL	(*(volatile uint8_t *)0x37)
#define PB_STAT (*(volatile uint8_t	*)0x36)


#define PC_DATA	(*(volatile uint8_t *)0x35)
#define PC_CTRL	(*(volatile uint8_t *)0x34)
#define PC_STAT (*(volatile uint8_t	*)0x33)



#define PD_DATA	(*(volatile uint8_t *)0x32)
#define PD_CTRL	(*(volatile uint8_t *)0x31)
#define PD_STAT (*(volatile uint8_t	*)0x30)


#define Prescaler (*(volatile uint8_t *)0x53)
#define Time_point (*(volatile uint8_t *)0x52)




#endif /* REGISTERS_H_ */