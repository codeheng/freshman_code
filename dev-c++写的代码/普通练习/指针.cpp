# include <stdio.h>

int main(void)
{
	char a;
	char *p;
	
	a = 10;
	p = &a;
	*p = 20;
	
	printf("%d\n",a); 
	
	
	return 0;
 } 
 
/*		������
20

--------------------------------
Process exited after 0.2045 seconds with return value 0
�밴���������. . . 

*/
