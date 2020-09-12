/*   		19.8.11  15点32分
	用两个函数来实现求1到某个数字之间所有的素数，并将其输出
	本程序 和 -4.cpp 相比较
	代码量更少，可重用性更高
	关于形参，那儿为何是 n 和 m 
	在函数定义中出现的参数可以看做是一个占位符，它没有数据
	只能等到函数被调用时接收传递进来的数据，所以称为形式参数，简称形参
 */ 


# include <stdio.h>

bool IsPrime(int m)//本函数功能 判断m是否为素数，是返回 true，不是返回false 
{
		int i;
		
		for(i = 2;i<m;++i)
		{
				if(m%i == 0)
					break;
		}
		if(i == m)
			return true;
		else
			return false;
}
void TraverseVal(int n)//此函数功能把1到n之间的所以素数再显示器上输出 
{
		int i;
		
		for (i = 2;i<n;++i)
		{
				if(IsPrime(i))
						printf("%d\n",i);
		}
 } 
int main(void)
{
	int val;
	
	scanf("%d",&val);
	TraverseVal(val);
	
	
	return 0;
}
