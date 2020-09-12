/*		19.8.14 17点48分
		要知道第9行的pArr[3]和 15，17行的a[3]是同一个变量 
*/

#  include <stdio.h>

void f(int * pArr,int len)
{
	pArr[3] = 88;//9行 
}
int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	
	printf("%d\n",a[3]);//15行 
	f(a,6);//通过调用函数，把a[3]的值改成88了 
	printf("%d\n",a[3]);//17行 

	return 0;
}
/*	输出结果
4
88

--------------------------------
Process exited after 0.2946 seconds with return value 0
请按任意键继续. . . 
*/ 
