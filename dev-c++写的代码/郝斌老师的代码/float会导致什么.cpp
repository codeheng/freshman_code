/*   	 19.8.7 15点00分
		当位数过多的时候会造成float的不准确！形成近似值 
*/


# include <stdio.h>
int main(void)
{
	float i;
	//i = 167416711;//瞎输的 
	i =0.8888888;
	printf("i = %f\n",i);
						//输出结果为167416704.000000 
						// 输出结果为0.888889 
	return 0;
}
