#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[21];
	char sorce;
};
int main()
{
	struct student a[100], t;
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%s %d", a[i].name, &a[i].sorce);
		for(i=1;i<=n-1;i++)
			for (j = 1; j <= n - i; j++)
			{
				if (a[j].sorce < a[j + 1].sorce)
				{
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		for (i = 1; i <= n; i++) 
		{
			printf("%s\n", a[i].name);
		}
	}
	system("pause");
	return 0;
}
