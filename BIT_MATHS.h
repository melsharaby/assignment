#ifndef _BIT_MATHS_H
#define _BIT_MATHS_H

/*this is a file help in pin operations on 
a bit wise level */

#define SET_BIT(PORT_REG, PIN_NO)   PORT_REG |= (1<<PIN_NO)
#define CLR_BIT(PORT_REG, PIN_NO)   PORT_REG & =~ (1<<PIN_NO)
#define TGL_BIT(PORT_REG, PIN_NO)   PORT_REG ^= (1<<PIN_NO)

#define GET_BIT(PORT_REG, PIN_NO)   PORT_REG = (PORT_REG>>PIN_NO)&1

/*macro functions*/


#endif 