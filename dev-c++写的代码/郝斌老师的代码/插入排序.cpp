#	include<stdio.h>
#define N 8

//Êä³öÊı×é 
void printArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n"); 
}
int main(void) 
{
	int a[N] = {1,5,4,3,9,8,7,2};	
	
	printArray(a,N);
}
