/*	19.8.14	  	16��42��
	�βκ�ʵ����Զ����һ������	 
*/ 

# include <stdio.h>

void f(int i)
{
	i = 99;
}
int main(void)
{
	int i = 6;
	printf("i = %d\n",i);
	f(i);//���������ˣ���ֻ�����β��иı��ˣ�ʵ����ûӰ�죡 
	printf("i = %d\n",i);
		
	
	return 0;
}
/*
������
i = 6
i = 6

--------------------------------
Process exited after 0.09828 seconds with return value 0
�밴���������. . .
 
*/ 
