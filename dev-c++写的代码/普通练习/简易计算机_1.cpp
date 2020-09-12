#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int i,a,b,c;

	printf("请选择运算种类：\n");
	printf("1-加法\n");
	printf("2-减法\n");
	printf("3-乘法\n");
	printf("4-除法\n");
	scanf("%d",p);
	printf("请输入第一个数字：\n");
	scanf("%d",q);
	printf("请输入第二个数字：\n");
	scanf("%d",r);
	switch(i)
	{
		case 1:*t=*q+*r;
			printf("您得到的式子为：\n");
			printf("%d + %d = %d\n",*q,*r,*t);
				break;
		case 2:*t=*q-*r;
			printf("您得到的式子为：\n");
			printf("%d - %d = %d\n",*q,*r,*t);
				break;
		case 3:*t=(*q)*(*r);
			printf("您得到的式子为：\n");
			printf("%d x %d = %d\n",*q,*r,*t);
				break;
		case 4:*t=(*q)/(*r);
			printf("您得到的式子为：\n");
			printf("%d ÷%d = %d\n",*q,*r,*t);
				break;
		default:
			printf("您的输入有误，请重新输入！");
				break;	
	}
}

