//时间  19.8.1  15点35分
 


# include <stdio.h>

int main(void)
{
	//	int i = 2147483648;  //输出结果为-2147483648
	//	int i = 2147483649; //错误
		int i = 2147483647;  // 输出为2147483647 
		
		printf("i = %d\n",i);
	
	
	
		return 0;
}
