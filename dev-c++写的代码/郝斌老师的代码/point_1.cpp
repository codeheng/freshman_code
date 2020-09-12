/*  
		2019年10月20日09:48:17
		指针回顾 
*/

# include <stdio.h>
int main(void)
{
	int *p;   //定义了名叫p的一个指针，此指针只能存储int类型变量的地址 
	int i = 10;
	int j;
	
	p = &i;//因为i已经赋值了，所以把i的地址给了变量p ，此时p就指向了i 
	j = *p;//此时*p就是i，就相当于把i的值给了j 
	
	printf("i = %d,j = %d,*p = %d\n",i,j,*p);
	return 0;
	
	
 } 
