/*	 2019年8月16日  14点20分
	malloc 是memory（内存）allocate（分配）的缩写 

*/ 


# include <stdio.h>
# include <malloc.h>//不能省，动态分配头文件 

int main(void)
{
	int i = 5;//分配了4个字节，静态分配！ 
	int * p = (int *)malloc(4);//强制转换成int * 类型 
	/*
	1、要使用malloc函数，必须添加malloc.h的头文件
	2、malloc函数只有一个形参，并且形参是整型
	3、malloc里面的4是表示请求系统为本程序分配四个字节
	4、malloc函数只能返回第一个字节的地址
	5、若32位电脑，则13行分配了8个字节，p变量占4个，p指向的内存也占4个
			若64位，则p变量占8个
	6、p本身所占的内存是静态分配的，而p所指向的内存是动态分配的
	 
	*/ 
	*p = 5;//*p代表的是一个int变量，只不过分配方式与
			//12行i变量的分配方式不同。 
	free(p);
	//free(p)表示把p所指向的内存给释放掉，p本身的内存是静态的， 
	//不能由程序员手动释放，p本身的内存只能在p变量所在函数运行终止时由系统释放 
	printf("hhhh\n");
	
	return 0;
 } 
 /*	输出结果
 hhhh

--------------------------------
Process exited after 0.07683 seconds with return value 0
请按任意键继续. . . 
 */ 
