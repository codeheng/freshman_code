/*
		2020��1��20��08:21:15
		����ʽ�洢   ����ṹ�洢 
		����ÿ�����洢����ʽ�ķ��������������(ָ����ϵ��)��ָ���� 
*/
typedef struct PolyNode *Polynomial;
struct PolyNode
{
	int coef; //ϵ��
	int expon;//ָ��
	Polynomial link; //ָ���� 
}
