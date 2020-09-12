/*		2019年9月15日16:46:49  
		列得方程
		  x+y+z=100
		  5x+3y+z/3=100

 */ 
# include <stdio.h>

int main(void)
{
	int x,y,z;
	/*
	for(x = 0;x <= 100;x++)
		for(y = 0;y <= 100;y++)
			for(z = 0;z <= 100;z++) 
				{
					if((x+y+z == 100) && (5*x+3*y+z/3 == 100))
					因为z/3会使解变多 
 					printf("%d %d %d\n",x,y,z);
				}	
	*/
	for(x=0;x<=14;x++)
		for(y=0;y<=25;y++)
			if(7*x+4*y == 100)//消去z之后 
		{
			z=100-x-y;
			printf("%d %d %d\n",x,y,z);
		}				
	return 0;
 } 
