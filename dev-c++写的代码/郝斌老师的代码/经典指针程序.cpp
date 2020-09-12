/*   19.8.12  09点19分
		 互换两个数字，用个函数 
 */ 

# include <stdio.h>

void huhuan1(int a, int b)
{ 
	int t;
	
	t = a;
	a = b;
	b = t;
	
	return; 
} 

int main(void)
{
	int a = 3;
	int b = 5;
	
	huhuan1(a,b);
	printf("a = %d,b = %d\n",a,b);
	
	
	return 0;//不能完成互换功能 
}
/*  	输出结果
a = 3,b = 5

--------------------------------
Process exited after 0.1011 seconds with return value 0
请按任意键继续. . .

调用函数后并没有实现互换， 也就是形参互换了，实参并也有互换 
 
 */ 

