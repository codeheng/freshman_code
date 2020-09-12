/*  时间 19.8.7 14点23分
    目的 求自然数1到100的和 
    总结 for的应用 
    	for(1;2;3)     先1再2，2成立再A，再3 循环结束再到2 
    	   	  A
*/ 


# include <stdio.h>

int main (void)
{
	int i;
	int sum = 0;
	
	for(i = 1;i<=100;++i)
		sum = sum + i;
		
		printf("sum = %d\n",sum);	
	return 0;//输出结果为5050 
 } 
