/*    2019��8��14�� 18��10��
		 

*/ 

# include <stdio.h>

void f(int * pArr,int len)
{
	int i;
	for(i = 0;i<len;++i)
		printf("%d ",pArr[i]);//*(pArr+i) �ȼ��� pArr[i]  Ҳ�ȼ��� b[i] Ҳ�ȼ��� *(b+i) 
 
	printf("\n");
}
int main(void)
{
 	int b[6] = {-1,-2,-3,4,5,-6};
 	
 	f(b,6);
 	
	
	
	return 0;
 } 
 /*������
 -1 -2 -3 4 5 -6

--------------------------------
Process exited after 0.2444 seconds with return value 0
�밴���������. . . 
 */ 
