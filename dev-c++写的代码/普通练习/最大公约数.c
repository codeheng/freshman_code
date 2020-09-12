//	Õ·×ªÏà³ý·¨£¡£¡ 
#include<stdio.h>

int GetAdvisior(int a,int b)
{
	int i; 
	i = a%b; 
	while(i)
	{
		
		a = b;
		b = i;
		i = a%b;
	}
	return b;
}
int main()
{
	int result = GetAdvisior(10,25);
	printf("%d\n",result); 
	return 0;	

} 
