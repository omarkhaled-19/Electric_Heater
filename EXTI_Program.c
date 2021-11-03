/*
 * EXTI_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */


#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"EXTI_Private.h"

void EXTI_voidINT0_Init(void)
{
	/*select Sense Control (Falling edge)*/
	SET_BIT(MCUCR,1);
	CLR_BIT(MCUCR,0);
	/*Enable PIE INT0*/
	SET_BIT(GICR,6);
}
void EXTI_voidINT1_Init(void)
{
	/*select Sense Control (Rising edge)*/
	SET_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	/*Enable PIE INT1*/
	SET_BIT(GICR,7);

}
void EXTI_voidINT2_Init(void)
{
	/*select Sense Control (Rising edge)*/
	SET_BIT(MCUCSR,6);
	/*Enable PIE INT2*/
	SET_BIT(GICR,5);
}
