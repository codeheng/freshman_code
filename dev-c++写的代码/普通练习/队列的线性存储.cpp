/*
		2020��1��28��07:42:25
		���У�Queue���ĳ����������� 
*/ 
1��Queue CreatQueue(int MaxSize) //���ɳ���ΪMaxSize�Ŀն���
2��int IsFullQ(Queue Q,int MaxSize)  //�ж϶���Q�Ƿ���
3��void AddQ(Queue Q,ElementType item)   //��Ԫ��item�������Q��
4��int IsEmptyQ(Queue Q)  //�ж϶����Ƿ�Ϊ��
5��ElementType DeleteQ(Queue Q)  //����ͷԪ�شӶ�����ɾ��������


//˳��洢ʵ��
#define MaxSize <�洢����Ԫ�ص�������>
struct QNode
{
	ElementType Data[MaxSize];
	int rear;
	int front;
};
typedef struct QNode *Queue;

//˳��洢��ѭ�����У�

//���
	
void AddQ(Queue PtrQ,ElementType item)
{
	if( (PtrQ->rear + 1) % MaxSize == PtrQ->front )
	{
		pirntf("������");
		return; 
	}
	PtrQ->rear = (PtrQ->rear + 1) % MaxSize;
	PtrQ->Data[PtrQ->rear] = item; 
}

//����
ElementType DeleteQ(Queue PtrQ)
{
	if( PtrQ->front == PtrQ->rear )
	{
		printf("���п�");
		return 0;
	}
	else
	{
		PtrQ->front = (PtrQ->front + 1) % MaxSize;
		return PtrQ->Data[PtrQ->front]; 
	}
} 


























