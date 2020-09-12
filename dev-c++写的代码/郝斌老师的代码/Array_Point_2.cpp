/*
			2019Äê10ÔÂ20ÈÕ10:21:14
			 
*/ 

#include <stdio.h>

void Show_Array(int *p,int len)
{
	int i = 0;
	
	for(i = 0;i<len;i++)
			printf("%d\n",p[i]);
}

int main(void)
{
	int a[5] = {1,2,3,4,5};
	
	Show_Array(a,5);
	
	return 0;
 } 
