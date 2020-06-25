#ifndef		DIO_INTERFACE_H
#define     DIO_INTERFACE_H


#define PORTA		0
#define PORTB		1
#define PORTC		2
#define PORTD		3

#define PIN0			0
#define PIN1			1
#define PIN2			2
#define PIN3			3
#define PIN4			4
#define PIN5			5
#define PIN6			6
#define PIN7			7


#define	OUTPUT			1
#define INPUT	 	    0

#define	HIGH			1
#define LOW		        0

/*    FUNCTION TO SELECT DIRTION Of A PIN IN THE  port (is it input or out)   */
void DIO_VoidsetPinDirection(u8 u8_port_copy ,u8 u8_pin_copy,u8 u8_direction_copy);
/*    FUNCTION TO SELECT value Of A PIN IN THE  port (is it high or low)   */
void DIO_VoidsetPinValue(u8 u8_port_copy,u8 u8_pin_copy,u8 u8_value_copy);
/* function read value from input pin */
u8 DIO_u8GetPinValue(u8 u8_port_copy,u8 u8_pin_copy);

/*function set direction for all port in one step*/

void  DIO_VoidsetPortDirection(u8 u8_port_copy,u8 u8_direction_copy);
void  DIO_VoidsetPortValue(u8 u8_port_copy,u8 u8_value_copy);



#endif
