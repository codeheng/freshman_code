/*
	2020年1月29日20:59:02
	树的静态查找 
*/ 

//抽象数据结构
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode
{
	ElementType Data;//结点数据
	BinTree Left;  //指向左子树 
	BinTree Right; //指向右子树 
}; 


//1、顺序查找 
int SequentialSearch(StaticTable *Tbl,ElementType K)
{
	//在表Tb[1]--Tb[n]中查找关键字为K的数据元素
	int i;
	Tbl->Element[0] = K;  //设置哨兵
	for( i = Tbl->Length; Tbl->Element[i] != K;i-- )
	{
		return i;
	} 
} 

//2、二分查找
int BinarySearch(StaticTable *Tbl,ElementType K)
{
	int left,right,mid,NoFound = -1;
	
	left = 1;//初始左边界
	right = Tbl->Length;//初始右边界
	while(left<=right)
	{
		mid = (left+right) / 2;
		
		if( K < Tbl->ElementType[mid] )
		{
			right = mid - 1;
		}
		else if( K> Tbl->ElementType[mid] )
		{
			left = mid + 1;
		}
		else 
			return mid;
	} 
	return NoFound;
}







 
