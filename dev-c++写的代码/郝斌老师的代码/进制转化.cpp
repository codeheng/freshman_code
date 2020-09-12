/*		2019年8月23日 10点09分  
		此案例是十进制转16进制 
		直接按位权也就是除16
		256  16  1
	 商  3   14  8 即可
	 即为3E8	 
*/ 

# include <stdio.h>

int main(void)
{
	int i = 1000;
	printf(" i = %#X\n",i);
	
	
	return 0;
 } 
 /*		输出结果
 i = 0X3E8

--------------------------------
Process exited after 0.2818 seconds with return value 0
请按任意键继续. . . 
 
 */ 
