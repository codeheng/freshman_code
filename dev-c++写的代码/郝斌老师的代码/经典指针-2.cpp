/*			19.8.12  09点30分
		这次采用指针！ 互换两个数 
		没有成功，虽然接收地址了，但改变的是p q的值。*p与*q值没有改变
		不会影响主函数变量 
 */ 
void huhuan2(int * p,int * q)

# include <stdio.h>

{
	int * t;//若是int类型会报错
				//这样操作会把本来存放a的地址转换成存放b的地址
				//		b的地址存放a的地址 
				//但是值根本没变 
	
	t = p;
	p = q;
	q = p;
	
	return;
	
}
int main(void)
{
	int a = 3;
	int b = 5;
	
	huhuan2(&a,&b);//若写成huhuan(*p,*q)错误 ，huhuan(a,b) 也不对 
	printf("a = %d,b = %d\n",a,b);
	
	//输出结果 a= 3 b= 5 
	return 0;
 } 
