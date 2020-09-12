/*		19.8.4 16点31分
		总结
		两者结果相同  说明
		 一维数组名 是一个指针变量 
		 他存放的是 一维数组第一个元素的地址 
*/ 

# include <stdio.h>

int main (void) 
{
	int a[5];//a是数组名，5是数组元素的个数 ，元素就是a[0]到a[4] 
//	int a[3][4];
	
	printf("%#X\n",a);
	//printf("%#X\n",a[0]);//a[0]代表数组中第一个元素，但并没赋值，所以应该是个垃圾值
	 printf("%#X\n",&a[0]);//此时代表第一个元素的地址 
	
	return 0;
}
/*输出结果
0X62FE00
0X62FE00

--------------------------------
Process exited after 0.134 seconds with return value 0
请按任意键继续. . .


 
*/ 
