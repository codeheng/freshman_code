/* 		19.8.11 14点31分
		判断一数字是否为素数再讨论
		 这个代码有什么问题， 中间主要利用for循环 
		 代码利用率不高，所以可以用函数 
*/

# include <stdio.h>

int main(void)
{
	int val;
	int i;
//	printf("请您输入你要输入的数字!\n"); 
	scanf("%d",&val);
	for(i = 2;i<val;++i) 
	{
			if(val%i ==0)
					break;
	}
	if(i == val)
			printf("yes\n");
	else
			printf("no\n");
	return 0;
 } 
