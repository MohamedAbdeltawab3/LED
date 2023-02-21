/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  LED_program.c  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *Author : Mohamed Abdel_tawab Farghal
 *Layer  : HAL
 *SWC    : LED
 *
 */
  #include "STD_TYPES.h"
 #include "BIT_MATH.h"


#include "DIO_interface.h"
#include "LED_Interface.h"


 void LED_voidInit ( u8 Copy_u8PORT , u8 Copy_u8PIN)
 {
     DIO_voidSetPinDirection( Copy_u8PORT , Copy_u8PIN,DIO_PIN_OUTPUT);

 }




  void LED_voidOn (u8 Copy_u8PORT , u8 Copy_u8PIN )
   {
       DIO_voidSetPinValue( Copy_u8PORT ,  Copy_u8PIN,DIO_PIN_HIGH);
        }





   void LED_voidOff ( u8 Copy_u8PORT , u8 Copy_u8PIN)
    {

        DIO_voidSetPinValue( Copy_u8PORT , Copy_u8PIN , DIO_PIN_LOW);
        }






     void LED_voidToggel ( u8 Copy_u8PORT , u8 Copy_u8PIN)
    {
      DIO_voidTogglePin(  Copy_u8PORT , Copy_u8PIN);
    }


    void LED_voidInitPort ( u8 Copy_u8PORT , u8 Copy_u8Direction)
    {

       DIO_voidPortDirection    ( Copy_u8PORT , Copy_u8Direction  );
    }


    void LED_voidPortValue (u8 Copy_u8PORT,u8 Copy_u8Value)
    {
    DIO_voidPortValue        ( Copy_u8PORT ,  Copy_u8Value     );
    }

