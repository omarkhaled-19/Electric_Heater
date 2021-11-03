/*
 * Sevensegments_Private.h
 *
 *  Created on: Oct 31, 2021
 *      Author: Omar
 */

#ifndef SEVENSEGMENTS_PRIVATE_H_
#define SEVENSEGMENTS_PRIVATE_H_

#define DISPLAY1 1
#define DISPLAY2 2

#define ENABLE_DISPLAY_DIR DDRB     //SSD_ENABLE_PORT_DIR
#define ENABLE_DISPLAY_PORT PORTB   //SSD_ENABLE_PORT
#define DISPLAY1_ENABLE_PIN 6       //SSD1_ENABLE_PIN
#define DISPLAY2_ENABLE_PIN 7       //SSD2_ENABLE_PIN
#define DISPLAY_DATA PORTD          //SSD_DATA
#define DISPLAY_PORT_DIR DDRD       //SSD_PORT_DIR

u8 arr[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

#endif /* SEVENSEGMENTS_PRIVATE_H_ */
