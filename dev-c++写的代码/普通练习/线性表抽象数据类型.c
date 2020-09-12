/*
 		2020年1月20日08:28:25
		 线性表的抽象数据结构 
*/ 
List MakeEmpty() //初始化一个空线性表 L
ElementType FindKth(int K,List L)  //根据位序K，返回 相应值
int Find(ElementType X,List L)  //在线性表L中 查找X第一次出现的位置
void Insert(ElementType X,int i,List L) // 在位序i的位置插入新元素X
void Delete(int i,List L)   //删除指定位序i的元素
int Length(List L)   //返回线性表L的长度n


/*
		线性表的顺序实现 
*/ 
typedef struct LNode *List;
struct LNode 
{
	ElementType Data[MAXSIZE];
	int Last;//最后一个元素 
};
struct LNode L;
List Ptrl;
//访问下标为i的元素 ：L.Data[i] 或 Ptrl->Data[i]
// 线性表长度  ：  L.Last + 1  或  Ptrl->Last + 1 
 
//  主要操作的实现

//  1、初始化(建立空的线性表
List MakeEmpty()
{
	List Ptrl;
	Ptrl = (List)malloc(sizeof( struct LNode) );
	Ptrl->Last = -1;
	return Ptrl;
} 

//  2、查找
int Find(ElementType X,List Ptrl)
{
	int i = 0;
	while( i<=Ptrl->Last && Ptrl->Data[i]!= 0 )
	{
		i++;
	}
	if( i>Ptrl->Last ) 
		return -1;
	else 
		return i; //找到后返回所在的位置i 
}

//  3、插入（先移动再插入
void Insert(ElementType X,int i,List Ptrl)
{
	int j;
	if( Ptrl->Last == MAXSIZE )
	{
		printf("表已满");
		return; 
	}
	if( i<1 || i > Ptrl->Last + 2 ) 
	{
		printf("位置不合法");
		return; 
	}
	for(j = Ptrl->Last;j > i-1;j--)
	{
		Ptrl->Data[j+1] = Ptrl->Data[j];//倒序向后移动 
		Ptrl->Data[i-1] = X;//插入新元素 
		Ptrl->Last ++ ;	//Last仍指向最后元素 
		return ;
	}
} 

// 4、删除操作
void Delete(int i,List Ptrl)
{
	int j;
	if( i<1 || i>Ptrl->Last+1 )
	{
		printf("元素不存在");
		return; 
	}
	for(j=i;j<Ptrl->last;j++)
	{
		Ptrl->Data[j-1] = Ptrl->Data[j];
		Ptrl->Last --;
		return;
	}
} 

 










 
