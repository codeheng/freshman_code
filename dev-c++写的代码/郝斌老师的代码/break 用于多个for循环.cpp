/*  19.8.9 16��00��
	�ܽ� break ֻ����ֹ������������Ǹ�ѭ��	 

*/ 


# include <stdio.h>

int main (void)
{
	int i,j;
	
	for(i = 0;i<3;++i)
	{
		for(j = 1;j<4;++j)
			break;
		printf("23333\n"); // ������ 3�� 23333 
	}
	
	
	return 0;
}
