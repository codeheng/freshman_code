#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int i,a,b,c;

	printf("��ѡ���������ࣺ\n");
	printf("1-�ӷ�\n");
	printf("2-����\n");
	printf("3-�˷�\n");
	printf("4-����\n");
	scanf("%d",p);
	printf("�������һ�����֣�\n");
	scanf("%d",q);
	printf("������ڶ������֣�\n");
	scanf("%d",r);
	switch(i)
	{
		case 1:*t=*q+*r;
			printf("���õ���ʽ��Ϊ��\n");
			printf("%d + %d = %d\n",*q,*r,*t);
				break;
		case 2:*t=*q-*r;
			printf("���õ���ʽ��Ϊ��\n");
			printf("%d - %d = %d\n",*q,*r,*t);
				break;
		case 3:*t=(*q)*(*r);
			printf("���õ���ʽ��Ϊ��\n");
			printf("%d x %d = %d\n",*q,*r,*t);
				break;
		case 4:*t=(*q)/(*r);
			printf("���õ���ʽ��Ϊ��\n");
			printf("%d ��%d = %d\n",*q,*r,*t);
				break;
		default:
			printf("���������������������룡");
				break;	
	}
}

