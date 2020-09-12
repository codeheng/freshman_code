/*  	19.8.10 16点24分
		 break是用来终止循环和switch的，而return是终止函数的 
 */ 

# include <stdio.h>

void f(void)
{
		int i;
		
		for(i = 0;i<5;++i)
		{
				printf("23333\n");
				//break;
				return;
		} 
		printf("hello world\n");
}
int main(void)
{
	f();
	
	return 0;
 } 
 /* 当注释掉return时，输出结果为 23333 hello world
 	当注释掉break 时，输出结果为 23333 
 */
