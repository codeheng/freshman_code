/*   19.8.12 07点37分
	 
*/ 

# include <stdio.h>

int main(void)
{
	int * p;//p是变量的名字，int * 表示p变量存放的是int类型的地址 
	int i = 3;
	
	p = &i;//程序ok
//	p = i; //错误，因为类型不一样，i表示 int类型变量的值
			//p只能存放int 类型变量的地址 
//	p = 55; error 原因同上 
	

	
	return 0;
}
