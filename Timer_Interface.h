/*
 * Timer_interface.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_


void TIMER0_voidInit(void);
void TIMER0_voidSetPreloadValue(u8 Copy_u8Preload);
void TIMER0_voidSetCTCValue(u8 Copy_u8CTCValue);



void TIMER2_voidInit(void);
void TIMER2_voidSetPreloadValue(u8 Copy_u8Preload);
void TIMER2_voidSetCTCValue(u8 Copy_u8CTCValue);


#endif /* TIMER_INTERFACE_H_ */
