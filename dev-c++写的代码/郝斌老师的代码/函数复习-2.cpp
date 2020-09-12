/* 	19.8.12  07点25分 
*/ 

# include <stdio.h>

void f(int i);//前置说明 

void g()
{
		f(5);
}
void f(int i)
{
		int i = 99 ;//不注释掉的话 程序就会报错  
					//前面形参已经弄int i此时不可以再定义i ，换成j不报错 
		
		printf("i = %d\n",i);
		return; 
}
int main(void)
{
	int i = 10;
	
	g();
	
	
	return 0;
 } //输出结果i = 5 
