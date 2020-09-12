/*		输出数组，并求最大值,最小值 
	2019年9月24日15:23:08 

*/
# include<stdio.h>

int main(void) 
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int max; 
	int min; 
	int i,j;
	
	min = a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",a[i][j]);
			if(max<a[i][j])
				max = a[i][j];
			if(min>a[i][j])
				min = a[i][j];
		}
		
		printf("\n");

	}	
	printf("%d %d",max,min);
	return 0;
}
