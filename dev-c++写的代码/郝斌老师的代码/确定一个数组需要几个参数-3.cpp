/*    2019年8月14日 18点10分
		 

*/ 

# include <stdio.h>

void f(int * pArr,int len)
{
	int i;
	for(i = 0;i<len;++i)
		printf("%d ",pArr[i]);//*(pArr+i) 等价于 pArr[i]  也等价于 b[i] 也等价于 *(b+i) 
 
	printf("\n");
}
int main(void)
{
 	int b[6] = {-1,-2,-3,4,5,-6};
 	
 	f(b,6);
 	
	
	
	return 0;
 } 
 /*输出结果
 -1 -2 -3 4 5 -6

--------------------------------
Process exited after 0.2444 seconds with return value 0
请按任意键继续. . . 
 */ 
