/*		2019年8月21日  15点22分 
 

*/ 

# include <stdio.h>

void sort(int *a,int len)
{
		int i,j,t;
		
		for(i = 0;i<len-1;++i)
		{
			for(j = 0;j<len-1-i;++j)//>表示升序,<表示降序 
			{
					if(a[j] > a[j+1])
					{
							t = a[j];
							a[j] = a[j+1];
							a[j+1] = t;
					}
			}
		}	
}
int main(void)
{
	int a[6] = {10,2,8,-8,11,0};
	int i = 0;
	
	sort(a,6);
	
	for(i = 0;i<6;++i)
	{
			printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
 } 
 /*		输出结果
 -8 0 2 8 10 11

--------------------------------
Process exited after 0.2339 seconds with return value 0
请按任意键继续. . .
 
 试数
 1、len = 6 ,i = 0,i<6-1=5成立，j=0，j<6-1-0=5成立，a[0]>a[1]?
 	即10>2成立，交换顺利变为 2 10 此时j=1
	 j = 1,j<6-2-0=5成立，a[1]>a[2]即10>8?成立，交换顺序此时
	 a[2]=10,j=2,j<5满足成立，a[2]>a[3]成立，因此a[3]=10
	 以此进行下去，最终11变到最后面 循环结束
2、结束后i = 1，再继续进行，把大的数放到后面去

最终就是从小到大排序 
 */ 
