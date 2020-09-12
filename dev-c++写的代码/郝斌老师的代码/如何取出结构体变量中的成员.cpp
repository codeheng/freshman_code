/*		2019年8月21日  10点03分 	 
		指针变量名->成员们，在计算机中会转为（*指针变量名）的方式执行 
*/	

# include <stdio.h>

//第一种方式
struct student 
{ 
	int age;
	float score;
	char sex;
 }; 
int main(void)
{
	struct student st = {80,66.6f,'f'};//初始化，定义的同时赋初值
	struct student * pst = &st;//&st不能改成st 
	
	st.score = 66.6f;//第一种方式，66.6在c语言中默认是double类型
					//若要表示float需要在末尾加上f或F 
	pst->age = 88;//第二种方式 
	printf("%f\n",st.score);
	printf("%d\n",pst->age);
	
	
	return 0;
 } 
 /*		输出结果
66.599998
88

--------------------------------
Process exited after 0.2207 seconds with return value 0
请按任意键继续. . . 
 
 */
