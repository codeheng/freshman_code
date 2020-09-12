//时间  19.8.6  15点25分
//  总结 if后面不加 ； 注意分号的问题，别多加别漏加！ 
/* if(1>2);
等价于
  	if(1>2)
	  ;  这是一个空语序 */ 

# include <stdio.h>

int main(void)
{
	if(1>2)// 不加分号  加分号就表示一个语句的结束 若加的话 输出为aaaa bbbb 
		printf("aaaa\n");
		printf("bbbb\n");
	//5到7行  共两个语句  输出结果为bbbb 
	return 0;
 } 
