// 2019年12月25日18:42:29
//		求两个正整数的最大公约数


#include<stdio.h>
int main(void)
{
	int a,b;
	int i;//参数i就是那个最大公约数，要让它变换，然后判断 
	scanf("%d%d",&a,&b);
	
	for(i=b;;i--)//i从a，b开始均可以 
	{
		if((a%i == 0) && (b%i == 0)) //表示公约数要用取余来看，余数要是0 
		break;
	}	
		printf("%d",i);		
	return 0;
} 
