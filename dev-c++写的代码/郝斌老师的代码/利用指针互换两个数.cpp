/*		19.8.14 16点08分
		互换两个数，通过被调函数改变主函数值也就是利用指针。 
*/ 

# include <stdio.h>

/*
void swap1("int p,int q")
{
	int t;
	t = i;  这个是错误的！ 
	i = j;
	j = t;
}
*/

/*
void swap2(int * p,int * q);形参名字是p和q，接收实参数据的是p和q，而不是*p和*q
{
	int * t;
	t = p;
	p = q;//也不会完成互换目的 
	q = t;
}
*/
void swap3(int * p,int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
 } 
int main (void)
{
	int a = 3;
	int b = 5;
	
	swap3(&a,&b);
	printf("a = %d,b = %d\n",a,b); 
	
	return 0;
}
