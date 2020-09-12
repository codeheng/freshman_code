/*	  2019年8月15日 14点15分	
		指针不可以进行加法，乘法和除法
		如果两个指针变量指的是同一块连续空间中的不同存储单元
		则两个指针可以进行减法 
*/ 

# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 10;
	int * p = &i;
	int * q = &j;
	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p和q所指向的单元相隔%d个单元\n",q-p);
	
	
	
	
	return 0;
 } 
 /*		输出结果
 p和q所指向的单元相隔3个单元

--------------------------------
Process exited after 0.3024 seconds with return value 0
请按任意键继续. . . 
 */ 
