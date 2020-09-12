/*		19.8.11 14点57分
		求1到某个数字之间（包括该数字）所有的素数，并将其输出
		 只用到了main函数实现， 有局限性
		 	代码的重用性不高
			 代码不容易理解 
 */


# include <stdio.h>
 
int main(void)
{
	int val;
	int i;
	int j;
	
	scanf("%d",&val);
	for(i = 2;i<=val;++i)//要判断i是否为素数并且要输出 
	{ 
		for(j = 2;j<i;++j)//所以要再用到j变量  可进行试数 
		{
				if(i%j ==0)
						break;
		}
		if(j == i)
				printf("%d\n",i);
			
	}		
			 
	
	return 0;
 } 
