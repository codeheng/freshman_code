/*	 2019年8月16日  14点26分
		一个指针变量，不论它指向的变量占几个字节
		它本身占的字节数都相同
		32位电脑  占4个字节
		64位	占8个字节 
*/ 

# include <stdio.h>

int main(void)
{
	char ch = 'A';//单引号必须要加 
	int i = 99; 
	double x = 66.6;
	char * p = &ch;
	int * q = &i;
	double * r = &x;
	
	printf("%d %d %d\n",sizeof(p),sizeof(q),sizeof(r));
	
	return 0;
}
/*	输出结果
8 8 8

--------------------------------
Process exited after 0.1068 seconds with return value 0
请按任意键继续. . 
*/ 
