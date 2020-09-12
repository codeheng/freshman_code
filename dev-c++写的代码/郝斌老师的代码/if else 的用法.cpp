/*   时间 19 .8.4  17点55分
  	测试 if else 的基本用法 都是只控制一个语句。
  	下面如果加上printf("哈哈!\n");这个的话 程序就会出错
  	因为 执行完printf("有两个解!\n"); 后就会执行那个 但后面的else if 则产生了中断
  	独立开了，他没法单独存在，因此编译错误。

 */ 


# include <stdio.h>

int main(void)
{
	double delta = 2;
	
	if(delta > 0)	
			printf("有两个解!\n");
	//printf("哈哈!\n");//
	else if(delta ==  0)
			printf("有一个唯一解!\n");
	else 
	 		printf("无解!\n");
	
	
	return 0;
}
