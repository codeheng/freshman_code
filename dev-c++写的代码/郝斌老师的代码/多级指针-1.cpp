/*	2019��8��20��  08��29��
		 


*/ 

# include <stdio.h>

int main(void)
{
	int i = 10;
	int * p = &i;//pֻ�ܴ��int���ͱ����ĵ�ַ 
	int ** q = &p;// q��int**���͵ģ� ��νint**���;���ָqֻ�ܴ��int**���ͱ����ĵ�ַ 
	int *** r = &q;//r��int***���ͣ���νint***���;���
					//rֻ�ܴ��int**���ͱ����ĵ�ַ 
	//r = &p;//������Ϊrֻ�ܴ��int**���͵ĵ�ַ���ǵ�ַ 
	
	printf("i = %d\n",***r);
	//*r = q��*q = p��*p = i����***r = i 
	
	
	return 0;
 } 
 /*	������
 i = 10

--------------------------------
Process exited after 0.1468 seconds with return value 0
�밴���������. . . 
 
 */ 
