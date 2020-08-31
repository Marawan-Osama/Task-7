/*
 * DIO.h
 *
 * Created: 8/24/2020 3:44:30 AM
 *  Author: PC
 */ 


#ifndef DIO_H_
#define DIO_H_


typedef unsigned char uint8_t;


void DIO_init(uint8_t CTRL_state[4]);


void DIO_read(uint8_t port, uint8_t* read_info);


void DIO_write(uint8_t port, uint8_t data);


#endif /* DIO_H_ */