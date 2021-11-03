/*
 * LED_Program.c
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#include<avr/io.h>
#include"BIT_MATH.h"
#include"LED_Private.h"
#include"LED_Interface.h"


void led_voidInit(void){

	// PIN 0 in the port is an output pin
	// the LED pin is initially off

	SET_BIT(DDRB,LED_PIN);
	CLR_BIT(PORTB,LED_PIN);

}

void led_voidOn(void){
	SET_BIT(PORTB,LED_PIN);
}

void led_voidOff(void){
	CLR_BIT(PORTB,LED_PIN);
}
