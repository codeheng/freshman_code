#include <stdio.h>
 int main(void)
 {
 	double n1 = 0.0;
 	double *p=&n1;
 	double n2 = 0.0;
 	double *s=&n2;
 	char n = 0;
 while (1)
 {
  	printf("请输入四则运算算式（如1+1、1-1、1*1、1/1）：\n");
 	scanf("%lf %c %lf",p,&n,s);
	
	switch(n)
 	{	
		case '+':
			printf("=%lf\n",*p + *s);
			break;
		case '-':
			printf("=%lf\n",*p - *s);
			break;
		case '*':
			printf("%lf\n",*p * *s);
			break;
		case '/':
			if(*s == 0)
			printf("\n\n\a “0”不能作除数！\n");
			else
				printf("=%lf\n",*p / *s);
			break;
		default: 
				printf("\n\n\a 您的输入有误，请重新输入！\n");
			break;
	 }
}
 	return 0;
 }
