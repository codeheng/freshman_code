/*		2019��8��22��  16��39��   

*/ 

#include <stdio.h>

//�����˸��������ͣ���û�ж�������� ���������͵�����Ϊenum weekday 
enum weekday//enum ���Ǳ�ʾö������ 
{
		monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
/*
 	mondayĬ��Ϊ0��ʼ��tuesdayΪ1���Դ����� 
*/ 
int main(void)
{
	enum weekday day = sunday;
	printf("%d\n",day);
	
	return 0;
 } 
 /*	������
 6

--------------------------------
Process exited after 0.3624 seconds with return value 0
�밴���������. . . 
 
 */ 
