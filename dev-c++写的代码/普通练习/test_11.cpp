#include <stdio.h>
int main(void)
{
	int i,j,a = 0;
	for(i = 0;i < 2; i++)
		for(j = 0;j <= 4;j++)
			a++;
	printf("%d",a);
	
	return 0;
} 
