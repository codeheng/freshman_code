 //  2019年8月21日  09点38分   

# include <stdio.h>

struct student 
{
	int age;
	float score;
	char sex;
};
int main(void)
{
	struct student st = {80,66.6,'f'};//初始化   定义的同时赋值 
	//第二种
	struct student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'f'; 
	
	printf("%d %f %c\n",st.age,st.score,st.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);
	
	return 0;
 } 
 
/*		输出结果
80 66.599998 f
10 88.000000 f

--------------------------------
Process exited after 0.2295 seconds with return value 0
请按任意键继续. . . 
	
*/
