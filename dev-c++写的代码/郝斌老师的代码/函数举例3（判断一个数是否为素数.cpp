/*   19.8.10 20��26��
		������Ӧ�� ����ж�����
		��ε��õĺ�������ôʵ�ֵġ� 
*/ 


# include <stdio.h>

bool IsPrime(int val)//IsPrime ���Ǳ�ʾ��������˼
					// bool��һ���������͵���ֻ������ѡ��
					//���� ��true or false�� 
{
		int i;
		
		for(i = 2;i<val;++i)
		{
				if(val%i == 0)
						break;  //����������̿��������� 
				
		}
		if(i == val)
				return true;
		else
				return false; 
}	
int main(void)//main ����������Ҫ�����Ƚ��С� 
{
		int m;
		
		scanf("%d",&m);
		if(IsPrime(m))//ִ�е���һ���ͻ��ж��Ƿ��к������Դ˵��ú���
						// ���������վ���true����false  
				printf("yes\n");
		else
				printf("no\n");
		
		return 0;
 } 
