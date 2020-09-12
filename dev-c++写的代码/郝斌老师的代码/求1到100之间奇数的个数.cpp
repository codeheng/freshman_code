/* 			19.8.7 15点20分
		 	for循环与if的结合使用。 
*/ 

# include <stdio.h>

int main(void)
{
		int i;
		int cnt = 0;//奇数一般cnt即count 表示 
		
		for(i = 1;i<=100;++i)
			if(i%2 == 1)
					++cnt;
		printf("cnt = %d\n",cnt);
		
	return 0;
 } 
