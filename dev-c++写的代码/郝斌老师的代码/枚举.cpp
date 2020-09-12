/*		2019年8月22日  16点39分   

*/ 

#include <stdio.h>

//定义了个数据类型，并没有定义变量， 该数据类型的名字为enum weekday 
enum weekday//enum 就是表示枚举类型 
{
		monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
/*
 	monday默认为0开始，tuesday为1，以此类推 
*/ 
int main(void)
{
	enum weekday day = sunday;
	printf("%d\n",day);
	
	return 0;
 } 
 /*	输出结果
 6

--------------------------------
Process exited after 0.3624 seconds with return value 0
请按任意键继续. . . 
 
 */ 
