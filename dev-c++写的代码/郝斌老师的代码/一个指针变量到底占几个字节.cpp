/*	 2019��8��16��  14��26��
		һ��ָ�������������ָ��ı���ռ�����ֽ�
		������ռ���ֽ�������ͬ
		32λ����  ռ4���ֽ�
		64λ	ռ8���ֽ� 
*/ 

# include <stdio.h>

int main(void)
{
	char ch = 'A';//�����ű���Ҫ�� 
	int i = 99; 
	double x = 66.6;
	char * p = &ch;
	int * q = &i;
	double * r = &x;
	
	printf("%d %d %d\n",sizeof(p),sizeof(q),sizeof(r));
	
	return 0;
}
/*	������
8 8 8

--------------------------------
Process exited after 0.1068 seconds with return value 0
�밴���������. . 
*/ 
