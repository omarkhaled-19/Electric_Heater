/*
 * EEPROM_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include<util/delay.h>
#include"GIE_Private.h"
#include"EEPROM_Private.h"


void EEPROM_voidWrite_Data(u8 Copy_Location_Address, u8 Copy_u8Data)
{
		u8 flag = 0;

		//Address initiation
		EEARL = Copy_Location_Address;
		//EEARH = (Copy_Location_Address>>8);

		//Fill Data
		EEDR = Copy_u8Data;

		// Disable Interrupt
		if(((SREG&(1<<7))>>7)==1){
			flag = 1;
			CLR_BIT(SREG,7);
			}

		//Write Operation
		SET_BIT(EECR,2);
		SET_BIT(EECR,1);

		//Enable Interrupt
		if (flag==1)
			{
				SET_BIT(SREG,7);
			}
		//Delay until the write cycle is finished
		_delay_ms(10);
}


u8 EEPROM_voidRead_Data(u8 Copy_Location_Address)
{
	EEARL = Copy_Location_Address;
	//EEARH = (Copy_Location_Address>>8);

	//Enable Read Operation
	SET_BIT(EECR,0);

	return EEDR;
}
