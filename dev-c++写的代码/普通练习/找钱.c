/*
		2020年1月15日15:17:20 
*/ 

# include <stdio.h>

int main(void)
{
	int price = 0;
	printf("%请输入金额(元)");
	scanf("%d",&price);
	
	int change = 100 - price;//c99标准 可以这样写 
	printf("找您%d元\n",change);
	 
	
	return 0;
} 
