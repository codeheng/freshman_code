/*		19.8.11		14��05��
		Ҫ���׳����Ϊ����
		��Ҫ֪��Ϊ�μ��ϵ�8�к�������ȷ�� 
*/ 

# include <stdio.h>

void f(void);//�������ǰ���������ֺŲ���ʡ�ԡ�ע�͵������ 
void g(void)
{
		f();//error ȱ��ǰ������ ����Ϊf��������˵���֮���� 
}
void f(void)
{
		printf("hh!\n"); 
}
int main(void)
{
		g(); 
	return 0;
 } //������ hh! 
