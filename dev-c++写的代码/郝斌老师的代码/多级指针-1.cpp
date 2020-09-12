/*	2019年8月20日  08点29分
		 


*/ 

# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i;//p只能存放int类型变量的地址 
	int ** q = &p;// q是int**类型的， 所谓int**类型就是指q只能存放int**类型变量的地址 
	int *** r = &q;//r是int***类型，所谓int***类型就是
					//r只能存放int**类型变量的地址 
	//r = &p;//错误，因为r只能存放int**类型的地址，是地址 
	
	printf("i = %d\n",***r);
	//*r = q，*q = p，*p = i，即***r = i 
	
	
	return 0;
 } 
 /*	输出结果
 i = 10

--------------------------------
Process exited after 0.1468 seconds with return value 0
请按任意键继续. . . 
 
 */ 
