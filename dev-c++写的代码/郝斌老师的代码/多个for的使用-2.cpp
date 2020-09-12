/*		19.8.8 14点06分 
	for 只控制一个语句，先分清有几个语句，然后分析出最终结果 
*/ 
# include <stdio.h>

int main (void)
{
	int i,j;
	
	for(i = 0;i<3;++i)
		printf("嘿嘿!\n");
		for(j = 2;j<5;++j)
			printf("哈哈!\n");
		printf("嘻嘻!\n");
		
	return 0;
 } 
 
 /*
    输出结果
嘿嘿!
嘿嘿!
嘿嘿!
哈哈!
哈哈!
哈哈!
嘻嘻! 
 */
