/*
		2020年1月15日15:26:57
		运算符 
	总结 
		a++ 	给a+1 	表达式的值是原来a的值 
		++a  	给a+1	表达式的值是原来a+1的值 
*/ 
#include <stdio.h>
int main(void)
{
	/*
	int a = 10;
	int b = -20;
	printf("%d\n",a*-b);//即a * =（-b）  
	*/
/*
		运算结果
200
--------------------------------
Process exited after 0.03646 seconds with return value 0
请按任意键继续. . .
 
*/ 

	int a,b;
	a = 1;
	b = 6;
//	a = b = 6;//-->a = (b = 6)

//	a+=7; //+=之间不能有空格 

//	a++;

	printf("%d\n",a);//1
	printf("%d\n",++a); //输出为2 
	printf("%d\n",a++);//2 怎么回事！不应该是1?  =  = 
	printf("%d\n",b++);//6
	return 0;
/*
	6

--------------------------------
Process exited after 0.0273 seconds with return value 0
请按任意键继续. . .
*/
} 

