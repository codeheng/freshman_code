/*		 19.8.8 14��46��
 �ܽ�:
		ǰ����������ʽ��ֵ��i��1֮���ֵ
		������������ʽ��ֵ��i��1֮ǰ��ֵ
 

 */ 


# include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	
	i = j = 3;
	k = i++;//������ 
	m = ++j;//ǰ���� 
	
	printf("i = %d,j = %d,k = %d,m = %d\n",i,j,k,m);
	
	
	return 0;
}
/* ������ 
i = 4,j = 4,k = 3,m = 4

--------------------------------
Process exited after 0.291 seconds with return value 0
�밴���������. . .


*/ 
