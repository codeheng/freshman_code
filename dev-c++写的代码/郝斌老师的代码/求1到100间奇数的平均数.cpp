/* 		19.8.7 15��36��
		����������ĸ����������ĺͣ���ƽ��ֵ�� 
		for if�Ľ�� if for��ֻ����һ����䣬����{}���������ӷ��㣬���� 

*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg; //������avg��int Ҳ���������������ǳ���/ע�������float 
	
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
	//������  sum = 2500 cnt = 50 avg = 50.000000 
 } 
