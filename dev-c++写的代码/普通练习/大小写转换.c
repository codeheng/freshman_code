#include<stdio.h>
int main(void)
{
	char c;
	printf("%������һ����д��Сд��ĸ"); 
	scanf("%c",&c);
	
	if(c>='A'&&c<='Z')
		{
			printf("%c",c + 32);
		} 
	else 
		printf("%c",c-32);
	return 0;
}
