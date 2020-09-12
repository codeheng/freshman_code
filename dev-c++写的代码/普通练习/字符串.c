/*
		2020年1月15日14:52:28
		字符串 和 字符数组 
*/

#include<stdio.h>
int main(void)
{
	char world1[] = {'H','e','l','l','o','!'}; //字符数组 
	char world2[] = {'H','e','l','l','o','!','\0'};//字符串 
	char world3[] = "Hello"; //此时hello会被编译器变成一个字符数组存在某处，这个数组长度为6，结尾有0
	
	
	printf("%c\n",world1[2]);
	printf("%c\n",world2[2]);
	printf("%c",world3[2]);
	
	return 0;
}
/*
输出结果
l
l
l
--------------------------------
Process exited after 0.02548 seconds with return value 0
请按任意键继续. . .

 
 
字符串：
	以0结尾的一串字符
	0和'\0'是一样的
	0标志字符串的结束，但不属于字符串的一部分
	字符串以数组的形式存在 
*/ 
