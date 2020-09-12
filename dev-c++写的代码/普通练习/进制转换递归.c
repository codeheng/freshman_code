#include<stdio.h>
r8(int a)
{
	int i,j;
	if(a==0)
		return 0;
	else
	{
		j=a%8;
		i=a/8;
		r8(i);
		printf("%d",j);
	}
}
int main()
{
	int n;
	printf("请输入十进制数：");
	scanf("%d",&n);
	printf("转换成八进制数是:");
	r8(n);
	printf("\n");
}
