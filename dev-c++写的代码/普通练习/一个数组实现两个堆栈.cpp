/*
		2020年1月27日12:30:24
		请用一数组实现两个堆栈，要求利用最大数组空间，使数组只要有空间入栈操作就可以成功
		
		使两个栈从数组的两头开始向中间生长，当栈顶指针相遇时，即两个栈就满了		
*/ 
#define MaxSize <存储数据元素的最大个数>
struct DStack
{
	ElementType Data[MaxSize]
	int top1;
	int top2;
} S;
S.top1 = -1;
S.top2 = MaxSize;

void Push(struct DStack *PtrS,ElementType item,int Tag)
//Tag 区分两个栈的标志，取值分别为1和2
{
	if(ptrS->Top2 - ptrS->Top1 == 1)//栈已满
	{
		printf("堆栈满");
		return; 
	} 
	if(Tag == 1)
		PtrS->Data[++(PtrS->Top1)] = item;//对第一个栈操作 
	else
		PtrS->Data[--(PtrS->top2)] = item;//对第二个	 
} 
ElementType Pop(struct DStack *PtrS,int Tag)
{
	if(Tag == 1 )
	{
		if(PtrS->Top1 == -1)
		{
			printf("堆栈1空");
			return NULL; 
		}
		else
		 	return PtrS->Data[(PtrS->Top1)--]; 
	} 
	else
	{
		if(PtrS->top2 == MaxSize)
		{
			printf("堆栈2空");
			return NULL; 
		}
		else
			return PtrS->Data[(PtrS->Top2)++];
	}
	
}











