/*  	19.8.10 16��24��
		 break��������ֹѭ����switch�ģ���return����ֹ������ 
 */ 

# include <stdio.h>

void f(void)
{
		int i;
		
		for(i = 0;i<5;++i)
		{
				printf("23333\n");
				//break;
				return;
		} 
		printf("hello world\n");
}
int main(void)
{
	f();
	
	return 0;
 } 
 /* ��ע�͵�returnʱ��������Ϊ 23333 hello world
 	��ע�͵�break ʱ��������Ϊ 23333 
 */
