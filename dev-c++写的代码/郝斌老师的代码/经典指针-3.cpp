/*   19.8.12  09��52��
		ָ��ת���ɹ��� 
		Ҫ�ı���������ֵ������Ҫ�����������ĵ�ַ 
		���Ϊ�γɹ�����Ϊ��*q ��*q���� 
 */

# include <stdio.h>

void huhuan3(int * p,int * q) 
//���Ҫ����*p��*q��ֵ, ��t���붨���int���ܶ����int *, �����﷨����
{
	int t;
	 
	t = *p;
	*p = *q;
	*q = t;
	
	return;
 } 
int main(void)
{
	int a = 3;
	int b = 5;
	
	huhuan3(&a,&b);
	printf("a = %d,b = %d\n",a,b);

	return 0;
 } 
 //�����ɹ�! 
