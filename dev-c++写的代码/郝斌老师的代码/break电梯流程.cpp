/* 		 19.8.9 15��27��
		break ����switch�Ǳ�ʾ��ֹswitch
		���³������й��̣��� �� val =  1 ʱ��������ҵ�case1 
		�����Ӧ��ִ������ģ����ҵ���֮ƥ��ĺ�ʣ���case
		�Ͳ��ù��ˡ�������break ��ֹ�� 


 */


# include <stdio.h>

int main(void)
{
	int val;
	printf("��������Ҫ�����¥��");
	scanf("%d",&val);
	
	switch(val)
	{
	case 1://�ո�һ��Ҫ�� 
		printf("һ�㿪!\n"); 
	//	break;  �������ע�͵�������1ʱ����ôһ���㶼���� 
	case 2:
		printf("���㿪!\n");
		break;
	case 3:
		printf("���㿪!\n");
		break;
default: 
		printf("û�иǵ���һ��!\n");
		break;
		
	 } 
	
	
	return 0;
}
