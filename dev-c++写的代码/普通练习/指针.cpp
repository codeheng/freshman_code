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
 
/*		输出结果
20

--------------------------------
Process exited after 0.2045 seconds with return value 0
请按任意键继续. . . 

*/
