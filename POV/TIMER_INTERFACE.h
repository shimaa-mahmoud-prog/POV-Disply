/*
 * TIMER_INTERFACE.h
 *
 *  Created on: Feb 17, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

 /*														TCCR0	  															*/

#define								FOC0								7
#define								WGM00								6
#define								COM01								5
#define								COM00								4
#define								WGM01								3
#define								CS02								2
#define								CS01								1
#define								CS00								0
 /*														TIMSK	  															*/

#define								OCIE2								7
#define								TOIE2								6
#define								TICIE1								5
#define								OCIE1A								4
#define								OCIE1B								3
#define								TOIE1								2
#define								OCIE0								1
#define								TOIE0								0
   /*													TIFR	  															*/

#define								OCF2								7
#define								TOV2								6
#define								ICF1								5
#define								OCF1A								4
#define								OCF1B								3
#define								TOV1								2
#define								OCF0								1
#define								TOV0								0


   /*														TIMER0,2 MODES	  												*/

#define								NORMAL								0
#define								PWM_PHASE_CORRECT					1
#define								CTC						     		2
#define								FAST_PWM							3

   /*														TIMERS NUMBER	  												*/

#define								TIMER0								0
#define								TIMER1								1
#define								TIMER2					     		2

   /*														PRSCALLER (TIMER1,0)	  											*/

#define								EXTPRES_RISING						7
#define								EXTPRES_FALLING						6
#define								PRES_1024							5
#define								PRES_256							4
#define								PRES_64								3
#define								PRES_8								2
#define								PRES_1								1
#define								NO_CLOCK_SOURCE					    0
				/*										TIMER2										*/

#define								PRES_32								8
#define								PRES_128							9

   /*												   on_compar output signal  											*/

#define								oc_disconnect						0
#define								oc_NinIverted				     	1
#define								oc_inverted							2
#define								oc_toggle							3

   /*												   interruptOrpulling  											*/

#define								OFF									0
#define								ON							     	1



typedef struct{
	u8 prescaler:3;
	u8 mode_oc0:4;
	u8 foc0:1;

}TIMER0_CONTROL;

typedef struct{
	u8 TIMER_NUM:2;
	u8 mode:4;
	u8 prescaler:3;
	u8 oc_inverted_or_nonInverted:2;
	u8 OV_INTERRUPT:1;
	u8 OCR_INTERRUPT:1;


}TIM;

/*typedef struct
{
	u8 prescaler:3;
	u8 mode_oc0:4;
	u8 foc0:1;

}TIMER1_CONTROL;*/



/*#define  							TIMER0								((TIMER0_CONTROL *)0x53)
#define  							TIMER1A								((TIMER0_CONTROL *)0x53)
#define  							TIMER1B								((TIMER0_CONTROL *)0x53)*/


void TIMER_INIT(TIM TIMER);
u8 TIM0_U8_ReadTCNTReg(void);
void TIM_COUNTER_Void_OFF(u8 TIM_NUM);
void TIMER_Void_DutyCycle(u8 LOC_U8_Duty,TIM timer);
void TIM0_OV_callBack(void (*ptr)(void));
void TIM0_OCR_callBack(void (*ptr)(void));
void TIM1_OV_callBack(void (*ptr)(void));
void TIM1_OCRA_callBack(void (*ptr)(void));
void TIM1_OCRB_callBack(void (*ptr)(void));
void TIM1_ICU_callBack(void (*ptr)(void));
void TIM2_OV_callBack(void (*ptr)(void));
void TIM2_OCR_callBack(void (*ptr)(void));












#endif /* TIMER_INTERFACE_H_ */
