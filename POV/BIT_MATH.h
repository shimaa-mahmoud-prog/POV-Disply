#ifndef BIT_MATH_H
#define BIT_MATH_H

#define  CLR(REG,BIT_NUM)			   (REG &= ~(1<<BIT_NUM))
#define  SET(REG,BIT_NUM) 			   (REG |= (1<<BIT_NUM) )
#define  TGL(REG,BIT_NUM)			   (REG ^= (1<<BIT_NUM) )
#define  GET(REG,BIT_NUM)              ((REG>>BIT_NUM)&1)


#define  CLR_LOW_NIBBLE(REG)			(REG&=~(15<<0))
#define  SET_LOW_NIBBLE(REG)			(REG|=(15<<0))
#define  TGL_LOW_NIBBLE(REG)			(REG^=(15<<0))

#define  CLR_HIGH_NIBBLE(REG)			(REG&=~(15<<4))
#define  SET_HIGH_NIBBLE(REG)			(REG|=(15<<4))
#define  TGL_HIGH_NIBBLE(REG)			(REG^=(15<<4))

#define	 CLR_BYTE(REG)        			(REG=0X00)
#define	 SET_BYTE(REG)          		(REG=0XFF)
#define	 TGL_BYTE(REG)         			(REG^=0XFF)

#define  WRITE_BYTE(REG,VALUE)			(REG=VALUE)




#endif
