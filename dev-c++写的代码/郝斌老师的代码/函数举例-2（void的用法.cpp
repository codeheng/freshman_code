/*    19.8.10 16点08分
	 如何定义函数
	 	函数的返回值 函数的名字（函数的形参列表） 
	 	{
			函数的执行体 
		} 

*/ 


# include <stdio.h>

int f(void)//括号里的void表示该函不能接受数据，int表示函数返回值是int类型的 
{
		return 10;//向主调函数返回10 
}

void g(void)// 函数名前面的void表示该函数没有返回值 
{
	//	return 10; //若这样写表示错误，因为前面void表示没有返回值
					//这儿又写返回10  相矛盾 
}
int main(void)
{
	int j = 88;
	
	j = f();
	printf("%d\n",j);
	
//	j = g(); error  因为g函数没有返回值 
	
	
	return 0;
 } //最终输出结果为10 
