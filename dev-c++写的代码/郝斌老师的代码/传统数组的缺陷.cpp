/*  2019��8��15��  19��01��
		��ͳ������Ǿ�̬����
		 
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
 /*������
 88

--------------------------------
Process exited after 0.2842 seconds with return value 0
�밴���������. . 
 
 */ 
