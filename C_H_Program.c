/*
 * C_H_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_Interface.h"
#include"C_H_Private.h"
#include"C_H_Interface.h"

//Heating element initialization, starting, and stopping

void heat_voidInit(void)
{
	DIO_u8SetPinDirection(H_PIN,H_PORT,PIN_OUTPUT);
}
void heat_Start(void)
{
	DIO_u8SetPinValue(H_PIN,H_PORT,PIN_HIGH);
}
void heat_Stop(void)
{
	DIO_u8SetPinValue(H_PIN,H_PORT,PIN_LOW);
}


//Cooling element initialization, starting, and stopping
void cool_voidInit(void)
{
	DIO_u8SetPinDirection(C_PIN,C_PORT,PIN_OUTPUT);
}
void cool_Start(void)
{
	DIO_u8SetPinValue(C_PIN,C_PORT,PIN_HIGH);
}
void cool_Stop(void)
{
	DIO_u8SetPinValue(H_PIN,H_PORT,PIN_LOW);
}
