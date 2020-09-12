/*
		2019年10月20日09:54:05 
		通过指针函数调用改变数的值 
*/

#include <stdio.h>
void f(int *p)
{
	*p = 100;
}
int main(void)
{
	int i = 9;
	f(&i);
	
	printf("i = %d\n",i); 
	
	return 0;
 } 
