# include <stdio.h>

int main(void)
{
	int x;
	int find = 0;//��־����������ҵ���Ϊ��
	
	for(x=1;!find;x++)
	{
		if(x%5==1 && x%6==5 && x%7==4 && x%11==10)
		{
				printf(" x = %d\n",x);
				find = 1;
		}
	} 
	
	return 0;
}
/*		������
 x = 2111

--------------------------------
Process exited after 0.2575 seconds with return value 0
�밴���������. . .

*/ 
