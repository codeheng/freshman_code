/* 	19.8.12  07��25�� 
*/ 

# include <stdio.h>

void f(int i);//ǰ��˵�� 

void g()
{
		f(5);
}
void f(int i)
{
		int i = 99 ;//��ע�͵��Ļ� ����ͻᱨ��  
					//ǰ���β��Ѿ�Ūint i��ʱ�������ٶ���i ������j������ 
		
		printf("i = %d\n",i);
		return; 
}
int main(void)
{
	int i = 10;
	
	g();
	
	
	return 0;
 } //������i = 5 
