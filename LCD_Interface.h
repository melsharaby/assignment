/* INCLUDE THE LIBRARIES */
#include " STD_TYPES.h"
#include "BIT_MATHS.h"

/* DIO LAYER FROM MCAL INCLUDED */

#include "DIO_Interface.h"
#include "DIO_Private.h"
 


/* guard */
#ifndef _LCD_INTERFACE_H
#define _LCD_INTERFACE_H


/* details about lcd to ease the readability */
#define   PORT_DATA   PORTA
#define   PORT_CTRL   PORTB

/*
1-enable pin in lcd , connected on pin 3 

2-Reg. slelect ( RS ) in LCD , connected on pin 1 

3- Read and Write Pin in LCD , connected on pin 2

*/

#define   RS   PIN1
#define   RW   PIN2
#define   EN   PIN3     

/* function for LCD driver 

0-Init function 
1- function to Write command  
2- function to Write DATA 

*/

void LCD_Init (void);

void LCD_voidWriteData( u8 Copy_u8Data );

void LCD_voidSendCMD( u8 Copy_u8Cmd );



#endif