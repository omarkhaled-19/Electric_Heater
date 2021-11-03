/*
 * Timer_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include"Timer_Private.h"
#include"Timer_Config.h"

/*****************	TIMER 0		*****************/

void TIMER0_voidInit(void)
{

	/* Set Normal Mode */
#if TIMER0_MODE==TIMER0_NORMAL_MODE
	CLR_BIT(TCCR0,3);
	CLR_BIT(TCCR0,6);
	/* OVERFLOW INTERRUPT ENABLE */
	SET_BIT(TIMSK,0);
#elif TIMER0_MODE==TIMER0_CTC_MODE
	/* Set CTC Mode */
	CLR_BIT(TCCR0,6);
	SET_BIT(TCCR0,3);
	/* OVERFLOW INTERRUPT ENABLE */
	SET_BIT(TIMSK,1);

#elif TIMER0_MODE==TIMER0_PWM_PHASECORRECT_MODE
	/* Set PWM_PHASECORRECT Mode */
	CLR_BIT(TCCR0,3);
	SET_BIT(TCCR0,6);
	/* OVERFLOW INTERRUPT ENABLE */
	SET_BIT(TIMSK,1);
#elif TIMER0_MODE==TIMER0_PWM_FAST_MODE
	/* Set PWM_FAST Mode */
	SET_BIT(TCCR0,3);
	SET_BIT(TCCR0,6);

#else
	#error"You have error in set TIMER0 MODE"
#endif
/* Set Prescaler */
	TCCR0&=TIMER0_BITMASK_PRESCALER;
	TCCR0|=TIMER0_PRESCALER;
	/* OC0 PINMODE */
#if OC0_PIN_MODE==OC0_PIN_DISCONNECTED
	CLR_BIT(TCCR0,5);
	CLR_BIT(TCCR0,4);
#elif OC0_PIN_MODE==OC0_PIN_TOGGLE
	CLR_BIT(TCCR0,5);
	SET_BIT(TCCR0,4);

#elif OC0_PIN_MODE==OC0_PIN_CLEAR
	CLR_BIT(TCCR0,4);
	SET_BIT(TCCR0,5);
#elif OC0_PIN_MODE==OC0_PIN_SET
	CLR_BIT(TCCR0,5);
	SET_BIT(TCCR0,4);
#else
	#error"You have error in set TIMER0 MODE"
#endif
}

void TIMER0_voidSetPreloadValue(u8 Copy_u8Preload)
{
	TCNT0=Copy_u8Preload;
}

void TIMER0_voidSetCTCValue(u8 Copy_u8CTCValue)
{
	OCR0=Copy_u8CTCValue;
}

/*****************	TIMER 1		*****************/






/*****************	TIMER 2		*****************/


void TIMER2_voidInit(void)
{

	/* Set Normal Mode */
#if TIMER2_MODE==TIMER2_NORMAL_MODE
	CLR_BIT(TCCR2,3);
	CLR_BIT(TCCR2,6);
	/* OVERFLOW INTERRUPT ENABLE */
	SET_BIT(TIMSK,6);
#elif TIMER2_MODE==TIMER2_CTC_MODE
	/* Set CTC Mode */
	CLR_BIT(TCCR2,6);
	SET_BIT(TCCR2,3);
	/* OVERFLOW INTERRUPT ENABLE */
	SET_BIT(TIMSK,7);

#elif TIMER2_MODE==TIMER2_PWM_PHASECORRECT_MODE
	/* Set PWM_PHASECORRECT Mode */
	CLR_BIT(TCCR2,3);
	SET_BIT(TCCR2,6);
	/* OVERFLOW INTERRUPT ENABLE */
	SET_BIT(TIMSK,7);
#elif TIMER2_MODE==TIMER2_PWM_FAST_MODE
	/* Set PWM_FAST Mode */
	SET_BIT(TCCR2,3);
	SET_BIT(TCCR2,6);

#else
	#error"You have error in set TIMER2 MODE"
#endif
/* Set Prescaler */
	TCCR2&=TIMER2_BITMASK_PRESCALER;
	TCCR2|=TIMER2_PRESCALER;
	/* OC2 PINMODE */
#if OC2_PIN_MODE==OC2_PIN_DISCONNECTED
	CLR_BIT(TCCR2,4);
	CLR_BIT(TCCR2,5);
#elif OC2_PIN_MODE==OC2_PIN_TOGGLE
	SET_BIT(TCCR2,4);
	CLR_BIT(TCCR2,5);

#elif OC2_PIN_MODE==OC2_PIN_CLEAR
	CLR_BIT(TCCR2,4);
	SET_BIT(TCCR2,5);
#elif OC2_PIN_MODE==OC2_PIN_SET
	SET_BIT(TCCR2,4);
	SET_BIT(TCCR2,5);
#else
	#error"You have error in set TIMER2 MODE"
#endif
}

void TIMER2_voidSetPreloadValue(u8 Copy_u8Preload)
{
	TCNT2=Copy_u8Preload;
}

void TIMER2_voidSetCTCValue(u8 Copy_u8CTCValue)
{
	OCR2=Copy_u8CTCValue;
}

