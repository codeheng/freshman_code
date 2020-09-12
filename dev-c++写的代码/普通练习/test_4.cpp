#include <stdio.h>
int main(void)
{
	int a,b,c,d,m,n = 0;//这样不严谨= = 
//	int e;
	int f;
	
	((m = n == b)||(n = c == d));	
	printf("%d,%d\n",m,n);
	printf("%d\n",a);
	return 0;
}
/*

0,0
44

--------------------------------
Process exited after 0.01473 seconds with return value 0
请按任意键继续. . .



*/
