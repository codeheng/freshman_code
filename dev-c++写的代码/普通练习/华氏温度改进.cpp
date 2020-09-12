/*		2019年9月1日 08点27分  
	#define 名字 替换文本
	相当于查找加替换 

*/

# include <stdio.h>
# define a 0
# define b 300
# define c 20

int main(void)
{
	int fahr;
	for(fahr = a;fahr <= b;fahr+=c)
		printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));	
	
	
	return 0;
}
