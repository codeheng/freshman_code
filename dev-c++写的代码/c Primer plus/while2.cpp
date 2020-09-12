# include <stdio.h> 

int main(void)
{
	int n = 0;
	
	while (n++ < 3); //若换成while (++n < 3)  则输出 n is 3 
	 	printf("n is %d\n",n);
	printf("that is all this program does\n");
	
	return 0;
}
/*		输出结果
n is 4
that is all this program does

--------------------------------
Process exited after 0.2169 seconds with return value 0
请按任意键继续. . .
 

*/
