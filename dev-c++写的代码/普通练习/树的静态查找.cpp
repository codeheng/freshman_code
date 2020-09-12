/*
	2020��1��29��20:59:02
	���ľ�̬���� 
*/ 

//�������ݽṹ
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode
{
	ElementType Data;//�������
	BinTree Left;  //ָ�������� 
	BinTree Right; //ָ�������� 
}; 


//1��˳����� 
int SequentialSearch(StaticTable *Tbl,ElementType K)
{
	//�ڱ�Tb[1]--Tb[n]�в��ҹؼ���ΪK������Ԫ��
	int i;
	Tbl->Element[0] = K;  //�����ڱ�
	for( i = Tbl->Length; Tbl->Element[i] != K;i-- )
	{
		return i;
	} 
} 

//2�����ֲ���
int BinarySearch(StaticTable *Tbl,ElementType K)
{
	int left,right,mid,NoFound = -1;
	
	left = 1;//��ʼ��߽�
	right = Tbl->Length;//��ʼ�ұ߽�
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







 
