/*
		2020年1月15日14:40:44
		辗转相除法判断最大公因数 
*/

# include<stdio.h>
int main(void)
{
	int a,b,temp;
	printf("请输入两个整数");
	scanf("%d %d",&a,&b);
	
	while(a!=0)
	{
		temp = b % a;
		b = a;
		a = temp;
	} 
	
	printf("最大公约数为%d\n",b);
	
	return 0;
} 
