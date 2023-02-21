/*
 * app.c
 *
 *  Created on: Feb 16, 2023
 *  Author    : Mohamed Abdel_tawab Farghal
 */
#define F_CPU 8000000UL
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "util/delay.h"

#include "DIO_interface.h"

#include "LED_Interface.h"

#include "app.h"

void LED_voidflash(u8 Copy_u8PORT)
 {
	LED_voidPortValue ( Copy_u8PORT, 0xff );
	_delay_ms(1000);
	LED_voidPortValue ( Copy_u8PORT, 0x00 );
	_delay_ms(1000);
}



void LED_voidS_Left(u8 Copy_u8PORT)
{
	u8 i;
	for( i=0;i<8;i++ ){
		LED_voidOn        ( Copy_u8PORT , i );
		_delay_ms(250);
		LED_voidOff       (  Copy_u8PORT , i);
		_delay_ms(250);
	}
}


void LED_voidS_Right(u8 Copy_u8PORT)
{
	u8 i;
	for( i=8;i>0;i--){
		LED_voidOn        ( Copy_u8PORT , i-1 );
		_delay_ms(250);
		LED_voidOff       (  Copy_u8PORT , i-1);
		_delay_ms(250);
	}
}

void LED_voidPing_pong(u8 Copy_u8PORT)
{
	//LED_8
	u8 i;
	for( i=0;i<8;i++ ){
		LED_voidOn        ( Copy_u8PORT , i );
		_delay_ms(250);
		LED_voidOff  ( Copy_u8PORT , i );
		_delay_ms(250);
	}
	for( i;i>0;i-- ){
		
		LED_voidOn        ( Copy_u8PORT , i );
		_delay_ms(250);
		LED_voidOff  ( Copy_u8PORT , i );
		_delay_ms(250);
	}
}

void LED_voidConverge(u8 Copy_u8PORT)
{
	u8 i;
	for( i=0;i<8;i++ )
	{
		_delay_ms(250);
		LED_voidOn        ( Copy_u8PORT ,7-i );
		LED_voidOn        ( Copy_u8PORT ,0+i );
		_delay_ms(250);
	}
	LED_voidPortValue (Copy_u8PORT,0x00 );
}

void LED_voidDiverge(u8 Copy_u8PORT)
{
	u8 i;
	for( i=0;i<5;i++ )
	{
		_delay_ms(250);
		LED_voidOn        ( Copy_u8PORT ,3-i );
		LED_voidOn        ( Copy_u8PORT ,4+i );
		_delay_ms(250);
		/*LED_voidOff       ( Copy_u8PORT ,3-i );
		LED_voidOff        ( Copy_u8PORT ,4+i );
		_delay_ms(250); */
	}
	LED_voidPortValue (Copy_u8PORT,0x00 );
}

void LED_voidConverge_Div(u8 Copy_u8PORT)
{
	u8 i;
	for( i=0;i<8;i++ )
	{
		_delay_ms(250);
		LED_voidOn        ( Copy_u8PORT ,7-i );
		LED_voidOn        ( Copy_u8PORT ,0+i );
		_delay_ms(250);
	}
	LED_voidPortValue (Copy_u8PORT,0x00 );
	
	for( i=0;i<5;i++ )
	{
		_delay_ms(250);
		LED_voidOn        ( Copy_u8PORT ,3-i );
		LED_voidOn        ( Copy_u8PORT ,4+i );
		_delay_ms(250);
		/*LED_voidOff       ( Copy_u8PORT ,3-i );
		LED_voidOff        ( Copy_u8PORT ,4+i ); */
		_delay_ms(250);
	}
	LED_voidPortValue (Copy_u8PORT,0x00 );
}


void LED_voidSnake(u8 Copy_u8PORT)
{
	u8 i;
	for( i=0;i<8;i++ ){
		LED_voidOn        ( Copy_u8PORT , i );
		_delay_ms(250);	
	}
	LED_voidPortValue ( Copy_u8PORT,0x00 );
	
	 for( i=8;i>0;i-- ){
		LED_voidOn   ( Copy_u8PORT , i-1 );
		_delay_ms(250);
      }
	  LED_voidPortValue ( Copy_u8PORT,0x00 );
}







