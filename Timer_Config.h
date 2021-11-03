/*
 * Timer_Config.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */


/* Timer0 Mode Options
 * 1-TIMER0_NORMAL_MODE
 * 2-TIMER0_CTC_MODE
 * 3-TIMER0_PWM_PHASECORRECT_MODE
 * 4-TIMER0_PWM_FAST_MODE
 */
#define TIMER0_MODE		TIMER0_PWM_FAST_MODE

/*	Timer0 Prescaler Options
 * 1-TIMER0_NO_PRESCALER
 * 2-TIMER0_8_PRESCALER
 * 3-TIMER0_64_PRESCALER
 * 4-TIMER0_256_PRESCALER
 * 5-TIMER0_1024_PRESCALER
 * 6-TIMER0_EXTERNAL_SOURCE_FALLING
 * 7-TIMER0_EXTERNAL_SOURCE_RISING
 */
#define TIMER0_PRESCALER	TIMER0_1024_PRESCALER

#define TIMER0_PRELOAD      212
/* OC00 PIN MODE Options in CTC MODE
 * 1-OC0_PIN_DISCONNECTED
 * 2-OC0_PIN_TOGGLE
 * 3-OC0_PIN_CLEAR
 * 4-OC0_PIN_SET
 */
/* OC00 PIN MODE Options in PHASE CORRECT
 * 1-OC0_PIN_DISCONNECTED
 * 2-OC0_PIN_TOGGLE
 * 3-OC0_PIN_CLEAR
 * 4-OC0_PIN_SET
 */
/* OC00 PIN MODE Options in FAST MODE
 * 1-OC0_PIN_DISCONNECTED
 * 2-OC0_PIN_TOGGLE
 * 3-OC0_PIN_CLEAR
 * 4-OC0_PIN_SET
 */
#define OC0_PIN_MODE		OC0_PIN_DISCONNECTED
#define TIMER0_CTC			156


/*****************	TIMER 2		*****************/


/* Timer2 Mode Options
 * 1-TIMER2_NORMAL_MODE
 * 2-TIMER2_CTC_MODE
 * 3-TIMER2_PWM_PHASECORRECT_MODE
 * 4-TIMER2_PWM_FAST_MODE
 */
#define TIMER2_MODE		TIMER2_PWM_FAST_MODE

/*	Timer2 Prescaler Options
 * 1-TIMER2_NO_PRESCALER
 * 2-TIMER2_8_PRESCALER
 * 3-TIMER2_32_PRESCALER
 * 4-TIMER2_64_PRESCALER
 * 5-TIMER2_128_PRESCALER
 * 6-TIMER2_256_PRESCALER
 * 7-TIMER2_1024_PRESCALER
 */
#define TIMER2_PRESCALER	TIMER2_1024_PRESCALER
#define TIMER2_PRELOAD      212
/* OC20 PIN MODE Options in CTC MODE
 * 1-OC2_PIN_DISCONNECTED
 * 2-OC2_PIN_TOGGLE
 * 3-OC2_PIN_CLEAR
 * 4-OC2_PIN_SET
 */
/* OC20 PIN MODE Options in PHASE CORRECT
 * 1-OC2_PIN_DISCONNECTED
 * 2-OC2_PIN_TOGGLE
 * 3-OC2_PIN_CLEAR
 * 4-OC2_PIN_SET
 */
/* OC20 PIN MODE Options in FAST MODE
 * 1-OC2_PIN_DISCONNECTED
 * 2-OC2_PIN_TOGGLE
 * 3-OC2_PIN_CLEAR
 * 4-OC2_PIN_SET
 */

#define OC2_PIN_MODE		OC2_PIN_DISCONNECTED
#define TIMER2_CTC			156
