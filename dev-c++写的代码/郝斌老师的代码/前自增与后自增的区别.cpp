/*		 19.8.8 14点46分
 总结:
		前自增整体表达式的值是i加1之后的值
		后自增整体表达式的值是i加1之前的值
 

 */ 


# include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	
	i = j = 3;
	k = i++;//后自增 
	m = ++j;//前自增 
	
	printf("i = %d,j = %d,k = %d,m = %d\n",i,j,k,m);
	
	
	return 0;
}
/* 输出结果 
i = 4,j = 4,k = 3,m = 4

--------------------------------
Process exited after 0.291 seconds with return value 0
请按任意键继续. . .


*/ 
