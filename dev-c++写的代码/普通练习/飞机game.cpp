# include <stdio.h>
# include <stdlib.h>
# include <conio.h> 

int main(void)
{
	int i,j;
	int x = 10;
	int y = 5;
	char input;
	int isfired = 0;
	int iskilled = 0;
	int ny = 5;
	
	while (1)
	{
		system ("cls");
		
		if(iskilled == 0)
			for(i = 0;i < ny;i++)
				printf(" ");
			printf(" +\n");
		if (isfired == 0)	
		{
			for(i = 0;i < x;i++)
				printf("\n");
		}
		else
		{
				for(i = 0;i < x;++i)
				{
						printf(" ");
					printf("      |\n");
				}
				if (y+2 == ny)
					iskilled = 1;
				isfired = 0;
		} 
		for(j = 0;j < y;j++)
			 	printf(" ");
			printf("  *\n");
		for(j = 0;j < y;j++)
				printf(" ");
			printf("*****\n");
		for(j = 0;j < y;j++)
				printf(" ");
			printf(" * *\n");
			
		if(kbhit())//判断是否有输入
		{
			input = getch();//可根据用户的不同来移动，不必输入回车
			if(input == 'a')
				y--;//左移
			if(input == 'd')
				y++;//右移
			if(input == 'w')
				x--;//上移
			if(input == 's')
				x++;//下移

			if (input == ' ')
					isfired = 1;//表示输入空格，则就会出现竖线
		}
	}	

	return 0;
 } 
