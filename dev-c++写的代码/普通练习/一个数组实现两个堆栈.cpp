/*
		2020��1��27��12:30:24
		����һ����ʵ��������ջ��Ҫ�������������ռ䣬ʹ����ֻҪ�пռ���ջ�����Ϳ��Գɹ�
		
		ʹ����ջ���������ͷ��ʼ���м���������ջ��ָ������ʱ��������ջ������		
*/ 
#define MaxSize <�洢����Ԫ�ص�������>
struct DStack
{
	ElementType Data[MaxSize]
	int top1;
	int top2;
} S;
S.top1 = -1;
S.top2 = MaxSize;

void Push(struct DStack *PtrS,ElementType item,int Tag)
//Tag ��������ջ�ı�־��ȡֵ�ֱ�Ϊ1��2
{
	if(ptrS->Top2 - ptrS->Top1 == 1)//ջ����
	{
		printf("��ջ��");
		return; 
	} 
	if(Tag == 1)
		PtrS->Data[++(PtrS->Top1)] = item;//�Ե�һ��ջ���� 
	else
		PtrS->Data[--(PtrS->top2)] = item;//�Եڶ���	 
} 
ElementType Pop(struct DStack *PtrS,int Tag)
{
	if(Tag == 1 )
	{
		if(PtrS->Top1 == -1)
		{
			printf("��ջ1��");
			return NULL; 
		}
		else
		 	return PtrS->Data[(PtrS->Top1)--]; 
	} 
	else
	{
		if(PtrS->top2 == MaxSize)
		{
			printf("��ջ2��");
			return NULL; 
		}
		else
			return PtrS->Data[(PtrS->Top2)++];
	}
	
}











