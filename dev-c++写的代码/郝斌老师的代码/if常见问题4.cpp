/* 	ʱ�� 19.8.6 15��49��
	�ܽ� �� 
if (���ʽ1)
	A;
else if (���ʽ2)
	B;
else if (���ʽ3)
	C;
else (���ʽ4);  
	D;
����д�﷨���� �����߼����Ǵ���ġ� 
else (���ʽ4);  
	D;
�ȼ���
else 
	(���ʽ4);  
D;

 */ 

# include <stdio.h>

int main (void)
{
		if(1>2)
			printf("aa\n");
		else if(1>5)
			printf("bb\n");
		else(5>10); //�ӷֺŵĻ� ��ʵ���������� 
			printf("cc\n");
			//������Ϊ cc 
	return 0;
 } 
 /*  
 else(5>10);
 printf("cc\n");
 �ȼ���			
 else
 	(5>10);
 printf("cc\n") 
 
 */ 
