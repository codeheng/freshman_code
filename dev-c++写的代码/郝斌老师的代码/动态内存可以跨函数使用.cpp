//  2019年8月20日  09点14分	 
# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int*)malloc(sizeof(int));//等价于p =(int*)malloc(sizeof(int)) 
	//q = 5;//错误 
	//*q = 5;//error，等价p = 5 
	**q = 5;//等价于*p = 5 
	
}
int main(void)
{
	int * p;
	
	f(&p);
	printf("%d\n",*p);
	
	
	return 0;
 } 
 /*		输出结果
 5

--------------------------------
Process exited after 0.0922 seconds with return value 0
请按任意键继续. . . 
 
 */ 
