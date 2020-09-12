#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int high,width;			// 尺寸 
int ball_x,ball_y;		//小球位置
int ball_vx,ball_vy;	//小球速度
int position_x,position_y; //挡板中心位置
int radious;//				半径
int left,right;			//挡板最左边与最右边
int ball_number;		//记录碰了多少次
int block_x,block_y;	//方块位置 
int score;				//消掉方块的个数 


void gotoxy(int x,int y)//类似与清屏函数，光标移动到原点位置进行重画
{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		//HANDLE 称为句柄 。能够从一个数值拎起一大堆数据的东西都可以叫做句柄
		//GetStdHandle是一个Windows API函数。它用于从一个特定的标准设备（标准输入、标准输出或标准错误）中取得一个句柄（用来标识不同设备的数值）
		COORD pos;// COORD是Windows API中定义的一种结构，表示一个字符在控制台屏幕上的坐标。
		pos.X = x;
		pos.Y = y;
		SetConsoleCursorPosition(handle,pos);//SetConsoleCursorPosition是一个window api;作用是设置控制台(cmd)光标位置
}

void HideCursor()//用于隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};  // 第二个值为0表示隐藏光标
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
							printf("*");//输出小球
					}
					else if(i == high)
						printf("-");//下边界
					else if(j == width)
						printf("|");//右边界
					else if((i == high-1)&&(j >= left)&&(j<=right))
						printf("*");
					else if((i == block_x)&&(j == block_y))
						printf("B");
					else 
						printf(" ");
				} 
				printf("\n");
		}
		printf("反弹小球数：%d\n",ball_number);
		printf("消掉的方块数：%d\n",score);

}	
void updateWithoutInput()
{
	if(ball_x == high-1)//表示球落在挡板中间
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
	//根据速度更新小球位置
	ball_x = ball_x + ball_vx;
	ball_y = ball_y + ball_vy;

	//碰到边界，改变速度方向,使其反弹

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
				{	position_y--;//左移
					left = position_y - radious;
					right = position_y + radious;
				}
				if (input == 'd')
				{
					position_y++;//右移
					left = position_y - radious;
					right = position_y + radious;
				}

	}
}
		
	

int main(void)
{
	startup();//数据初始化
	
	while(1)//循环执行
	{
		show();//显示画面
		updateWithoutInput();//与输入无关的更新
		updateWithInput();
	}
	return 0;
}

