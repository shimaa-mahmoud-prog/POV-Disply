/*
 * APP.h
 *
 *  Created on: Apr 19, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef APP_H_
#define APP_H_

#define                            LED_PORT                         PORTA

void app_init(void);
void APP_MAIN (void);
void EXT_IR_Interrupt(void);
void TIM_OvInterrupt(void);
u8 print_word(u8 word_num);

#endif /* APP_H_ */
