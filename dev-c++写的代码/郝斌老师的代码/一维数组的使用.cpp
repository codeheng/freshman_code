/* 		19.8.10 15��15��
		 
 */ 


# include <stdio.h>

int main(void)
{
	int a[5];//��д�����{}����� ��ʾ����������ֵ 
	int i;
	
	scanf("%d",&a[0]);
	printf("a[0] = %d\n",a[0]);
	
	scanf("%d",&a[3]);
	printf("a[3] = %d\n",a[3]);
	
	for(i = 0;i<5;++i)
			printf("%d ",a[i]);
	 
	
	
	return 0;
 } 
 /*  	������
 1
a[0] = 1
2
a[3] = 2
1 0 58 2 0 ֻ��a[0],a[3]��λ����ֵ������Ķ�������ֵ 
 
 */ 
