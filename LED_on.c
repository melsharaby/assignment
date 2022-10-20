/*inlcude all library files */
#include "STD_TYPES.h"
#include "BIT_MATHS.h"


/*include all drivers files */
#include "DIO_Private.h"
#include "DIO_Interface.h"

/*start prog exe*/

int main (){
	/*definitions and init */
	
	/*direction for switch */
	DIO_voidSetPinDir(PORTB, PIN3, INPUT );
	
	/* direction of led */
	DIO_voidSetPinDir(PORTA, PIN2, OUTPUT );
	
	/* init pin value of led as low */
	DIO_voidSetPinValue(PORTA, PIN2, LOW );
	
	/* while loop for cont exec* */
	while (1)
	{
		/* get status of switch */
		u8 switch_1 = DIO_u8GetPinValue ( PORTB,PIN3 );
		
	/* if the switch == high > make the led on */
	    if (switch_1 == HIGH )
		
		{
			DIO_voidSetPinValue(PORTA, PIN2, HIGH );
		}
		
		else 
	    {
		    DIO_voidSetPinValue(PORTA, PIN2, LOW );
		}
	}
return 0;
	
			
			
			
	