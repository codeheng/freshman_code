/*时间  19.8.3  19点57分
  目的  测试 scanf 的用法   
  总结   scanf 是通过键盘将数据输入到变量中  注意当输入时非输入控制符必须原样输入 
 
*/ 
# include <stdio.h>

int main(void)
{
	int i;
	char ch;
	
	scanf("%d",&i);   // &是取地址符 
	printf("i = %d\n",i);
	scanf("%c",&ch);
	printf("ch = %c\n",ch);
	
	
	
	
	
	
	return 0;
}
