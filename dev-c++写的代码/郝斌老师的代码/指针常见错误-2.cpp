# include <stdio.h>

int main(void)
{
	int i = 5;
	int * p;
	int * q;//q没赋值，就表示是垃圾值。但是不能对*q内容读取，*q代表另一个单元 
	
	p = &i;
//	*q = p; //错误 前面*q是int类型，后面p是int *类型 
//	*q = *p;//错误 q没赋值 类似与 指针常见错误-1.cpp 
	p = q; //q是垃圾值，q赋给p，p也成了垃圾值 
	/* q的空间是属于本程序的，所以本程序可以读写q的内容
		但是如果q内部的是垃圾值，则本程序不能读写*q的内容
		因为此时*q所代表的内存单元的控制权限并没有分配给本程序
		所以本程序运行到12行不可读 
		
		q里面有垃圾值，就有指向，它指向的地址，是垃圾值对应的内存单元，
		那个内存单元没有被分配给本程序，所以本程序没有权限读取 
		若把不属于自己的给改了，就形成了病毒 
	 */ 
	
	
	printf("%d\n",*q);//*q代表你不能控制的一个单元 
	
	
	return 0;
}
