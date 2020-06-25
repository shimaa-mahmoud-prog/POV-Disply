/*
 * IR_SENSOR.h
 *
 *  Created on: Apr 19, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef IR_SENSOR_H_
#define IR_SENSOR_H_

#define                               IR_PORT                            PORTB
#define                               IR_PIN                             PORTB


void IR_Void_INIT(void);
u8 IR_u8_ReadIrOut(void);

#endif /* IR_SENSOR_H_ */
