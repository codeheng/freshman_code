//  2019年8月20日  08点39分 
# include <stdio.h>

void f(int **q)
{
	//*q = p
}
void g()
{
	int i = 10;
	int * p = &i;
	
	f(&p);// p是int类型，因此&p是int**类型 
}
int main(void)
{	
	g();
	
	return 0;
 } 
