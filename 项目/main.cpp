#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int high,width;			// �ߴ� 
int ball_x,ball_y;		//С��λ��
int ball_vx,ball_vy;	//С���ٶ�
int position_x,position_y; //��������λ��
int radious;//				�뾶
int left,right;			//��������������ұ�
int ball_number;		//��¼���˶��ٴ�
int block_x,block_y;	//����λ�� 
int score;				//��������ĸ��� 


void gotoxy(int x,int y)//��������������������ƶ���ԭ��λ�ý����ػ�
{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		//HANDLE ��Ϊ��� ���ܹ���һ����ֵ����һ������ݵĶ��������Խ������
		//GetStdHandle��һ��Windows API�����������ڴ�һ���ض��ı�׼�豸����׼���롢��׼������׼������ȡ��һ�������������ʶ��ͬ�豸����ֵ��
		COORD pos;// COORD��Windows API�ж����һ�ֽṹ����ʾһ���ַ��ڿ���̨��Ļ�ϵ����ꡣ
		pos.X = x;
		pos.Y = y;
		SetConsoleCursorPosition(handle,pos);//SetConsoleCursorPosition��һ��window api;���������ÿ���̨(cmd)���λ��
}

void HideCursor()//�������ع��
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};  // �ڶ���ֵΪ0��ʾ���ع��
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);		
}

void startup()
{
	high = 20;
	width = 30;

	ball_x = 0;
	ball_y = width/2;

	ball_vx = 1;
	ball_vy = 1;
	position_x = high ;
	position_y = width/2;
	radious = 4;
	left = position_y - radious;
	right = position_y + radious;
	ball_number = 0;
	block_x = 0;
	block_y = width/2 + 1;
	score = 0;

	HideCursor();
}

void show()
{
	int i,j;
	gotoxy(0,0);
		for(i=0;i<=high;i++)
		{
				for(j=0;j<=width-2;j++)
				{
					if((i == ball_x)&&(j == ball_y))
					{
							printf("*");//���С��
					}
					else if(i == high)
						printf("-");//�±߽�
					else if(j == width)
						printf("|");//�ұ߽�
					else if((i == high-1)&&(j >= left)&&(j<=right))
						printf("*");
					else if((i == block_x)&&(j == block_y))
						printf("B");
					else 
						printf(" ");
				} 
				printf("\n");
		}
		printf("����С������%d\n",ball_number);
		printf("�����ķ�������%d\n",score);

}	
void updateWithoutInput()
{
	if(ball_x == high-1)//��ʾ�����ڵ����м�
	{
		if((ball_y>=left)&&(ball_y<=right))
		{
			ball_number++;
			ball_vy = -ball_vy;
		}
		else 
			printf("Game Over!");
			system("pause");
			exit(0);
	}
	if((ball_x == block_x)&&(ball_y == block_y))
			{
				score ++;
				block_y = rand()%width;
			}
	//�����ٶȸ���С��λ��
	ball_x = ball_x + ball_vx;
	ball_y = ball_y + ball_vy;

	//�����߽磬�ı��ٶȷ���,ʹ�䷴��

	if((ball_x == 0)||(ball_x == high))
		ball_vx = -ball_vx;
	if((ball_y == 0)||(ball_y == width))
		ball_vy = -ball_vy;

	Sleep(50);
}

void updateWithInput()
{	
	char input;
	if(kbhit())
	{
		input = getch();
				if (input == 'a')
				{	position_y--;//����
					left = position_y - radious;
					right = position_y + radious;
				}
				if (input == 'd')
				{
					position_y++;//����
					left = position_y - radious;
					right = position_y + radious;
				}

	}
}
		
	

int main(void)
{
	startup();//���ݳ�ʼ��
	
	while(1)//ѭ��ִ��
	{
		show();//��ʾ����
		updateWithoutInput();//�������޹صĸ���
		updateWithInput();
	}
	return 0;
}

