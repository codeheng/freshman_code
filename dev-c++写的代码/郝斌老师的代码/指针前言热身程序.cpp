/*   19.8.12 07��37��
	 
*/ 

# include <stdio.h>

int main(void)
{
	int * p;//p�Ǳ��������֣�int * ��ʾp������ŵ���int���͵ĵ�ַ 
	int i = 3;
	
	p = &i;//����ok
//	p = i; //������Ϊ���Ͳ�һ����i��ʾ int���ͱ�����ֵ
			//pֻ�ܴ��int ���ͱ����ĵ�ַ 
//	p = 55; error ԭ��ͬ�� 
	

	
	return 0;
}
