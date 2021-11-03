/*
 * Button_Interface.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_

#include"Button_Private.h"


void Buttons_voidInit(void);
void SWITCH_EXTI(void);

u8 UP_button(void);
u8 down_button(void);


#endif /* BUTTON_INTERFACE_H_ */
