/* 		19.8.11 15��15��
		 ��1��ĳ������֮��(����������)���е����������������
		����ý��ú��������ж�һ�������Ƿ�������
		�ŵ�:
			�����  -3.cpp  ���������
			����Ŀ������Ա�  -3.cpp ��
		ȱ�㣺
			����������Ȼ���Ƿǳ��ߣ�
			������1000�����֣�������ÿ�����ִ�1�������������
			��
					for (i=2; i<=val; ++i)
					{
						if ( IsPrime(i) )
							printf("%d\n", i);
					}
			Ҫд1000��
*/ 
# include <stdio.h>

bool IsPrime(int val)
{
		int i;
		
		for(i = 2;i<val;++i)
		{
				if(val%i == 0)
						break;
						
		}
		if(i == val)
				return true;
		else
				return false; 
}
int main(void)
{
	int val;
	int i;
	
	scanf("%d",&val);
	for(i = 2;i<val;++i)
	{
			if(IsPrime(i))
				printf("%d\n",i); 
	}
	
	
	return 0;
 } 
