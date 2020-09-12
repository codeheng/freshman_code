/* 	时间 19.8.6 15点49分
	总结 ： 
if (表达式1)
	A;
else if (表达式2)
	B;
else if (表达式3)
	C;
else (表达式4);  
	D;
这样写语法不错 但是逻辑上是错误的。 
else (表达式4);  
	D;
等价于
else 
	(表达式4);  
D;

 */ 

# include <stdio.h>

int main (void)
{
		if(1>2)
			printf("aa\n");
		else if(1>5)
			printf("bb\n");
		else(5>10); //加分号的话 无实际意义的语句 
			printf("cc\n");
			//输出结果为 cc 
	return 0;
 } 
 /*  
 else(5>10);
 printf("cc\n");
 等价于			
 else
 	(5>10);
 printf("cc\n") 
 
 */ 
