/*   19.8.10 07��33��
	 continue ������������ѭ�����µ���䣬
	 תȥ�ж��Ƿ���Ҫִ���´�ѭ���� 
	for(1,2,3)
	{
		A;
		B;
		continue��//���ִ�еĻ���ִ�еĻ����ִ���������CD��������ȥ
		  					CD���ᱻִ�� 
		C;
		D; 
	} 
*/

# include <stdio.h>

int main(void)
{
	int i;
	char ch;
	
	scanf("%d",&i);
	printf("i = %d\n",i); 
	
	while ((ch = getchar())!='\n') 
		continue;	
	int j;
	scanf("%d",&j);
	printf("j = %d\n",j);
	
	return 0;
}
