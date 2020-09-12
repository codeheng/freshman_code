/*  2019年8月15日  19点01分
		传统数组就是静态数组
		 
*/ 

# include <stdio.h>

void g(int * pArr,int len)
{
	pArr[2] =  88;
}
void f(void)
{
	int a[5] = {1,2,3,4,5};
	
	g(a,5);
	printf("%d\n",a[2]);
 } 
int main(void)
{
	
	f();
	
	return 0;
 } 
 /*输出结果
 88

--------------------------------
Process exited after 0.2842 seconds with return value 0
请按任意键继续. . 
 
 */ 
