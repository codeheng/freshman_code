/*
		2020年1月28日08:28:22
		队列的链式存储，即用单链表来实现，插入和删除分别在链表的两头进行 
*/ 
struct Node
{
	ElementType Data;
	struct Node *Next;
};
struct QNode	//链队列结构 
{
	struct Node *rear;//指向队列结点 
	struct Node *front;//指向队尾结点 
};
typedef struct QNode *Queue;
Queue PtrQ;


//出队(不带头结点的链式队列)
ElementType DeleteQ(Queue PtrQ)
{
	struct Node *FrontCell;
	ElementType FrontElem;
	
	if( PtrQ->front == NULL ) 
	{
		printf("队列空");
		return 0; 
	}
	FrontCell = PtrQ->front;
	if( PtrQ->front == PtrQ->rear ) //队列只有一个元素 
	{
		PtrQ->front = PtrQ->rear = NULL;//删除后 队列置为空 
	}
	else
		PtrQ->front = PtrQ->front->Next; 
	FrontElem = FrontCell->Data;
	free(FrontCell);
	return FrontCell;
}
















 
