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
			
		if(kbhit())//�ж��Ƿ�������
		{
			input = getch();//�ɸ����û��Ĳ�ͬ���ƶ�����������س�
			if(input == 'a')
				y--;//����
			if(input == 'd')
				y++;//����
			if(input == 'w')
				x--;//����
			if(input == 's')
				x++;//����

			if (input == ' ')
					isfired = 1;//��ʾ����ո���ͻ��������
		}
	}	

	return 0;
 } 
