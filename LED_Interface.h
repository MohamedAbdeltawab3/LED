/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  LED_interface.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *Author : Mohamed Abdel_tawab Farghal
 *Layer  : HAL
 *SWC    : LED
 *
 */

#include "STD_TYPES.h"

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_




void LED_voidInit      ( u8 Copy_u8PORT , u8 Copy_u8PIN);
void LED_voidOn        (u8 Copy_u8PORT , u8 Copy_u8PIN );
void LED_voidOff       ( u8 Copy_u8PORT , u8 Copy_u8PIN);
void LED_voidToggel    ( u8 Copy_u8PORT , u8 Copy_u8PIN);
void LED_voidPortValue (u8 Copy_u8PORT,u8 Copy_u8Value );
void LED_voidInitPort  ( u8 Copy_u8PORT , u8 Copy_u8Direction);



#endif /*  LED_INTERFACE_H_  */
