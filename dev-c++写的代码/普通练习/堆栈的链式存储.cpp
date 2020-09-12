/*
		2020年1月27日15:20:16
		堆栈的链式存储 
			即是一个单链表，叫做链栈，插入和删除只在栈顶进行 
*/ 
typedef struct SNode *Stack;
struct SNode 
{
	ElementType Data;
	struct SNode *Next;
};

//1、堆栈初始化
Stack CreatStack()
{
	//构建一个堆栈的头结点，返回指针
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	return S;
} 

//2、判断栈是否为空
int IsEmpty(Stack S)
{
	//若为空，返回1，否则返回0
	return (S->Next == NULL);
} 

void Push(ElementType item,Stack S)
{
	//将元素item压入堆栈S中
	Struct SNode *TmpCell;
	TmpCell = (struct SNode *)malloc(sizeof(struct SNode));
	TmpCell->Element = item;
	TmpCell->Next = S->Next;
	S->Next = TmpCell;
} 

ElementType Pop(Stack S)
{
	//删除并返回栈顶S的栈顶元素
	struct SNode *FirstCell;
	ElementType TopElem;
	if( IsEmpty(S) )
	{
		printf("堆栈空");
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











