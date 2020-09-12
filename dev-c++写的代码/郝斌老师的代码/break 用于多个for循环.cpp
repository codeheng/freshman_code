/*  19.8.9 16点00分
	总结 break 只能终止距离它最近的那个循环	 

*/ 


# include <stdio.h>

int main (void)
{
	int i,j;
	
	for(i = 0;i<3;++i)
	{
		for(j = 1;j<4;++j)
			break;
		printf("23333\n"); // 输出结果 3个 23333 
	}
	
	
	return 0;
}
