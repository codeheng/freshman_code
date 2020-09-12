/*		19.8.14 17点15分
		借用函数可以输入任何一个一维数组的内容 
		需要两个参数
		要确定第一个元素的地址 和 数组的长度 
*/ 

# include <stdio.h>

void f(int * pArr,int len)
{
	int i;
	
	for (i = 0;i<len;++i)
		printf("%d ",*(pArr+i));//不可以写%d\n，否则不对 
	printf("\n");
		
}
int main(void)
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {-1,-2,-3,4,5,-6};
	int c[100] = {1,99,22,33};//后面没赋值的都是垃圾值，不用管 
	
	f(a,5);
	f(b,6);
	f(c,100);
	
	
	return 0;
 } 
 /*  输出结果
 1 2 3 4 5
-1 -2 -3 4 5 -6
1 99 22 33 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

--------------------------------
Process exited after 0.3006 seconds with return value 0
请按任意键继续. . .



 
 */
