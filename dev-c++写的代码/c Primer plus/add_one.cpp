# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;
	
	while (a < 5)
	{
		a++;
		++b;
		printf("%d %d\n",a,b);
	}
	
	system("pause");
	return 0;
 } 
 /*		输出结果
1 1
2 2
3 3
4 4
5 5
请按任意键继续. . 
 
 */ 
