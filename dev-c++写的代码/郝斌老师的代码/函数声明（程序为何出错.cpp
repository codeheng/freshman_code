/*   19.8.11 	14点18分
		 
*/ 

# include <stdio.h>

void f(int);//此时程序是错误的，因为 int 与下面11行void不统一 
int main(void) 
{
		f();
		
		return 0;
}

void f(void)//void 意思就是空白 
{
		printf("哈哈!\n");
}
