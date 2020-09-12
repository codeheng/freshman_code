/*		2019年8月21日  09点22分
		结构体是为了表示一些复杂的事物，而基本类型无法满足实际要求 

*/

# include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};
int main(void) 
{
	struct student st = {80,66.6,'f'};
/*	int age;
	float score;
	char sex;
	int age2;
	float score2;
	char sex2;
*/	
	return 0;
}
