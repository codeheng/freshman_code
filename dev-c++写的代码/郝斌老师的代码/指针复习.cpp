/*		19.8.14 	15��38��
		 
*/ 

# include <stdio.h>

int main(void)
{
	int * p;//Ҳ����д��int* p����int *P��һ�㶼�ӿո� 
	int i = 5;
	char ch = 'A';
	
	p = &i;//*p��p������Ϊ��ַ�ı��� ,p������i�ĵ�ַ�����ָ��i 
	*p = 99;
	printf("i = %d,*p = %d\n,",i,*p);
	
	
	return 0;
}
/* 	������
i = 99,*p = 99
,
--------------------------------
Process exited after 0.0744 seconds with return value 0
�밴���������. . .


 

*/ 
