// ʱ��  19.8.6 15��31��
  // �ܽ�  ���ǹ��ڷֺ����� if else ����ʱ ����һ�����ܼӣ�  


# include <stdio.h>

int main(void) 
{
	if(1>2)// ���ﲻ���Լӷֺ�  �ӷֺŻ�ʹelse����������bug��������� 
		printf("����!\n");
	else
		printf("�ٺ�!\n");
	
	return 0;
}
