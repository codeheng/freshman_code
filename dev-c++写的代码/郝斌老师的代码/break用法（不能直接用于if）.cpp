/*  19.8.9 15点51分

   break不能用于if 除非if是循环内部的子句 

*/ 

# include <stdio.h>

int main(void)
{ 
	int i;
	
/*	switch (2)
	{
	case 2:    //必须要加空格，不然不显示结果。 
		printf("哈哈!\n");
		break;  
	} 
*/	
	
	for(i = 0;i<3;++i)
	{
		if(3>2)
			break;//若把break注释掉，则输出三个 嘿嘿 
		printf("嘿嘿!\n");
	}
	return 0;//永远不会显示输出结果  因为break控制的时for循环不是if 
 } 
