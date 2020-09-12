/*
		2020年1月28日07:42:25
		队列（Queue）的抽象数据类型 
*/ 
1、Queue CreatQueue(int MaxSize) //生成长度为MaxSize的空队列
2、int IsFullQ(Queue Q,int MaxSize)  //判断队列Q是否满
3、void AddQ(Queue Q,ElementType item)   //将元素item插入队列Q中
4、int IsEmptyQ(Queue Q)  //判断队列是否为空
5、ElementType DeleteQ(Queue Q)  //将队头元素从队列中删除并返回


//顺序存储实现
#define MaxSize <存储数据元素的最大个数>
struct QNode
{
	ElementType Data[MaxSize];
	int rear;
	int front;
};
typedef struct QNode *Queue;

//顺序存储（循环队列）

//入队
	
void AddQ(Queue PtrQ,ElementType item)
{
	if( (PtrQ->rear + 1) % MaxSize == PtrQ->front )
	{
		pirntf("队列满");
		return; 
	}
	PtrQ->rear = (PtrQ->rear + 1) % MaxSize;
	PtrQ->Data[PtrQ->rear] = item; 
}

//出队
ElementType DeleteQ(Queue PtrQ)
{
	if( PtrQ->front == PtrQ->rear )
	{
		printf("队列空");
		return 0;
	}
	else
	{
		PtrQ->front = (PtrQ->front + 1) % MaxSize;
		return PtrQ->Data[PtrQ->front]; 
	}
} 


























