/*			19.8.12  09��30��
		��β���ָ�룡 ���������� 
		û�гɹ�����Ȼ���յ�ַ�ˣ����ı����p q��ֵ��*p��*qֵû�иı�
		����Ӱ������������ 
 */ 
void huhuan2(int * p,int * q)

# include <stdio.h>

{
	int * t;//����int���ͻᱨ��
				//����������ѱ������a�ĵ�ַת���ɴ��b�ĵ�ַ
				//		b�ĵ�ַ���a�ĵ�ַ 
				//����ֵ����û�� 
	
	t = p;
	p = q;
	q = p;
	
	return;
	
}
int main(void)
{
	int a = 3;
	int b = 5;
	
	huhuan2(&a,&b);//��д��huhuan(*p,*q)���� ��huhuan(a,b) Ҳ���� 
	printf("a = %d,b = %d\n",a,b);
	
	//������ a= 3 b= 5 
	return 0;
 } 
