/*   19.8.12  09��19��
		 �����������֣��ø����� 
 */ 

# include <stdio.h>

void huhuan1(int a, int b)
{ 
	int t;
	
	t = a;
	a = b;
	b = t;
	
	return; 
} 

int main(void)
{
	int a = 3;
	int b = 5;
	
	huhuan1(a,b);
	printf("a = %d,b = %d\n",a,b);
	
	
	return 0;//������ɻ������� 
}
/*  	������
a = 3,b = 5

--------------------------------
Process exited after 0.1011 seconds with return value 0
�밴���������. . .

���ú�����û��ʵ�ֻ����� Ҳ�����βλ����ˣ�ʵ�β�Ҳ�л��� 
 
 */ 

