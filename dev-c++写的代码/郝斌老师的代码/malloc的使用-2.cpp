/*		2019年8月16日 15点17分
		 通过调用函数，p的内容指向q，但p本身就指向sizeof（int） 
		 因此q也是指向它 
*/ 

# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
	//* p = 200;//能直接这样写不，不可以，因为没定义啊！ 若把p定义了就可以了 
//	q = 200;//不对，没法把值赋给变量地址
//	**q = 200;也不对，q代表那个地址，*q就代表那个值，但只能在指针变量前面加*
	*q = 200;//此时正确 
//	free(q);// 若把q所指向内存释放掉，会造成最后*p 无法正常读取 
}
int main(void)
{
	int * p = (int *)malloc(sizeof(int));
	*p = 10;
	
	printf("%d\n",*p);
	f(p);//现在想通过调用函数，把*p给改变了 
	printf("%d\n",*p);
	
	
	return 0;
 } 
 /*		输出结果
 10
200

--------------------------------
Process exited after 0.1091 seconds with return value 0
请按任意键继续. . . 
 
 */ 
