/*		时间 19.8.6 14点53分
		总结  互换两数的时候 需要引入中间变量
			 此过程要熟记！  


*/ 


# include <stdio.h>

int main(void)
{		int i = 6;
		int j = 8;
		int t;
		
		t = i;
		i = j;
		j = t;
		
		printf("i = %d,j = %d\n",i,j);
	
	
	
	
	return 0;
 } 
