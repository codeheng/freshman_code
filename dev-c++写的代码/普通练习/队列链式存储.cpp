/*
		2020��1��28��08:28:22
		���е���ʽ�洢�����õ�������ʵ�֣������ɾ���ֱ����������ͷ���� 
*/ 
struct Node
{
	ElementType Data;
	struct Node *Next;
};
struct QNode	//�����нṹ 
{
	struct Node *rear;//ָ����н�� 
	struct Node *front;//ָ���β��� 
};
typedef struct QNode *Queue;
Queue PtrQ;


//����(����ͷ������ʽ����)
ElementType DeleteQ(Queue PtrQ)
{
	struct Node *FrontCell;
	ElementType FrontElem;
	
	if( PtrQ->front == NULL ) 
	{
		printf("���п�");
		return 0; 
	}
	FrontCell = PtrQ->front;
	if( PtrQ->front == PtrQ->rear ) //����ֻ��һ��Ԫ�� 
	{
		PtrQ->front = PtrQ->rear = NULL;//ɾ���� ������Ϊ�� 
	}
	else
		PtrQ->front = PtrQ->front->Next; 
	FrontElem = FrontCell->Data;
	free(FrontCell);
	return FrontCell;
}
















 
