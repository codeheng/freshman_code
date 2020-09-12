/*   
    时间 19.8.1 15点25分
	目的  测试 %x %X %#x %#X 的用法
*/ 


#include <stdio.h>

int main(void)
{
		int x = 47; 
		
		printf("%x\n",x);// 输出结果为2f
		printf("%X\n",x);//  输出结果为2F
		printf("%#X\n",x);  // 输出结果为 0X2F （推荐使用） 
		printf("%#x\n",x);  // 输出结果 为  0x2f 
	
	
	
	
	return 0;
}
