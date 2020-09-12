#include<stdio.h>
/*struct address
{
	int num;
	char change[10]; 
};
int main()
{
	struct address *student;
	(*student).num = 111;
	printf("%d\n",(*student).num);
	return 0;
}*/
int main()
{
	int a5 = 12,n=5;
	int result5 = a5 %= (n %= 2);
	printf("%d\n",result5);
} 
