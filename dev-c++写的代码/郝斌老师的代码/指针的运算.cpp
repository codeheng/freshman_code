/*	  2019��8��15�� 14��15��	
		ָ�벻���Խ��мӷ����˷��ͳ���
		�������ָ�����ָ����ͬһ�������ռ��еĲ�ͬ�洢��Ԫ
		������ָ����Խ��м��� 
*/ 

# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 10;
	int * p = &i;
	int * q = &j;
	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p��q��ָ��ĵ�Ԫ���%d����Ԫ\n",q-p);
	
	
	
	
	return 0;
 } 
 /*		������
 p��q��ָ��ĵ�Ԫ���3����Ԫ

--------------------------------
Process exited after 0.3024 seconds with return value 0
�밴���������. . . 
 */ 
