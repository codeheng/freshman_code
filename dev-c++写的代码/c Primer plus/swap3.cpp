# include <stdio.h>
# include <stdlib.h>

void interchange(int * u,int * v);

int main(void)
{
	int x = 5,y = 10;
	printf("originally x = %d and y = %d\n",x,y);
	interchange(&x,&y);
	printf("now x = %d and y = %d\n",x,y);
	
	
	system("pause");
	return 0;
}
void interchange (int * u,int * v)
{
	int t;
	t = *u;
	*u = *v;
	*v = t;
}
/*		输出结果
originally x = 5 and y = 10
now x = 10 and y = 5
请按任意键继续. . 
*/

