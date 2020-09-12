/*  19.8.8  14点15分 
    分清for循环的是哪部分，{}括起来表示是个一部分，没括只控制一个语句 
*/
# include <stdio.h>

int main(void)
{
	int i,j;
	
	for(i = 0;i<3;++i)
	{
			printf("哈哈\n");
			for(j = 2;j < 5;++j)
			{	
				printf("嘿嘿\n");
				printf("嘻嘻\n");
	
			}
			printf("呵呵\n");	
		
	}
	
	
	return 0;
 } 
 
 /* 输出结果 
哈哈
嘿嘿
嘻嘻
嘿嘿
嘻嘻
嘿嘿
嘻嘻
呵呵

哈哈
嘿嘿
嘻嘻
嘿嘿
嘻嘻
嘿嘿
嘻嘻

呵呵
哈哈
嘿嘿
嘻嘻
嘿嘿
嘻嘻
嘿嘿
嘻嘻
呵呵
 
 
 */
