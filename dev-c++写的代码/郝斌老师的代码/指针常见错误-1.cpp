# include <stdio.h>

int main(void)
{
	int * p;//局部变量 ，不初始化的话，里面就是垃圾值 
	int i = 5;
	
	*p = i;//i是int类型 *p也是int 类型 
	printf("%d\n",*p); //这个指针也有指向，若没指向表示是空的，p里面是一个垃圾值 
				//即*p就代表我们不知道的一个单元 ，就把5赋给了一个不知道的单元
				//本来就分配你i和p的空间，现在你把一个不属于你的空间改了肯定不行啊 
				//不同软件执行处理结果有差异 
	
	
	return 0;
 } 
 
 /*  输出结果
 	
--------------------------------
Process exited after 0.5753 seconds with return value 3221225477
请按任意键继续. . .
  
 */ 
