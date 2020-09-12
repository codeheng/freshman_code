/*		2019年9月5日  07点52分   

*/ 

# include <stdio.h>
# include <stdlib.h>

int main(void) 
{
	int i;
	int n;
	printf("您想输入几就输出几个*");
	scanf("%d",&n);
	
	for (i=1;i<=n;++i)
			printf("*");//若是加上\n,则每输出一个*就换行 
			printf("\n");//为了与  按任意键继续. .  换行 
	system("pause");
	
	
	return 0;
}
