/*		2019��9��1�� 08��41��   

*/ 

# include <stdio.h>

int main(void)
{
	int c;
	c = getchar();
	
	while (c != EOF)//end of file �����ļ�  �ж��Ƿ�Ϊ�ļ������ı�־ 
	{
		putchar(c);
		c = getchar();
	}
	
	return 0;
}
