// 时间  19.8.6 15点31分
  // 总结  仍是关于分号问题 if else 总在时 后面一定不能加；  


# include <stdio.h>

int main(void) 
{
	if(1>2)// 这里不可以加分号  加分号会使else孤立，导致bug，编译错误。 
		printf("哈哈!\n");
	else
		printf("嘿嘿!\n");
	
	return 0;
}
