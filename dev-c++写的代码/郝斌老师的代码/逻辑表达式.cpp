/*   时间  19.8.4 16点23分
    测试  关于 逻辑表达式的输入问题
	总结   以下程序不论分数score 等于多少 ，输出的均是1
	      	因为 (90 <= score <= 100)表达式  从左向右进行逻辑判断
			   90 <= score 不论多少 要么真  要么假 即逻辑值1or0
			   不论如何都满足右面的式子  所以是真 故为1 
			    



*/ 


# include <stdio.h>

int main(void)
{
	float score = 80;
	
	int i = (90 <= score <= 100);//(90 <= score && score<= 100) 才是标准的 
	
	printf("%d\n",i);//输出结果为1 
	
	
	
	
	
	return 0;
 } 
