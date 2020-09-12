/*   19.8.11 14点50分
		利用这个函数判断素数，只要是素数返回真，不是返回假 
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
	//printf("请您输入你要输入的数字!\n"); 
	scanf("%d",&val);
	if(IsPrime(val))//这儿就更加简便，如果真，则输出 
		printf("yes\n");
	else
		printf("no\n");
	
	return 0;
 } 
