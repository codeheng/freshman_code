//ʱ��  19.8.6 15��14��
 //  �ܽ�  ��Ҫ�������ֵĻ�������if���ж�  ����� �м� ��С �������м���
    //���̼������� 

# include <stdio.h>

int main(void) 
{
	int a,b,c;
	int t;
	
	printf("�������������� �м��Կո�ָ�");
	scanf("%d %d %d",&a,&b,&c);
	//��д������� a�����ֵ b�м�ֵ c��Сֵ// 
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	
	 } 
	 
	 if(a<c)
	 {
	 	 t = a;
	 	 a = c;
	 	 c = t;
	 	 
	 }
	 if(b<c)
	 {
	 	 t = b;
	 	 b = c;
	 	 c = t;
	 }
	printf("%d %d %d\n",a,b,c);
	return 0;
}
