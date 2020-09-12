# include <stdio.h>

int f()
{
		return 10.5;//因为函数的返回值类型是int，
					//所以最终f返回值是10不是10.5 
					//以函数前面的那个为准 
}
int main(void)
{
	int i = 99;
	double x = 6.6;
	
	x = f();
	printf("%lf\n",x);
	
	return 0;//输出结果为10.000000 
}
