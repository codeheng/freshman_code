#include <stdio.h> 
int main(void)
{
	int a[5] = {1,2,3,4,5};
	
	printf("%p\n",a+1);
	printf("%p\n",a+2);
	printf("%p\n",a+3);
	
	
	printf("%d\n",*a);
	printf("%d\n",*a+1);
	return 0;
}
