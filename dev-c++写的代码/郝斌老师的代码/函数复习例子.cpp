/* 		19.8.12	07��25��
		 
*/ 

# include <stdio.h>

int f(int i)
{
		return 10.8;
}
int main(void)
{
	float i = 99.9;
	
	printf("%f\n",i);//�����ʹ洢��ʱ��һ����׼ȷ�洢����Ϊ�ǽ���ֵ 
	i = f(5);//���ú�����ǰ����int���͵����Բ���10.8����10 
	printf("%f\n",i); 
	
	
	return 0;
 } //������
 //99.900002
// 10.000000
