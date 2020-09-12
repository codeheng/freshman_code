/*   19.8.10 07点33分
	 continue 用于跳过本次循环余下的语句，
	 转去判断是否需要执行下次循环。 
	for(1,2,3)
	{
		A;
		B;
		continue；//如果执行的话，执行的话则会执行语句三，CD都会跳过去
		  					CD不会被执行 
		C;
		D; 
	} 
*/

# include <stdio.h>

int main(void)
{
	int i;
	char ch;
	
	scanf("%d",&i);
	printf("i = %d\n",i); 
	
	while ((ch = getchar())!='\n') 
		continue;	
	int j;
	scanf("%d",&j);
	printf("j = %d\n",j);
	
	return 0;
}
