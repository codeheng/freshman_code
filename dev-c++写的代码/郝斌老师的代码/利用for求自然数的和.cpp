/*  ʱ�� 19.8.7 14��23��
    Ŀ�� ����Ȼ��1��100�ĺ� 
    �ܽ� for��Ӧ�� 
    	for(1;2;3)     ��1��2��2������A����3 ѭ�������ٵ�2 
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
	return 0;//������Ϊ5050 
 } 
