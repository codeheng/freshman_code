/*	 19.8.10  15点23分
		关于维数组
		比如 int a[2][2] 总共四个元素，二行二列
		a[0][0] a[0][1]
		a[1][0] a[1][1] 
	  int a[m][n] 该二维数组右下角位置的元素只能为a[m-1][n-1] 
 */ 


# include <stdio.h>

int main(void) 
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12} 
			
	} ;
	int i,j;
	
	for(i = 0;i<3;++i)
	{
			for(j = 0;j<4;++j)
				printf("%d ",a[i][j]);
			printf("\n");//使用这个语句是使输出结果更加整齐 
	}
	return 0;
}
