/*		2019��8��23�� 14��41�� 
	|  ��λ��
	|| �߼���
	��1|0 = 1;
	
	~ ��ʾ��λȡ��
	
	<<���� �ұ߲�0 
	>>���� һ����߲�0 

*/ 

# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int k,l,m;
	
	k = i|j;
	printf("k = %d\n",k);
	
	l = ~i;
	printf("l = %d\n",l);
	
	m = i << 1;
	printf("m = %d\n",m);
	
	return 0;
}
/*		������
k = 7
l = -4
m = 6

--------------------------------
Process exited after 0.2491 seconds with return value 0
�밴���������. . .
 

*/ 
