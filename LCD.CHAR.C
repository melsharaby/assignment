/*DELAY LIBR */
#include<util/delay.h> 


/* 
include HAL layer interface 
 include DIO layer 
 include library layer 
 
 */
 
 #include "LCD _Interface.h"
 
 /* include libs */
 #include "STD_TYPES.h"
 #include "BIT_MATH.h"
 
 
 /* DIO layer from MCAL included */
 #include " DIO_Interface.h "
 #include "DIO_Private.h"
 
 
 /* the program */
 
 int main (){
	 
	 u8 name[]=" MOHAMED";
	 
	 /* the dirrection of pins and ports */
	 
	 DIO_voidSetPinDir(PORT_CTRL, RS, OUTPUT );
	 DIO_voidSetPinDir(PORT_CTRL, RW, OUTPUT );
	 DIO_voidSetPinDir(PORT_CTRL, EN, OUTPUT );
	 
	 DIO_voidSetPortDir(PORT_DATA, OUTPUT );
	 
	 LCD_Init()
	 
	 while (1){
		 LCD_voidWriteString(name);
	 }
		 
		 
		 return 0;
 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 }