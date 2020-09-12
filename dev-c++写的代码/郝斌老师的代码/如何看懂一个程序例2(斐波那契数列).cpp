/* 	19.8.8 18点20分
	抓住三步骤  流程 功能 试数
	斐波那契数列  1 2 3 5 8 13 21 34.....
	
*/ 

# include <stdio.h>

int main(void)
{
	int n;
	int f1,f2,f3;
	int i;
	
	f1 = 1;
	f2 = 2;
	printf("请输入您需要的序列号");
	scanf("%d",&n);
	
	if(1 == n)
	{
		f3 = 1;
	 } 
	else if (2 == n)
	{
		f3 = 2;
	}
	else
	{
		for(i = 3;i<=n;++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("%d\n",f3);
	return 0;
 } 
 
 /*   试数过程
 	假如 n = 6
	  关于for循环
	1、i = 3，i< = 6,
		 f3 = 1+2=3
		 f1 = 2
		 f2 = 3
		i  = 4
	2、i = 4 , i< = 6 ;
		f3 = 2+3= 5 
		f1 =3
		f2 = 5
	3、i = 5, i< = 6
		f3 = 3+5=8
		f1 = 5 
		f2 = 8
	4、i = 6  i<= 6
		 f3 = 5+8 = 13 
		 f1 = 8 
		 f2 = 13 
		 
		即输出的为f3 = 13 
 
 
 */
