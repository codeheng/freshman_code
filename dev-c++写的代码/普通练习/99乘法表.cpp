// 2019Äê9ÔÂ13ÈÕ11:12:20 

#include <stdio.h>
int main(void)
{
	int i,j;
	
	printf("    ");
	for(j = 1;j<= 9;j++)
		printf("%4d",j);
	printf("\n");
		
	for(i = 1;i <= 9;i++)
	{
		printf("%4d",i);
		for(j = 1;j <= 9;j++)
		{
				if(i>=j)
					printf("%4d",i * j);
		}
		printf("\n");
	}
		
	return 0;
 } 
