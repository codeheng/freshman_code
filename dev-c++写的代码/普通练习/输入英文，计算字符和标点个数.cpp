/*		2019��9��5�� 07��43��  

*/


# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int n = 0;
	char c;
	printf("������������һ��Ӣ�ģ�\n");
	while((c=getchar())!='\n') 
		{
			if(c== ' ')
				continue;
				n++;
		}
	printf("���Ӣ�ĵ��ַ����ǣ�%d��\n",n);
	system("pause");
	
	
	
	return 0;
}
