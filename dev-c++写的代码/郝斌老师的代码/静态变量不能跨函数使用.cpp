/*		2019年8月20日  09点01分 

*/ 

# include <stdio.h>

void f(int **q)
{
	int i = 5;
	//*q等价于p，q和**q都不等价于p
	//*q = i;error，因为*q = i等价于p = i 
	*q = &i;//即p = &i 
}
int main(void)
{
	int *p;
	
	f(&p);
	printf("%d\n",*p);//本语句语法没错，但是逻辑有问题
	
	//前面调用函数，静态变量调用完分配好内存就要释放掉。即int i = 5
	//系统已经给释放了，然后5已经不属于程序的一部分，应该不可读取
	//为何程序读出5，程序软件的问题太弱智， 还有就是那个5没被没
	//占用 ，所以能读出来！ 
	
	
	return 0;
 } 
 /*		输出结果
 5

--------------------------------
Process exited after 0.1015 seconds with return value 0
请按任意键继续. . . 
 
 */ 
