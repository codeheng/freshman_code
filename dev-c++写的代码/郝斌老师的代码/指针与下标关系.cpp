/*		19.8.14 17��03��
		˵���� p[i]��Զ����*��p+i�� 
*/ 


# include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int i;
	
	for (i = 0;i<5;++i)
		printf("%d\n",a[i]); //a[i] == *(a+i) 
	
	return 0;
 } 
 /*		������
1
2
3
4
5

--------------------------------
Process exited after 0.1968 seconds with return value 0
�밴���������. . .
 
 */ 
