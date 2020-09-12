/*		19.8.14 	15点38分
		 
*/ 

# include <stdio.h>

int main(void)
{
	int * p;//也可以写成int* p；或int *P（一般都加空格） 
	int i = 5;
	char ch = 'A';
	
	p = &i;//*p以p的内容为地址的变量 ,p保存了i的地址，因此指向i 
	*p = 99;
	printf("i = %d,*p = %d\n,",i,*p);
	
	
	return 0;
}
/* 	输出结果
i = 99,*p = 99
,
--------------------------------
Process exited after 0.0744 seconds with return value 0
请按任意键继续. . .


 

*/ 
