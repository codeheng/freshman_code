/*		2019��9��5��  08��18��  

		Ū���м��forѭ�� ���ʵ�ֵ�
				������ո� Ȼ��������* 
*/

# include <stdio.h>
# include <stdlib.h> 

int main(void)
{	
	int i,j,k,n;
	printf("������*��ɵĵ��������Σ�����������(<26):");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
		{
			for(j=1;j<=n-i;++j)
				printf(" ");
			for(k=1;k<=2*i-1;++k)//���������Σ�* ��1��3��5��7��9�������� 
				printf("*");
			printf("\n");
		}
	
	system("pause");
	
	return 0;
}
