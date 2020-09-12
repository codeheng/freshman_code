/*		2019年9月1日 08点41分   

*/ 

# include <stdio.h>

int main(void)
{
	int c;
	c = getchar();
	
	while (c != EOF)//end of file 结束文件  判断是否为文件结束的标志 
	{
		putchar(c);
		c = getchar();
	}
	
	return 0;
}
