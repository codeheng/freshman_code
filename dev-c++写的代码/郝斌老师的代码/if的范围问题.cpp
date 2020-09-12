/*   时间  19.8.4 17点11分
 	
	 总结  if默认只能控制一个语句的执行或不执行 

*/ 

# include <stdio.h>

int main(void)
{
	if(1>2)
			printf("aaaa\n");
			printf("bbbb\n");
	// 输入结果为bbbb// 
	
	return 0;
 } 
