/*   时间  19.8.4  16点17分
     目的  测试 scanf 的用法
	 
	 总结 scanf内尽量不输入非输入控制符  &取地址符必须要输入 


*/ 

# include <stdio.h>

int main(void)
{
	int i,j;
	
	printf("请输入i的值（中间以空格分隔）");
	scanf("%d %d",&i,&j);
	printf("i = %d,j = %d\n",i,j); 
	
	
	
	return 0;
 } 
