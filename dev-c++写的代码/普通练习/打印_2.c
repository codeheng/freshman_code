/*
		2020��1��18��08:59:55
		���õݹ��ӡ 
		����ӡ�����϶�ʱ�����forѭ������ʱЧ�ʻ���� 
*/

#include<stdio.h>
void printN(int N)
{	
	if(N)
	{
		printN(N-1);
		printf("%d\n",N);
	} 
	
}
int main(void)
{
	int n;
	printf("������������");
	scanf("%d",&n);
	 
	printN(n);
	return 0;
} 
