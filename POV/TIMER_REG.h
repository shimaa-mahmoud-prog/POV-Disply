/*
 * TIMER_REG.h
 *
 *  Created on: Feb 17, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef TIMER_REG_H_
#define TIMER_REG_H_

#define						 TCCR0							*((volatile u8*)0x53)
#define						 TCNT0							*((volatile u8*)0x52)
#define						 OCR0							*((volatile u8*)0x5C)
#define						 TIMSK							*((volatile u8*)0x59)
#define						 TIFR							*((volatile u8*)0x58)
#define 					 SREG							*((volatile u8*) 0X5F)
#define						 TCCR1A							*((volatile u8*)0x4F)
#define						 TCCR1B							*((volatile u8*)0x4E)
#define						 TCNT1L							*((volatile u16*)0x4C)
#define						 OCR1AL							*((volatile u16*)0x4A)
#define						 OCR1BL							*((volatile u16*)0x48)
#define 					 ICR1L							*((volatile u8*) 0X46)
#define 					 ICR1H							*((volatile u8*) 0X47)

/* 							timer2     											*/
#define 					 TCCR2							*((volatile u8*) 0X45)
#define 					 TCNT2							*((volatile u8*) 0X44)
#define 					 OCR2							*((volatile u8*) 0X43)



#endif /* TIMER_REG_H_ */
