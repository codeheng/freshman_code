/*		19.8.14 17��48��
		Ҫ֪����9�е�pArr[3]�� 15��17�е�a[3]��ͬһ������ 
*/

#  include <stdio.h>

void f(int * pArr,int len)
{
	pArr[3] = 88;//9�� 
}
int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	
	printf("%d\n",a[3]);//15�� 
	f(a,6);//ͨ�����ú�������a[3]��ֵ�ĳ�88�� 
	printf("%d\n",a[3]);//17�� 

	return 0;
}
/*	������
4
88

--------------------------------
Process exited after 0.2946 seconds with return value 0
�밴���������. . . 
*/ 
