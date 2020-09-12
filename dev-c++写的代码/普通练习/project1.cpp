#include<stdio.h>

#define ARR_SIZE 30
void input();
float AvgSumofScore(float score[], int n); 
int main()
{
	int n;
	float score[ARR_SIZE];
	long num[ARR_SIZE];
	printf("Please enter num and score until score<0:\n");
	input();

	return 0;
}

void input()
{
	float score[ARR_SIZE] = { 0 };
	long num[ARR_SIZE] = {0};
	long studentNum[ARR_SIZE] = { 0 };
	int count = 0;
	int cnt = 0;
	int i;
	for (i = 0; i < ARR_SIZE; i++)
	{
		scanf("%ld %f\n", &num[i], &score[i]);
		//scanf("%f\n",&score[i]);
		cnt++;

		if (score[i] < 60)
		{
			count++;
			studentNum[i] = num[i];
		}
	
		if (score[i] < 0)
			break;
	}
	printf("The failed student of number is %d\n", count);
	for (int i = 0; i < ARR_SIZE; i++)
	{
		if (studentNum[i] != 0)
			printf("%ld\n", studentNum[i]);
	}

	float avg = AvgSumofScore(score, cnt);
	if (score[i] > avg)
	{
		printf("%ld\n", num[i]);
	}
	
}

float AvgSumofScore(float score[], int n)
{
	int    i;
	float  sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + score[i];
	}
	printf("sum=%.0f,aver=%.2f\n", sum, n > 0 ? sum / n : 0);
	return sum;
}



