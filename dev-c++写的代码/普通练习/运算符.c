/*
		2020��1��15��15:26:57
		����� 
	�ܽ� 
		a++ 	��a+1 	���ʽ��ֵ��ԭ��a��ֵ 
		++a  	��a+1	���ʽ��ֵ��ԭ��a+1��ֵ 
*/ 
#include <stdio.h>
int main(void)
{
	/*
	int a = 10;
	int b = -20;
	printf("%d\n",a*-b);//��a * =��-b��  
	*/
/*
		������
200
--------------------------------
Process exited after 0.03646 seconds with return value 0
�밴���������. . .
 
*/ 

	int a,b;
	a = 1;
	b = 6;
//	a = b = 6;//-->a = (b = 6)

//	a+=7; //+=֮�䲻���пո� 

//	a++;

	printf("%d\n",a);//1
	printf("%d\n",++a); //���Ϊ2 
	printf("%d\n",a++);//2 ��ô���£���Ӧ����1?  =  = 
	printf("%d\n",b++);//6
	return 0;
/*
	6

--------------------------------
Process exited after 0.0273 seconds with return value 0
�밴���������. . .
*/
} 

