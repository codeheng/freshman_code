/* 		 19.8.9 15点27分
		break 用于switch是表示终止switch
		以下程序运行过程，当 给 val =  1 时，程序就找到case1 
		与其对应。执行下面的，当找到与之匹配的后，剩余的case
		就不用管了。当遇到break 终止。 


 */


# include <stdio.h>

int main(void)
{
	int val;
	printf("请输入您要进入的楼层");
	scanf("%d",&val);
	
	switch(val)
	{
	case 1://空格一定要加 
		printf("一层开!\n"); 
	//	break;  当把这个注释掉，输入1时，那么一二层都开。 
	case 2:
		printf("二层开!\n");
		break;
	case 3:
		printf("三层开!\n");
		break;
default: 
		printf("没有盖到这一层!\n");
		break;
		
	 } 
	
	
	return 0;
}
