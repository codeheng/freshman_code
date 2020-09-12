/*    19.8.10 15点45分
		如何把两个数中比较大的选出来
		可以用if比较，把大的弄出来。
		太麻烦了，所以可以用函数，避免代码的重复性操作 
		max是函数的名字，i和j是形式参数，简称形参，void表示函数没有返回值 
 */ 


# include <stdio.h>

void max(int i, int j) 
{
		if(i>j)
			printf("%d\n",i);
		else
			printf("%d\n",j);
}

int main(void)
{
	int a,b,c,d,e,f;
	
	a = 1,b = 2,c = 3,d = 9,e = -5,f = 100;
	max(a,b);
	max(c,d);
	max(e,f);
/*	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
	if(c>d)
		printf("%d\n",c);
	else 
		printf("%d\n",d);
	if(e>f)
		printf("%d\n",e);
	else
		printf("%d\n",f);
*/	
	
	return 0;
 } 
