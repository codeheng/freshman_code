/*   ʱ�� 19 .8.4  17��55��
  	���� if else �Ļ����÷� ����ֻ����һ����䡣
  	�����������printf("����!\n");����Ļ� ����ͻ����
  	��Ϊ ִ����printf("��������!\n"); ��ͻ�ִ���Ǹ� �������else if ��������ж�
  	�������ˣ���û���������ڣ���˱������

 */ 


# include <stdio.h>

int main(void)
{
	double delta = 2;
	
	if(delta > 0)	
			printf("��������!\n");
	//printf("����!\n");//
	else if(delta ==  0)
			printf("��һ��Ψһ��!\n");
	else 
	 		printf("�޽�!\n");
	
	
	return 0;
}
