#include <stdio.h>
#include <math.h>

int fun1(int n);
int fun2(int n);

int main(void)
{
	int i;
	printf("��������һ������");
	scanf("%d",&i);
	
	printf("%dת��Ϊ10����%d",i,fun1(i));
	printf("\n");
	printf("%dת��Ϊ8����%d",i,fun2(i));
	 
	return 0;
}

int fun1(int n)
{
	int a = 0,b = 0;
	while (n!= 0)
	{
		a += (n%10) * pow(8,b);
		++b;
		n/=10;
	} 
	return a;
}
int fun2(int n)
{
	int a = 0,b = 1;
	while(n!= 0)
	{
		a+= (n%8) * b;
		n /= 8;
		b *= 10;
	}
	return a;
}

