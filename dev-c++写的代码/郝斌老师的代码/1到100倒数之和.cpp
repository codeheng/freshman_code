# include <stdio.h>

int main(void)
{
	int i = 1;
	float sum = 0;
	
	for(i = 1;i<=100;++i)
		sum = sum + 1.0/i;
	printf("%f\n",sum); 
	
	return 0;
}
