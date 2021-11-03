/*
 * System_Modes_Interface.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#ifndef SYSTEM_MODES_INTERFACE_H_
#define SYSTEM_MODES_INTERFACE_H_

#include"STD_TYPES.h"
#include"System_Modes_Config.h"

#define OFF 0
#define ON 1
#define SETTING 2

u8 state;
u16 temp_arr[TEMP_MEASURES];
u16 target_temp;
u16 current_temp;
u16 avg_temp;

u8 sensor_flag;
u8 temp_measure_counter;
u8 setting_counter;

u16 toggle_f;
u8 arr_counter;

void system_voidInit(void);

void on_voidState(void);

void off_voidState(void);

void set_voidState(void);

void change_voidTemp(void);

void add_voidNew_Temp(u16 *arr , u16 new_val);

u16 calc_u16Avg_Temp(u16 * arr);

void temp_arr_voidInit(void);

void sleep_voidCommand(void);

#endif /* SYSTEM_MODES_INTERFACE_H_ */
