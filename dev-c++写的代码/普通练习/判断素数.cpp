/*		2019年9月15日17:32:15
		如何判断素数
		 
*/ 

# include <stdio.h>

int main(void)
{
	int i,n;
	scanf("%d",&n);
	
	if(n == 2)
	{
		printf("%d is prime\n",n);
		return 0;
	}
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
			break;
	}
	if(n==i) 
		printf("%d is prime\n",n);
	else
		printf("%d is no prime\n",n);
	
	return 0;
}
