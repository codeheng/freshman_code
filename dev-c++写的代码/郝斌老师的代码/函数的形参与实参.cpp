/* 		19.8.11 14点26分
		实参就是指的main主函数下的参数
		形参表示普通函数下的
		他们必须 个数相同 位置一一对应，数据类型必须兼容。 
*/ 

# include <stdio.h>

void f(int i,float x)
{
		printf("%d %lf\n",i,x); 
}
int main(void)
{	
	f(9.9,6.6);
	
	return 0;
 } //输出结果为 9  6.600000
