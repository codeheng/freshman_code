/*
		2020��1��27��15:20:16
		��ջ����ʽ�洢 
			����һ��������������ջ�������ɾ��ֻ��ջ������ 
*/ 
typedef struct SNode *Stack;
struct SNode 
{
	ElementType Data;
	struct SNode *Next;
};

//1����ջ��ʼ��
Stack CreatStack()
{
	//����һ����ջ��ͷ��㣬����ָ��
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	return S;
} 

//2���ж�ջ�Ƿ�Ϊ��
int IsEmpty(Stack S)
{
	//��Ϊ�գ�����1�����򷵻�0
	return (S->Next == NULL);
} 

void Push(ElementType item,Stack S)
{
	//��Ԫ��itemѹ���ջS��
	Struct SNode *TmpCell;
	TmpCell = (struct SNode *)malloc(sizeof(struct SNode));
	TmpCell->Element = item;
	TmpCell->Next = S->Next;
	S->Next = TmpCell;
} 

ElementType Pop(Stack S)
{
	//ɾ��������ջ��S��ջ��Ԫ��
	struct SNode *FirstCell;
	ElementType TopElem;
	if( IsEmpty(S) )
	{
		printf("��ջ��");
		return; 
	}
	else
	{
		FirstCell = S->Next;
		S->Next = FirstCell->Next;
		TopElem = FirstCell->Element;
		free(FirstCell);
		return TopElem;
	}
	 
} 











