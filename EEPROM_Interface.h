/*
 * EEPROM_Interface.h
 *
 *  Created on: Nov 2, 2021
 *      Author: Omar
 */

#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

#define EEPROM_PAGE0   0
#define EEPROM_PAGE1   1
#define EEPROM_PAGE2   2
#define EEPROM_PAGE3   3
#define EEPROM_PAGE4   4
#define EEPROM_PAGE5   5
#define EEPROM_PAGE6   6
#define EEPROM_PAGE7   7

void EEPROM_voidWrite_Data(u8 Copy_Location_Address, u8 Copy_u8Data);
u8 EEPROM_voidRead_Data(u8 Copy_Location_Address);

#endif /* EEPROM_INTERFACE_H_ */
