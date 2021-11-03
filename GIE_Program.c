/*
 * GIE_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GIE_Private.h"


void GIE_voidEnable(void)
{
	/*Enable Global interrupt */
	SET_BIT(SREG,7);
}
void GIE_voidDisable(void)
{
	/*Disable Global interrupt */
	CLR_BIT(SREG,7);
}
