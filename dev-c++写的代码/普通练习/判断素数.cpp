/*		2019��9��15��17:32:15
		����ж�����
		 
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
