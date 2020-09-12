/*		19.8.8 14点04分
		掌握for循环嵌套使用的步骤，能推算出运算结果。 

 */ 


# include <stdio.h>

int main(void)
{
	int i,j;
	
	for(i = 0;i<3;++i)
		for(j = 2;j<5;++j)
			printf("哈哈!\n");
		printf("嘻嘻!\n");
	
	
	return 0;
 } 
 /*  输出结果为
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
嘻嘻!
 
 */ 
