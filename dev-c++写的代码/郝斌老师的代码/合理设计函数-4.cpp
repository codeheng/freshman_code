/* 		19.8.11 15点15分
		 求1到某个数字之间(包括该数字)所有的素数，并将其输出
		这次用借用函数数来判断一个数字是否是素数
		优点:
			代码比  -3.cpp  更容易理解
			代码的可重用性比  -3.cpp 高
		缺点：
			可重用性仍然不是非常高，
			比如有1000个数字，求它们每个数字从1到它本身的素数
			则
					for (i=2; i<=val; ++i)
					{
						if ( IsPrime(i) )
							printf("%d\n", i);
					}
			要写1000次
*/ 
# include <stdio.h>

bool IsPrime(int val)
{
		int i;
		
		for(i = 2;i<val;++i)
		{
				if(val%i == 0)
						break;
						
		}
		if(i == val)
				return true;
		else
				return false; 
}
int main(void)
{
	int val;
	int i;
	
	scanf("%d",&val);
	for(i = 2;i<val;++i)
	{
			if(IsPrime(i))
				printf("%d\n",i); 
	}
	
	
	return 0;
 } 
