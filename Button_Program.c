/*
 * Button_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_Interface.h"
#include"GIE_Interface.h"
#include"EXTI_Interface.h"
#include"Button_Private.h"
#include"Button_Interface.h"
#include<util/delay.h>
void Buttons_voidInit(void)
{
	//Setting Input pins for the buttons
	DIO_u8SetPinDirection(SWITCH_Button,DIO_PORTB,PIN_INPUT);
	DIO_u8SetPinDirection(UP_Button,DIO_PORTB,PIN_INPUT);
	DIO_u8SetPinDirection(DOWN_Button,DIO_PORTB,PIN_INPUT);

	//Setting
	DIO_u8SetPinValue(SWITCH_Button,DIO_PORTB,PIN_HIGH);
	DIO_u8SetPinValue(UP_Button,DIO_PORTB,PIN_HIGH);
	DIO_u8SetPinValue(DOWN_Button,DIO_PORTB,PIN_HIGH);


	//External Interrupt Enable
	GIE_voidEnable();
	EXTI_voidINT2_Init();
}


u8 UP_button(void)
{
	if(!(GET_BIT(DIO_PORTB,UP_Button)))
	{
		_delay_ms(100);

		if(!(GET_BIT(DIO_PORTB,UP_Button)))
		{
			return PUSHED;
		}
		else
		{
			return NOT_PUSHED;
		}

	}
	else
	{
		return NOT_PUSHED;
	}
}
u8 down_button(void)
{
	if(!(GET_BIT(DIO_PORTB,DOWN_Button)))
		{
			_delay_ms(100);

			if(!(GET_BIT(DIO_PORTB,DOWN_Button)))
			{
				return PUSHED;
			}
			else
			{
				return NOT_PUSHED;
			}

		}
		else
		{
			return NOT_PUSHED;
		}
}
