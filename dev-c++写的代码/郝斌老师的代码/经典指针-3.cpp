/*   19.8.12  09点52分
		指针转换成功！ 
		要改变主函数的值，必须要借用主函数的地址 
		这次为何成功，因为把*q 与*q改了 
 */

# include <stdio.h>

void huhuan3(int * p,int * q) 
//如果要互换*p和*q的值, 则t必须定义成int不能定义成int *, 否则语法出错
{
	int t;
	 
	t = *p;
	*p = *q;
	*q = t;
	
	return;
 } 
int main(void)
{
	int a = 3;
	int b = 5;
	
	huhuan3(&a,&b);
	printf("a = %d,b = %d\n",a,b);

	return 0;
 } 
 //互换成功! 
