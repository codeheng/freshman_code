/*		2019年8月23日 10点55分  
 

*/ 

# include <stdio.h>

int main(void)
{
	int i = -5;
	printf("i = %#X\n",i);
	
	int j = 0xFFFFFFF5;
	printf("j = %d\n",j);
	
	char ch = 0x80;
	printf("ch = %d\n",ch);
	
	ch = 129;
	printf("%d\n",ch); 
	
	return 0;
}
/*		输出结果
i = 0XFFFFFFFB
j = -11
ch = -128
-127

--------------------------------
Process exited after 0.3083 seconds with return value 0
请按任意键继续. . .

i j的计算
 都是转换为二进制取反然后+1，然后再分别转换为16和10进制 
 第三个80先转换为二进制（四位四位看）为10000000
 说明为负数，然后取反01111111，再加+1得
 10000000 这个数对应的十进制数的加负号就是要求的数
 转换为10进制为128  因此为-128
 
 最后一个类似  转为10进制为81，然后再转为2进制10000001剩下操作一下 
超过最大正整数128后，会溢出 
*/ 
