/*
		2020��1��15��14:40:44
		շת������ж�������� 
*/

# include<stdio.h>
int main(void)
{
	int a,b,temp;
	printf("��������������");
	scanf("%d %d",&a,&b);
	
	while(a!=0)
	{
		temp = b % a;
		b = a;
		a = temp;
	} 
	
	printf("���Լ��Ϊ%d\n",b);
	
	return 0;
} 
