# include<stdio.h>
int main(void)
{
	int array[3][3] = {{1,4,7},{2,5,8},{3,6,9}};
	int i,j;
	int s;
	for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", array[i][j]);  //原来的矩阵 
        printf("\n");
    }    
	for(i=0;i<3;i++)
		for(j=0;j<i;j++)
		{
			s = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = s; 
		}		
	for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", array[i][j]);  //转置以后的矩阵 
        printf("\n");
    }			
	return 0;
} 
