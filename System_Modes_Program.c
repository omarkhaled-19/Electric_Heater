/*
 * System_Modes_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */


#include <avr/io.h>
#include <util/delay.h>
#include "System_Modes_Config.h"
#include "System_Modes_Interface.h"
#include "STD_TYPES.h"
#include"BIT_MATH.h"
#include "ADC_Interface.h"
#include "Button_Interface.h"
#include "C_H_Interface.h"
#include "EEPROM_Interface.h"
#include "LED_Interface.h"
#include "SevenSegment_Interface.h"
#include "Timer_Interface.h"



void system_voidInit(void)
{
	ADC_voidInit();
	Buttons_voidInit();
	cool_voidInit();
	heat_voidInit();
	led_voidInit();
	SevenSegment_voidInit();
	TIMER0_voidInit();
	TIMER2_voidInit();


	state = OFF;

	if(EEPROM_voidRead_Data(0x0000) != 0xFF)
	{
			target_temp = EEPROM_voidRead_Data(0x0000);
	}
	else
	{
			target_temp = INIT_TEMP;
	}

	temp_arr_voidInit();


	EEPROM_voidWrite_Data(0x0000,target_temp);
}

void on_voidState(void)
{
	if(sensor_flag == 1)
	{
		current_temp = (ADC_u16StartConversion(1)/10);
		add_voidNew_Temp(temp_arr, current_temp);
		avg_temp = calc_u16Avg_Temp(temp_arr);
		sensor_flag = 0;
	}

	SevenSegment_write(current_temp);

	change_voidTemp();
	if(UP_button() == PUSHED || down_button() == PUSHED)
	{
		SevenSegment_disable();
		setting_counter = 0;
		state = SETTING;
	}
}

void off_voidState(void)
{
	SevenSegment_turn_off();
	led_voidOff();
	heat_Stop();
	cool_Stop();
	//sleep_voidCommand();
}

void set_voidState(void)
{
	heat_Stop();
	cool_Stop();
	led_voidOff();

	if(toggle_f == 1){
			SevenSegment_write(target_temp);
		}
		else{
			SevenSegment_turn_off();
		}

	if((UP_button() == PUSHED) && (target_temp < MAX_TEMP)){
			current_temp += 5;
			setting_counter = 0;
			SevenSegment_write(target_temp);
		}
	else if ((down_button() == PUSHED) && (target_temp > MIN_TEMP)){
			current_temp -= 5;
			setting_counter = 0;
			SevenSegment_write(target_temp);
		}
	EEPROM_voidWrite_Data(0x0000,target_temp);
}

void change_voidTemp(void)
{
	if( (target_temp < avg_temp + TEMP_CHANGE) && (target_temp > avg_temp - TEMP_CHANGE) )
	{
			// Current Temperature equals Target Temperature
			// No need for Heating or Cooling
			heat_Stop();
			cool_Stop();
			led_voidOff();
		}
		else if(target_temp < avg_temp + TEMP_CHANGE){
			// Current Temperature is Larger
			// we need the Cooling element

			heat_Stop();
			cool_Start();
			led_voidOn();
		}
		else if (target_temp > avg_temp - TEMP_CHANGE)
		{
			// Current Temperature is Smaller
			// Heating element needed

			heat_Start();
			cool_Stop();
			if (toggle_f == 1)
			{
				led_voidOn();
			}
			else {
				led_voidOff();
			}
		}
}

void add_voidNew_Temp(u16 * arr , u16 new_val)
{
	arr[arr_counter] = new_val;
		arr_counter++;

		if (arr_counter == 10){
			arr_counter = 0;
		}
}

u16 calc_u16Avg_Temp(u16 * arr)
{
	u16 sum =0;
	u16 avg = 0;

	for(u8 i =0; i<TEMP_MEASURES;i++)
	{
		sum+=arr[i];
	}

	avg = sum/TEMP_MEASURES;
	return avg;
}

void temp_arr_voidInit(void)
{
	u16 first_temp = ADC_u16StartConversion(1)/10;

		for (u8 i = 0; i<TEMP_MEASURES; i++){
			temp_arr[i]= first_temp;
		}

		avg_temp = calc_u16Avg_Temp(temp_arr);
		arr_counter = 0;
}

void sleep_voidCommand(void)
{

}
