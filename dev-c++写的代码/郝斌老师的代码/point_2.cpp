/*
		2019��10��20��09:54:05 
		ͨ��ָ�뺯�����øı�����ֵ 
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
