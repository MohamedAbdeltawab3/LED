/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  DIO_interface.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *Author : Mohamed Abdel_tawab Farghal
 *Layer  : MCAL
 *SWC    : DIO/GPIO
 *
 */




#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_


#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW  0

#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT  0

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

void DIO_voidSetPinDirection  (u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Direction);
void DIO_voidSetPinValue      (u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Value    );
u8   DIO_voidGetPinValue      (u8 Copy_u8PORT , u8 Copy_u8PIN                      );
void DIO_voidTogglePin        (u8 Copy_u8PORT , u8 Copy_u8PIN                      );
u8 DIO_voidGetPortValue       (u8 Copy_u8PORT                                      );
void DIO_voidTogglePortValue  (u8 Copy_u8PORT                                      );
void DIO_voidPortDirection    (u8 Copy_u8PORT , u8 Copy_u8Direction                );
void DIO_voidPortValue        (u8 Copy_u8PORT , u8 Copy_u8Value                    );

 #endif /*  _DIO_INTERFACE_H_ */
