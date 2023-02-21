/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  DIO_program.c  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *Author : Mohamed Abdel_tawab Farghal
 *Layer  : MCAL
 *SWC    : DIO/GPIO
 *
 */

 #include "STD_TYPES.h"
 #include "BIT_MATH.h"

#include "DIO_private.h"
#include "DIO_interface.h"

 #include "DIO_config.h"

void DIO_voidSetPinDirection  (u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Direction)
 {
 if(Copy_u8PORT<=DIO_PORTD&&Copy_u8PIN<=DIO_PIN7)
    {
     if(Copy_u8Direction==DIO_PIN_OUTPUT)
     {
        switch(Copy_u8PORT)
        {
         case DIO_PORTA : SET_BIT(DDRA,Copy_u8PIN);break;
         case DIO_PORTB : SET_BIT(DDRB,Copy_u8PIN);break;
         case DIO_PORTC : SET_BIT(DDRC,Copy_u8PIN);break;
         case DIO_PORTD : SET_BIT(DDRD,Copy_u8PIN);break;
        }

     }
    else if(Copy_u8Direction==DIO_PIN_INPUT)
     {
      switch(Copy_u8PORT)
        {
         case DIO_PORTA : CLR_BIT(DDRA,Copy_u8PIN);break;
         case DIO_PORTB : CLR_BIT(DDRB,Copy_u8PIN);break;
         case DIO_PORTC : CLR_BIT(DDRC,Copy_u8PIN);break;
         case DIO_PORTD : CLR_BIT(DDRD,Copy_u8PIN);break;
        }
     }
    }
 }



void DIO_voidSetPinValue      (u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Value    )
 {
    if(Copy_u8PORT<=DIO_PORTD&&Copy_u8PIN<=DIO_PIN7)
    {

     if(Copy_u8Value==DIO_PIN_HIGH)
     {
        switch(Copy_u8PORT)
        {
         case DIO_PORTA : SET_BIT(PORTA,Copy_u8PIN);break;
         case DIO_PORTB : SET_BIT(PORTB,Copy_u8PIN);break;
         case DIO_PORTC : SET_BIT(PORTC,Copy_u8PIN);break;
         case DIO_PORTD : SET_BIT(PORTD,Copy_u8PIN);break;
        }

     }
    else if(Copy_u8Value==DIO_PIN_LOW)
     {
      switch(Copy_u8PORT)
        {
         case DIO_PORTA : CLR_BIT(PORTA,Copy_u8PIN);break;
         case DIO_PORTB : CLR_BIT(PORTB,Copy_u8PIN);break;
         case DIO_PORTC : CLR_BIT(PORTC,Copy_u8PIN);break;
         case DIO_PORTD : CLR_BIT(PORTD,Copy_u8PIN);break;
        }
      }
    }
 }





 u8   DIO_voidGetPinValue      (u8 Copy_u8PORT , u8 Copy_u8PIN                      )
 {
     u8 LOC_u8status=0;
      switch(Copy_u8PORT)
        {
         case DIO_PORTA :  LOC_u8status=GET_BIT(PINA,Copy_u8PIN);break;
         case DIO_PORTB :  LOC_u8status=GET_BIT(PINB,Copy_u8PIN);break;
         case DIO_PORTC :  LOC_u8status=GET_BIT(PINC,Copy_u8PIN);break;
         case DIO_PORTD :  LOC_u8status=GET_BIT(PIND,Copy_u8PIN);break;
        }
    return  LOC_u8status;

 }



 void DIO_voidTogglePin        (u8 Copy_u8PORT , u8 Copy_u8PIN     )
 {
     if(Copy_u8PIN<=DIO_PIN7)
    {
       switch(Copy_u8PORT)
        {
         case DIO_PORTA : TOG_BIT(PORTA,Copy_u8PIN);break;
         case DIO_PORTB : TOG_BIT(PORTB,Copy_u8PIN);break;
         case DIO_PORTC : TOG_BIT(PORTC,Copy_u8PIN);break;
         case DIO_PORTD : TOG_BIT(PORTD,Copy_u8PIN);break;
        }

    }

 }



 void DIO_voidPortDirection        (u8 Copy_u8PORT , u8 Copy_u8Direction     )
 {

   
    
      switch(Copy_u8PORT)
        {
         case DIO_PORTA : DDRA = Copy_u8Direction ;break;
         case DIO_PORTB : DDRA = Copy_u8Direction ;break;
         case DIO_PORTC : DDRA = Copy_u8Direction ;break;
         case DIO_PORTD : DDRA = Copy_u8Direction ;break;
        }
 }


 void DIO_voidPortValue        (u8 Copy_u8PORT , u8 Copy_u8Value     )
 {

    
      switch(Copy_u8PORT)
        {
         case DIO_PORTA : PORTA = Copy_u8Value ;break;
         case DIO_PORTB : PORTA = Copy_u8Value ;break;
         case DIO_PORTC : PORTA = Copy_u8Value ;break;
         case DIO_PORTD : PORTA = Copy_u8Value ;break;

        }
    }
 



 u8 DIO_voidGetPortValue      (u8 Copy_u8PORT    )
 {
	 
        u8 LOC_u8status=0;
    if(Copy_u8PORT<=DIO_PORTD)
    {

      switch(Copy_u8PORT)
        {
         case DIO_PORTA : LOC_u8status=PINA;  break;
         case DIO_PORTB : LOC_u8status=PINB;  break;
         case DIO_PORTC : LOC_u8status=PINC;  break;
         case DIO_PORTD : LOC_u8status=PIND;  break;
        }
    }
    return LOC_u8status;
 }



  void DIO_voidTogglePortValue        (u8 Copy_u8PORT         )
 {

    if( Copy_u8PORT<=DIO_PORTD)
    {
      switch(Copy_u8PORT)
        {
         case DIO_PORTA : PORTA = ~PORTA ;break;
         case DIO_PORTB : PORTB = ~PORTB ;break;
         case DIO_PORTC : PORTC = ~PORTC ;break;
         case DIO_PORTD : PORTD = ~PORTD ;break;
        }
    }
 }

