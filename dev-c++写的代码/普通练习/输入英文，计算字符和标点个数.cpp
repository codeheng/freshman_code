/*		2019年9月5日 07点43分  

*/


# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int n = 0;
	char c;
	printf("请在下行输入一句英文：\n");
	while((c=getchar())!='\n') 
		{
			if(c== ' ')
				continue;
				n++;
		}
	printf("这句英文的字符数是：%d个\n",n);
	system("pause");
	
	
	
	return 0;
}
