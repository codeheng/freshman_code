/* 		19.8.12	07点25分
		 
*/ 

# include <stdio.h>

int f(int i)
{
		return 10.8;
}
int main(void)
{
	float i = 99.9;
	
	printf("%f\n",i);//浮点型存储的时候不一定能准确存储，因为是近似值 
	i = f(5);//调用函数，前面是int类型的所以不是10.8而是10 
	printf("%f\n",i); 
	
	
	return 0;
 } //输出结果
 //99.900002
// 10.000000
