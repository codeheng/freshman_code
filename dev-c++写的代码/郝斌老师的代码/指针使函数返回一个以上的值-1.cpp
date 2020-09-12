//  2019年8月14日18点22分 

# include <stdio.h>


void g(int * p,int * q)
{
	*p = 1;
	*q = 2;
}
int main(void)
{
	int a = 3,b = 5;
	g(&a,&b);
	printf("%d %d\n",a,b);
	
	
	
	return 0;
}
/* 输出结果
1 2

--------------------------------
Process exited after 0.3023 seconds with return value 0
请按任意键继续. . . 

*/
