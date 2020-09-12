/*		19.8.11		14点05分
		要明白程序何为错误
		还要知道为何加上第8行后程序就正确了 
*/ 

# include <stdio.h>

void f(void);//这个就是前置声明，分号不能省略。注释掉则错误 
void g(void)
{
		f();//error 缺少前置声明 ，因为f定义放在了调用之后了 
}
void f(void)
{
		printf("hh!\n"); 
}
int main(void)
{
		g(); 
	return 0;
 } //输出结果 hh! 
