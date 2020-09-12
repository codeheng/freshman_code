//时间  19.8.6 15点14分
 //  总结  主要利用数字的互换加上if的判断  以最大 中间 最小 进行排列即可
    //过程记下来！ 

# include <stdio.h>

int main(void) 
{
	int a,b,c;
	int t;
	
	printf("请输入三个整数 中间以空格分隔");
	scanf("%d %d %d",&a,&b,&c);
	//编写代码完成 a是最大值 b中间值 c最小值// 
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	
	 } 
	 
	 if(a<c)
	 {
	 	 t = a;
	 	 a = c;
	 	 c = t;
	 	 
	 }
	 if(b<c)
	 {
	 	 t = b;
	 	 b = c;
	 	 c = t;
	 }
	printf("%d %d %d\n",a,b,c);
	return 0;
}
