/*
	2020年2月6日20:40:25
	堆：是个完全二叉树，并且结点存放到按顺序存放，分为大根堆和小根堆 
*/ 
MaxHeap Creat( int MaxSize ) //创建一个空的最大堆
Boolean IsFull(MaxHeap H) //判断最大堆H是否已满
Insert(MaxHeap H,ElementType item) //将元素item插入最大堆H中
Boolean IsEmpty(MaxHeap H) //判断最大堆是否为空
ElementType DeleteMax(MaxHeap H) //返回H中的最大元素

//最大堆的创建
typedef struct HeapStruct *MaxHeap;
struct HeapStruct
{
	ElementType *Elements;//存储堆元素的数组 
	int Size; //堆的当前元素个数 
	int Capacity;//堆的最大容量 
};

MaxHeap Creat(int MaxSize)
{
	MaxHeap H = malloc(sizeof(struct HeapStruct));
	H->Elements = malloc((MaxSize + 1) * sizeof(ElementType));
	H->Size = 0;
	H->Capacity = MaxSize;
	H->Elements[0] = MaxData;//定义 哨兵 为大于堆中所有可能元素的值，便于以后更方便操作
	
	return H;	
}
















