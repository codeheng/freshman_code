# include <stdio.h>

int main(void)
{
	int i = -5;
	int j = 10;
	int k;
	
	k = i&j;
	printf("k = %d\n",k);
	
	k = i&&j;//&&这是逻辑运算符，k的值只能是1或者0 
	printf("%d\n",k); 
	
	
	return 0;
 } 
 /*	 输出结果
 k = 10
1

第一种转化为二进制，任何按位与即可！
第二个根据真假判断就行，非0就是真 
--------------------------------
Process exited after 0.2758 seconds with return value 0
请按任意键继续. . 
 
 */
