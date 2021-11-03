/*
 * SevenSegment_Program.c
 *
 *  Created on: Oct 30, 2021
 *      Author: Omar
 */

#include<avr/io.h>
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"SevenSegments_Private.h"
#include"SevenSegment_Interface.h"
#include<util/delay.h>

void SevenSegment_voidInit(void){
// setting Seven Segment Pins as output pins
	DISPLAY_PORT_DIR  = 0xff;
	SET_BIT(ENABLE_DISPLAY_DIR,DISPLAY1_ENABLE_PIN);
	SET_BIT(ENABLE_DISPLAY_DIR,DISPLAY2_ENABLE_PIN);

	// Seven Segment initially OFF
	SevenSegment_disable();
}

void SevenSegment_send(u16 Copy_u16Number)
{
	DISPLAY_DATA  = arr[Copy_u16Number];
}

void SevenSegment_enable(u8 en)
{
	if(en ==1)
	{
		SET_BIT(ENABLE_DISPLAY_PORT,DISPLAY1_ENABLE_PIN);
		CLR_BIT(ENABLE_DISPLAY_PORT,DISPLAY2_ENABLE_PIN);
	}
	else if(en==2)
	{
		SET_BIT(ENABLE_DISPLAY_PORT,DISPLAY2_ENABLE_PIN);
		CLR_BIT(ENABLE_DISPLAY_PORT,DISPLAY1_ENABLE_PIN);
	}
}

void SevenSegment_disable(void)
{
	CLR_BIT(ENABLE_DISPLAY_PORT,DISPLAY1_ENABLE_PIN);
	CLR_BIT(ENABLE_DISPLAY_PORT,DISPLAY2_ENABLE_PIN);
}

void SevenSegment_turn_off(void)
{

}

void SevenSegment_write(u16 Copy_u16Number)
{
	u8 right;
	u8 left;

	right = Copy_u16Number%10;
	left = (int)Copy_u16Number/10;

	SevenSegment_enable(DISPLAY1);
	SevenSegment_send(right);

	_delay_ms(5);
	SevenSegment_enable(DISPLAY2);
	SevenSegment_send(left);
	_delay_ms(5);

}
