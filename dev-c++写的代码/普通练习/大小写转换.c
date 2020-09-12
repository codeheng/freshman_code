#include<stdio.h>
int main(void)
{
	char c;
	printf("%请输入一个大写或小写字母"); 
	scanf("%c",&c);
	
	if(c>='A'&&c<='Z')
		{
			printf("%c",c + 32);
		} 
	else 
		printf("%c",c-32);
	return 0;
}
