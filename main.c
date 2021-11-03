/*
 * main.c
 *
 *  Created on: Nov 3, 2021
 *      Author: Omar
 */


#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPES.h"
#include"EEPROM_Interface.h"
#include "System_Modes_Private.h"
#include "System_Modes_Interface.h"

int main(void){

	system_voidInit();

	while(1){
		switch (state)
		{
			case ON:
			{
				on_voidState();
				break;
			}
			case OFF:
			{
				off_voidState();
				break;
			}
			case SETTING:
			{
				set_voidState();
				break;
			}
			default :
			{
				//Nothing
				break;
			}
		}
	}

	return (0);
}


/******ON/OFF Button ISR********/

void __vector_18(void)  __attribute__((signal));
void __vector_18(void){
	if(state==OFF){
		state = ON;
		target_temp = EEPROM_voidRead_Data(0x0000);
	}
	else if (state==ON || state==SETTING){
		state = OFF;
	}
}

/****TIMER1_ISR (A) : It triggers the ISR every 100ms. So, it makes the temperature
measure flag equals one to enable the ADC to do the work.*****/

void __vector_6(void)  __attribute__((signal));
void __vector_6(void){
	sensor_flag = 1;
}

/*****TIMER1_ISR (B) : It triggers the ISR every 1 second. So, it toggles the
toggle flag for the LED and the Seven Segment. and counts to keep it in
ON_STATE if nothing is pressed during in ON or SETTING modes for 5 secs.
**********/

void __vector_19(void)  __attribute__((signal));
void __vector_19(void){
	if ((state==SETTING) || (state==ON)){
		setting_counter++;
		if(setting_counter % 4 == 0)
		{
			toggle_f ^= 1;
		}
		if (setting_counter > 20){

			// Write the new desired temperature in EEPROM
			state = ON;
		}
	}
}
