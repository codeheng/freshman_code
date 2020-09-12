#include<stdio.h>
void dec2oct(int x)
{
	if(x>1)
	dec2oct(x/8);
    printf("%d",x%8);
}

int main()
{	
	int x;
	scanf("%d",&x);
	dec2oct(x);
    return 0;
}
