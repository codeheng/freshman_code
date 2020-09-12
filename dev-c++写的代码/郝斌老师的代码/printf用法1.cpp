/*时间 19.8.1  15点10分 
目的  测试 printf的用法
	printf("字符串")；
	printf("输出控制符","输出参数");
	printf("输出控制符1，输出控制符2.....","输出参数1,输出参数2....")； 
	printf("输出控制符 非输出控制符",输出参数)； 
*/

#include <stdio.h>

int main(void)
 {
 	//printf("哈哈!\n");// \n表示换行 
 	
 //	int i = 10;
 //	printf("%o\n",i);//  d表示十进制 o八进制
 
 
 	int j = 3;
	int k = 5;
//	printf("%d %d\n",j,k);//正确
//	printf("%d\n",j,k);// 错误 因为输出控制符与输出参数个数不匹配
	printf("i = %d,j = %d\n",j,k);
	 

 	
 	
 	
 	return 0;
 }
