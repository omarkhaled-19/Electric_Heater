/*
 * Timer_Private.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_


#define TIMSK		*((volatile u8*)0x59)

/*****************	TIMER 0		*****************/

#define	TCCR0		*((volatile u8*)0x53)
#define	TCNT0		*((volatile u8*)0x52)
#define	OCR0		*((volatile u8*)0x5C)

#define TIMER0_NORMAL_MODE				0
#define TIMER0_CTC_MODE					1
#define TIMER0_PWM_PHASECORRECT_MODE	2
#define TIMER0_PWM_FAST_MODE			3

/*
 * 3l4an bt3ml BITMASK l awl 3 BITS (0b11111000)
 */
#define TIMER0_BITMASK_PRESCALER 		0xf8
#define TIMER0_NO_PRESCALER 			1
#define TIMER0_8_PRESCALER 				2
#define TIMER0_64_PRESCALER				3
#define TIMER0_256_PRESCALER			4
#define TIMER0_1024_PRESCALER			5

#define TIMER0_EXTERNAL_SOURCE_FALLING	6
#define TIMER0_EXTERNAL_SOURCE_RISING	7

#define OC0_PIN_DISCONNECTED			0
#define OC0_PIN_TOGGLE					1
#define OC0_PIN_CLEAR					2
#define OC0_PIN_SET						3

/*****************	TIMER 2		*****************/

#define	TCCR2		*((volatile u8*)0x45)
#define	TCNT2		*((volatile u8*)0x44)
#define	OCR2		*((volatile u8*)0x43)

#define TIMER2_NORMAL_MODE				0
#define TIMER2_CTC_MODE					1
#define TIMER2_PWM_PHASECORRECT_MODE	2
#define TIMER2_PWM_FAST_MODE			3

/*
 * 3l4an bt3ml BITMASK l awl 3 BITS (0b11111000)
 */
#define TIMER2_BITMASK_PRESCALER 		0xf8
#define TIMER2_NO_PRESCALER 			1
#define TIMER2_8_PRESCALER 				2
#define TIMER2_32_PRESCALER				3
#define TIMER2_64_PRESCALER				4
#define TIMER2_128_PRESCALER			5

#define TIMER2_256_PRESCALER			6
#define TIMER2_1024_PRESCALER			7

#define OC2_PIN_DISCONNECTED			0
#define OC2_PIN_TOGGLE					1
#define OC2_PIN_CLEAR					2
#define OC2_PIN_SET						3

#endif /* TIMER_PRIVATE_H_ */
