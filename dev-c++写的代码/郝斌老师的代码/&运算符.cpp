# include <stdio.h>

int main(void)
{
	int i = -5;
	int j = 10;
	int k;
	
	k = i&j;
	printf("k = %d\n",k);
	
	k = i&&j;//&&�����߼��������k��ֵֻ����1����0 
	printf("%d\n",k); 
	
	
	return 0;
 } 
 /*	 ������
 k = 10
1

��һ��ת��Ϊ�����ƣ��κΰ�λ�뼴�ɣ�
�ڶ�����������жϾ��У���0������ 
--------------------------------
Process exited after 0.2758 seconds with return value 0
�밴���������. . 
 
 */
