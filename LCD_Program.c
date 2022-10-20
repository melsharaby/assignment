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
 
 /* implementation file */
 
 void LCD_Init (void){
	 
	 
 }

void LCD_voidWriteData( u8 Copy_u8Data ){
	/* RS HIGH RW LOW */
	
	
	 DIO_voidSetPinValue(PORT_CTRL, RS , HIGH  );
	 DIO_voidSetPinValue(PORT_CTRL, RW , LOW  );
	
	/* LATCH ENABLE PIN*/
	
	DIO_voidSetPortValue(PORT_DATA, Copy_u8Data );
}


void LCD_voidSendCMD( u8 Copy_u8Cmd ){
	/* CHANGED RS TO LOW TO SEND A COMMAND */
	
	 DIO_voidSetPinValue(PORT_CTRL, RS , LOW  );
	 DIO_voidSetPinValue(PORT_CTRL, RW , LOW  );
	
	/* LATCH ENABLE PIN*/
	DIO_voidSetPortValue(PORT_CTRL, Copy_u8Cmd );
	
}
