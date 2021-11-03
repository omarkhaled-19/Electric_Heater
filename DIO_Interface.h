/*
 * DIO_Interface.h
 *
 *  Created on: Oct 30, 2021
 *      Author: Omar
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_



#define PIN_INPUT  0
#define PIN_OUTPUT 1

#define PORT_INPUT   0
#define PORT_OUTPUT 255

#define DIO_PORTA  0
#define DIO_PORTB  1
#define DIO_PORTC  2
#define DIO_PORTD  3

#define PIN_HIGH   1
#define PIN_LOW    0

#define PORT_HIGH   1
#define PORT_LOW    0

enum{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
};

u8 DIO_u8SetPinDirection(u8 Copy_u8PinNumber,u8 Copy_u8PortNumber,u8 Copy_u8PinDirection);
u8 DIO_u8SetPinValue(u8 Copy_u8PinNumber,u8 Copy_u8PortNumber,u8 Copy_u8PinValue);

u8 DIO_u8GetPinValue(u8 Copy_u8PinNumber,u8 Copy_u8PortNumber,u8* Copy_u8PinValue);
u8 DIO_u8TogglePinValue(u8 Copy_u8PinNumber,u8 Copy_u8PortNumber);

u8 DIO_u8SetPortDirection(u8 Copy_u8PortNumber,u8 Copy_u8PortDirection);
u8 DIO_u8SetPortValue(u8 Copy_u8PortNumber,u8 Copy_u8PortValue);

#endif /* DIO_INTERFACE_H_ */
