/*		19.8.14 16��08��
		������������ͨ�����������ı�������ֵҲ��������ָ�롣 
*/ 

# include <stdio.h>

/*
void swap1("int p,int q")
{
	int t;
	t = i;  ����Ǵ���ģ� 
	i = j;
	j = t;
}
*/

/*
void swap2(int * p,int * q);�β�������p��q������ʵ�����ݵ���p��q��������*p��*q
{
	int * t;
	t = p;
	p = q;//Ҳ������ɻ���Ŀ�� 
	q = t;
}
*/
void swap3(int * p,int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
 } 
int main (void)
{
	int a = 3;
	int b = 5;
	
	swap3(&a,&b);
	printf("a = %d,b = %d\n",a,b); 
	
	return 0;
}
