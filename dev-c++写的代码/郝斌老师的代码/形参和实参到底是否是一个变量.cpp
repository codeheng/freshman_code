/*	19.8.14	  	16点42分
	形参和实参永远不是一个变量	 
*/ 

# include <stdio.h>

void f(int i)
{
	i = 99;
}
int main(void)
{
	int i = 6;
	printf("i = %d\n",i);
	f(i);//即便引用了，但只是在形参中改变了，实参中没影响！ 
	printf("i = %d\n",i);
		
	
	return 0;
}
/*
输出结果
i = 6
i = 6

--------------------------------
Process exited after 0.09828 seconds with return value 0
请按任意键继续. . .
 
*/ 
