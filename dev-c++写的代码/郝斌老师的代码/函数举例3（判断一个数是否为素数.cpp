/*   19.8.10 20点26分
		函数的应用 如何判断素数
		如何调用的函数，怎么实现的。 
*/ 


# include <stdio.h>

bool IsPrime(int val)//IsPrime 就是表示素数的意思
					// bool是一个数据类型但是只有两个选择。
					//真或假 即true or false。 
{
		int i;
		
		for(i = 2;i<val;++i)
		{
				if(val%i == 0)
						break;  //这个函数过程看懂，试数 
				
		}
		if(i == val)
				return true;
		else
				return false; 
}	
int main(void)//main 是主函数都要从这先进行。 
{
		int m;
		
		scanf("%d",&m);
		if(IsPrime(m))//执行到这一步就会判断是否有函数，以此调用函数
						// 即（）最终就是true或者false  
				printf("yes\n");
		else
				printf("no\n");
		
		return 0;
 } 
