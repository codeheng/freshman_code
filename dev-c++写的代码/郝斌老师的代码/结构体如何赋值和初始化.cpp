 //  2019��8��21��  09��38��   

# include <stdio.h>

struct student 
{
	int age;
	float score;
	char sex;
};
int main(void)
{
	struct student st = {80,66.6,'f'};//��ʼ��   �����ͬʱ��ֵ 
	//�ڶ���
	struct student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'f'; 
	
	printf("%d %f %c\n",st.age,st.score,st.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);
	
	return 0;
 } 
 
/*		������
80 66.599998 f
10 88.000000 f

--------------------------------
Process exited after 0.2295 seconds with return value 0
�밴���������. . . 
	
*/
