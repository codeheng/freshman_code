/*   19.8.8 14点36分
	 i = (3>2?5:12);等价于
	 if(3>2)
	 	5;
	 else
	 	12; 

*/ 


# include <stdio.h>

int main(void)
{
	int i;
	
	i = (3>2?5:12);
	printf("%d\n",i);
	
	return 0;// 输出结果为5  
 } 
