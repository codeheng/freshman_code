# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int i,j,k,n;
	printf("请输入直角三角行的行数n：");
	scanf("%d",&n);
	
	for(i = 1;i<=n;++i)
	{
		for(j = 1;j<n-1;++j)
			printf(" ");
		for(k = 1;k<=2*i-1;++k)
			printf("*");
		printf("\n");
	 } 
	
	system("pause");
	return 0;
}
