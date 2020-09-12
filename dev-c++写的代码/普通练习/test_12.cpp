/*
		2019Äê12ÔÂ29ÈÕ19:15:20 
*/

# include<stdio.h>
int main(void)
{
	char s[] = {"012xyz"};
	int i,n = 0;
	for (i = 0;s[i]!=0;i++)
	{
		if(s[i] >='a'&&s[i]<='z')
			n++;
	}
	printf("%d\n",n);
	return 0;
} 
