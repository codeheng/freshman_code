/*		2019��8��21��  14��34��
		 
	
*/ 
# include <stdio.h>

struct student 
{
	int age;
	char sex;
	char name[100];
};
int main(void)
{
	struct student st = {20,'f',"С��"};
	struct student *pst = &st;
	
	printf("%d %c %s\n",st.age,st.sex,st.name);
	printf("%d %c %s\n",pst->age,pst->sex,pst->name);	 
	
	
	return 0;
 } 
