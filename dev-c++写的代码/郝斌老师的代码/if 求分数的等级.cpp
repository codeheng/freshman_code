/*		时间  19.8.4 18点13分
		总结 按照程序流程顺序依次写  注意if else用法 

*/


# include <stdio.h>

int main(void)
{
	float score;
	printf("请输入您的考试成绩");
	scanf("%f",&score);
	
	if(score > 100)
			printf("这是做梦!\n");
	else if (score>= 90 && score <= 100)
			printf("优秀!\n");
	else if (score>=80 && score <90)
	 		printf("良好!\n");
	else if (score>= 60 && score < 80)
			printf("及格!\n");
	else  
		printf("不及格！加油!\n");	
	
	
	
	return 0;
 } 
