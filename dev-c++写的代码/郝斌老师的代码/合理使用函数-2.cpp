/*   19.8.11 14��50��
		������������ж�������ֻҪ�����������棬���Ƿ��ؼ� 
*/ 

# include <stdio.h>

bool IsPrime(int val)
{
	
	int i ;
	for (i = 2;i<val;++i)
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
	//printf("����������Ҫ���������!\n"); 
	scanf("%d",&val);
	if(IsPrime(val))//����͸��Ӽ�㣬����棬����� 
		printf("yes\n");
	else
		printf("no\n");
	
	return 0;
 } 
