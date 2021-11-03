/*
 * SevenSegment_Interface.h
 *
 *  Created on: Oct 30, 2021
 *      Author: Omar
 */

#ifndef SEVENSEGMENT_INTERFACE_H_
#define SEVENSEGMENT_INTERFACE_H_

void SevenSegment_voidInit(void);
/*
	Function Name        : SevenSegment_send
	Function Returns     : void
	Function Arguments   : uint16_t
	Function Description : To Upload data (Number) to the Seven Segment.
*/
void SevenSegment_send(u16 Copy_u16Number);
/*
	Function Name        : SevenSegment_enable
	Function Returns     : void
	Function Arguments   : uint8_t
	Function Description : the 2 seven seg. are multiplexed and works with the same pins.
						   So, this function is to enable one and disable the other.
*/
void SevenSegment_enable(u8 en);
/*
	Function Name        : SevenSegment_disable
	Function Returns     : void
	Function Arguments   : void
	Function Description : To disable the two seven segments for some special cases.
*/
void SevenSegment_disable(void);
/*
	Function Name        : SevenSegment_turn_off
	Function Returns     : void
	Function Arguments   : void
	Function Description : To turn off the Seven Segment in the OFF STATE.
*/
void SevenSegment_turn_off(void);
/*
	Function Name        : SevenSegment_write
	Function Returns     : void
	Function Arguments   : uint16_t
	Function Description : To calculate what to write on each of the two SevenSegments, and send.
*/
void SevenSegment_write(u16 Copy_u16Number);


#endif /* SEVENSEGMENT_INTERFACE_H_ */
