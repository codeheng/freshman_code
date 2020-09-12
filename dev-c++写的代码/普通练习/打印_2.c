/*
		2020年1月18日08:59:55
		利用递归打印 
		当打印的数较多时，相比for循环，此时效率会更高 
*/

#include<stdio.h>
void printN(int N)
{	
	if(N)
	{
		printN(N-1);
		printf("%d\n",N);
	} 
	
}
int main(void)
{
	int n;
	printf("请输入正整数");
	scanf("%d",&n);
	 
	printN(n);
	return 0;
} 
