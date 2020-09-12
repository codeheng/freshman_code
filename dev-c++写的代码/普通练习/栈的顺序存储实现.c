/*
		2020年1月21日21:20:42
		栈的顺序存储实现 
			由一个一维数组和一个记录栈顶元素位置的变量组成 
*/ 
#define MaxSize <存储数据元素的最大个数>
typedef struct SNode *Stack;
struct SNode
{
	ElementType Data[MaxSize];
	int Top;
};

//  1、入栈
void Push(Stack PtrS,ElementType item)
{
	if(PtrS->top == MaxSize - 1)
	{
		printf("堆栈满");
		return; 
	}
	else
	{
		PtrS->Data[++(PtrS->top)] = item;//分两步：PtrS->top++; PtrS->Data[PtrS->top] = item;
		return;
	}
}

//  2、出栈
ElementType Pop(Stack PtrS)
{
	if(PtrS->top == -1)
 	{
 		printf("栈为空");
		return ERROR;  //ERROR 是ElementType的特殊值，标志错误 
 	} 
 	else
		return (PtrS->Data[(PtrS->top)--]); 
}











