//  2019��8��20��  09��14��	 
# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int*)malloc(sizeof(int));//�ȼ���p =(int*)malloc(sizeof(int)) 
	//q = 5;//���� 
	//*q = 5;//error���ȼ�p = 5 
	**q = 5;//�ȼ���*p = 5 
	
}
int main(void)
{
	int * p;
	
	f(&p);
	printf("%d\n",*p);
	
	
	return 0;
 } 
 /*		������
 5

--------------------------------
Process exited after 0.0922 seconds with return value 0
�밴���������. . . 
 
 */ 
