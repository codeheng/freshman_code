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
	printf("������ʮ��������");
	scanf("%d",&n);
	printf("ת���ɰ˽�������:");
	r8(n);
	printf("\n");
}
