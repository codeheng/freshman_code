/*		2019年8月23日 14点41分 
	|  按位或
	|| 逻辑或
	即1|0 = 1;
	
	~ 表示按位取反
	
	<<左移 右边补0 
	>>右移 一般左边补0 

*/ 

# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int k,l,m;
	
	k = i|j;
	printf("k = %d\n",k);
	
	l = ~i;
	printf("l = %d\n",l);
	
	m = i << 1;
	printf("m = %d\n",m);
	
	return 0;
}
/*		输出结果
k = 7
l = -4
m = 6

--------------------------------
Process exited after 0.2491 seconds with return value 0
请按任意键继续. . .
 

*/ 
