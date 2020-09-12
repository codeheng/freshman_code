/*	  19.8.7 16点06分
		掌握for循环的用法  灵活使用for if的结合 
		养成 流程 到 各语句的功能 到 试数 看程序三步骤的习惯 

*/ 


# include <stdio.h>

int main(void)
{
	int i;
	int sum1 = 0;//奇数和 
	int sum2 = 0;//偶数和 
	
	for(i = 1;i<=100;++i)
	{
		if(i%2 == 1)
			sum1 += i;
		
		else
			sum2 += i;
	}
	printf("sum1 = %d\n",sum1);
	printf("sum2 = %d\n",sum2);
	
	return 0;
}
