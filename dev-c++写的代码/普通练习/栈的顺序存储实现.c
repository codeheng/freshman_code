/*
		2020��1��21��21:20:42
		ջ��˳��洢ʵ�� 
			��һ��һά�����һ����¼ջ��Ԫ��λ�õı������ 
*/ 
#define MaxSize <�洢����Ԫ�ص�������>
typedef struct SNode *Stack;
struct SNode
{
	ElementType Data[MaxSize];
	int Top;
};

//  1����ջ
void Push(Stack PtrS,ElementType item)
{
	if(PtrS->top == MaxSize - 1)
	{
		printf("��ջ��");
		return; 
	}
	else
	{
		PtrS->Data[++(PtrS->top)] = item;//��������PtrS->top++; PtrS->Data[PtrS->top] = item;
		return;
	}
}

//  2����ջ
ElementType Pop(Stack PtrS)
{
	if(PtrS->top == -1)
 	{
 		printf("ջΪ��");
		return ERROR;  //ERROR ��ElementType������ֵ����־���� 
 	} 
 	else
		return (PtrS->Data[(PtrS->top)--]); 
}











