/* 		19.8.11 14��31��
		�ж�һ�����Ƿ�Ϊ����������
		 ���������ʲô���⣬ �м���Ҫ����forѭ�� 
		 ���������ʲ��ߣ����Կ����ú��� 
*/

# include <stdio.h>

int main(void)
{
	int val;
	int i;
//	printf("����������Ҫ���������!\n"); 
	scanf("%d",&val);
	for(i = 2;i<val;++i) 
	{
			if(val%i ==0)
					break;
	}
	if(i == val)
			printf("yes\n");
	else
			printf("no\n");
	return 0;
 } 
