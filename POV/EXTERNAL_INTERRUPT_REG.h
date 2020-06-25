/*
 * EXTERNAL_INTERRUPT_REG.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef EXTERNAL_INTERRUPT_REG_H_
#define EXTERNAL_INTERRUPT_REG_H_

#define 		 SREG				*((volatile u8*) 0X5F)
#define 		 GICR				*((volatile u8*) 0X5B)
#define 		 MCUCR				*((volatile u8*) 0X55)
#define 		 MCUCSR				*((volatile u8*) 0X54)
#define			 GIFR				*((volatile u8*) 0x5A)

#endif /* EXTERNAL_INTERRUPT_REG_H_ */
