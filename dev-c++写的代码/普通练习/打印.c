/*
		2020年1月18日08:55:54
		打印1-->N的整数 
*/ 

#include<stdio.h>
int main(void)
{
	int N;
	printf("请输入正整数");
	scanf("%d",&N);
	
	int i;
	for(i = 0;i<=N; i++)
	{
		printf("%d\n",i); 
	} 
	return 0;
} 
