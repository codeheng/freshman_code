/* 		19.8.7 15点36分
		如何求奇数的个数，奇数的和，即平均值。 
		for if的结合 if for都只控制一个语句，利用{}扩起来更加方便，美观 

*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg; //若此题avg用int 也可以算出结果，但是除号/注意最好用float 
	
	for(i = 1;i<=100;++i)
	{
			if(i%2 == 1)
			{
				sum += i;
				++cnt;
			}
	} 
	avg = 1.0*sum / cnt;
	
	printf("sum = %d\n",sum);
	printf("cnt = %d\n",cnt);
	printf("avg = %f\n",avg);
	return 0;
	//输出结果  sum = 2500 cnt = 50 avg = 50.000000 
 } 
