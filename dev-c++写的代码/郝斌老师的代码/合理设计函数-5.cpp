/*   		19.8.11  15��32��
	������������ʵ����1��ĳ������֮�����е����������������
	������ �� -4.cpp ��Ƚ�
	���������٣��������Ը���
	�����βΣ��Ƕ�Ϊ���� n �� m 
	�ں��������г��ֵĲ������Կ�����һ��ռλ������û������
	ֻ�ܵȵ�����������ʱ���մ��ݽ��������ݣ����Գ�Ϊ��ʽ����������β�
 */ 


# include <stdio.h>

bool IsPrime(int m)//���������� �ж�m�Ƿ�Ϊ�������Ƿ��� true�����Ƿ���false 
{
		int i;
		
		for(i = 2;i<m;++i)
		{
				if(m%i == 0)
					break;
		}
		if(i == m)
			return true;
		else
			return false;
}
void TraverseVal(int n)//�˺������ܰ�1��n֮���������������ʾ������� 
{
		int i;
		
		for (i = 2;i<n;++i)
		{
				if(IsPrime(i))
						printf("%d\n",i);
		}
 } 
int main(void)
{
	int val;
	
	scanf("%d",&val);
	TraverseVal(val);
	
	
	return 0;
}
