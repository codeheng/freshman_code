/*		19.8.11 14��57��
		��1��ĳ������֮�䣨���������֣����е����������������
		 ֻ�õ���main����ʵ�֣� �о�����
		 	����������Բ���
			 ���벻������� 
 */


# include <stdio.h>
 
int main(void)
{
	int val;
	int i;
	int j;
	
	scanf("%d",&val);
	for(i = 2;i<=val;++i)//Ҫ�ж�i�Ƿ�Ϊ��������Ҫ��� 
	{ 
		for(j = 2;j<i;++j)//����Ҫ���õ�j����  �ɽ������� 
		{
				if(i%j ==0)
						break;
		}
		if(j == i)
				printf("%d\n",i);
			
	}		
			 
	
	return 0;
 } 
