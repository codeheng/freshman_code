/* 			19.8.7 15��20��
		 	forѭ����if�Ľ��ʹ�á� 
*/ 

# include <stdio.h>

int main(void)
{
		int i;
		int cnt = 0;//����һ��cnt��count ��ʾ 
		
		for(i = 1;i<=100;++i)
			if(i%2 == 1)
					++cnt;
		printf("cnt = %d\n",cnt);
		
	return 0;
 } 
