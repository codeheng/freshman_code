# include<stdio.h>
#define N 5
int main(void)
{
	int i,j,s[N];
	int temp;
	printf("ÇëÊäÈëÕûÊı");
	for(i=0;i<N;i++)
	{
		scanf("%d",&s[i]);
	}	
	for(i=0;i<N-1;i++)
	{
		for(j = 0;j<N-(i+1);j++)
			{
				if(s[j]>s[j+1])
				{
					temp = s[j];
					s[j] = s[j+1];
					s[j+1] = temp;
				}
			}
	}	
	for(i=0;i<N;i++)
		printf("%3d",s[i]);
	printf("\n"); 	 
} 
