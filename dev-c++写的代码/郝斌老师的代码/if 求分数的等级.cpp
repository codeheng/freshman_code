/*		ʱ��  19.8.4 18��13��
		�ܽ� ���ճ�������˳������д  ע��if else�÷� 

*/


# include <stdio.h>

int main(void)
{
	float score;
	printf("���������Ŀ��Գɼ�");
	scanf("%f",&score);
	
	if(score > 100)
			printf("��������!\n");
	else if (score>= 90 && score <= 100)
			printf("����!\n");
	else if (score>=80 && score <90)
	 		printf("����!\n");
	else if (score>= 60 && score < 80)
			printf("����!\n");
	else  
		printf("�����񣡼���!\n");	
	
	
	
	return 0;
 } 
