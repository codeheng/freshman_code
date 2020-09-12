/*
		2020年1月20日20:56:40 
		线性表的链式存储实现 
*/ 
typedef struct LNode *List
struct LNode
{
	ElementType Data;
	List Next;
};
struct Lnode L;
List Ptrl;

//  1、求表长	
int Length(List Ptrl)
{
	List p = Ptrl;//用p指向第一个结点
	int j;
	while(p)
	{
		p = p->next;
		j++;
	}
	return j;
}
//  2、查找
//(1)按序号查找FindKth
List FindKth(int K,List Ptrl)
{
	List p = Ptrl;
	int i;
	while(p!=NULL && i<K)
	{
		p = p->next;
		i++;
	}
	if( i == K)
		return p;
	else
		return NULL;
}
//(2)、按值查找Find
List Find(Element X,List Ptrl)
{
	List p = Ptrl;
	while(p != NULL && p->Data != X)
	{
		p = p->next; 
	}
	return p;
} 

//3、插入(在第i-1个结点后插入一个值为X的新结点)
/*
	  先构造一个新结点，用s指向
	  再找到链表的第i-1个结点，用p指向
	  然后修改指针，插入结点（p之后插入s） 
*/ 

List Insert(ElementType X,int i,List Ptrl)
{
	List p,s;
	if(i==1)  //插入结点在表头 
	{
		s = (List)malloc(sizeof(struct LNode));//申请填装结点 
		s->Data = X;
		s->next = Ptrl;
		return s;
	}
	p = FindKth(i-1,Ptrl);//查找第i-1个结点
	if(p == NULL)
		printf("参数i错误");
		return NULL; 
	else
	{
		s = (List)malloc(sizeof(struct LNode));
		s->Data = X;
		s->next = p->next;
		p->next = s;
		return Ptrl; 
	} 
} 
 
 // 4、删除（删除链表第i个位置的结点）
 /*
 			先找到第i-1个结点，用p指向
			再用指针s指向要被删除的结点（p的下一个结点）
			然后修改指针，删除s的结点
			最后释放s所指向的空间 
 */ 
List Delete(int i,List Ptrl)
{
	List p,s;
	if(i==1)
	{
		s = Ptrl;
		if(Ptrl != NULL)
			Ptrl = Ptrl->next;
		else 
			return NULL;
		free(s);
		return Ptrl;
	}
	p = FindKth(i-1,Ptrl)
	if(p == NULL)
	{
		printf("第%d个结点不存在",i-1);
		return NULL; 
	} 
	else if(p->next == NULL)
	{
		printf("第%个结点不存在",i);
	}
	else
	{
		s = p->next;
		p->next = s->next;
		free(s);
		return Ptrl;
	}
}















 







