/* 		19.8.11	13点56分
		函数调用写在函数定义之前，函数前置声明一定要加！ 
*/ 

# include <stdio.h>

void f(void);//函数前置声明。若函数定义在main之后则一定要加，不然错误 
int main(void)
{
	
	f();
	
	return 0;
 } 

void f(void)
{
		printf("hh\n");
}	//输出结果为  hh 
