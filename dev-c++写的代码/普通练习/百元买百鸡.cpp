/*		2019��9��15��16:46:49  
		�е÷���
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
					��Ϊz/3��ʹ���� 
 					printf("%d %d %d\n",x,y,z);
				}	
	*/
	for(x=0;x<=14;x++)
		for(y=0;y<=25;y++)
			if(7*x+4*y == 100)//��ȥz֮�� 
		{
			z=100-x-y;
			printf("%d %d %d\n",x,y,z);
		}				
	return 0;
 } 
