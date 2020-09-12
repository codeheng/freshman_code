/*    19.8.10  19点46分
	 与上一个函数举例-1 对比 那个是判断并输出
	 而这个只是判断，返回特定的值
	 所以说 表达相同的东西，可以用不同形式表达 灵活掌握。
	 上一个更方便点 

*/ 

# include <stdio.h>

int max2(int i,int j)
{
	if(i>j)
		return i;
	else 
		return j;
}
int main(void)
{
	int a,b,c,d,e,f;
	a = 1,b = 2,c = 3,d = 9,e = -5,f = 100;
	
	printf("%d\n",max2(a,b));
	printf("%d\n",max2(c,d));
	printf("%d\n",max2(e,f));
	//输出结果仍为  2  9  100 
	return 0;
}
