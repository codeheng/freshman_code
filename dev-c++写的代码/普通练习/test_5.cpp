/*
		2019年12月26日18:33:30  
			关于前后自增 
*/

# include<stdio.h>
int main(void)
{
	int a,b,c;
	int d;

	a = 2;
	b = 2;
	c = 2;

//	d = a+++b+++c++;
//	printf("d = %d",d);//d = 6
	
//	d = ++a + ++b;
//	printf("d = %d",d);//d = 6!
	
	d = a+++b++;	//d = 4!
	printf("d = %d",d);
	
	return 0;
} 
