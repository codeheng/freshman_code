/*		2019年9月5日  08点18分  

		弄清中间的for循环 如何实现的
				先输入空格 然后再输入* 
*/

# include <stdio.h>
# include <stdlib.h> 

int main(void)
{	
	int i,j,k,n;
	printf("本程序画*组成的等腰三角形，它的行数是(<26):");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
		{
			for(j=1;j<=n-i;++j)
				printf(" ");
			for(k=1;k<=2*i-1;++k)//等腰三角形，* 成1、3、5、7、9。。排列 
				printf("*");
			printf("\n");
		}
	
	system("pause");
	
	return 0;
}
