/*
 		2020��1��20��08:28:25
		 ���Ա�ĳ������ݽṹ 
*/ 
List MakeEmpty() //��ʼ��һ�������Ա� L
ElementType FindKth(int K,List L)  //����λ��K������ ��Ӧֵ
int Find(ElementType X,List L)  //�����Ա�L�� ����X��һ�γ��ֵ�λ��
void Insert(ElementType X,int i,List L) // ��λ��i��λ�ò�����Ԫ��X
void Delete(int i,List L)   //ɾ��ָ��λ��i��Ԫ��
int Length(List L)   //�������Ա�L�ĳ���n


/*
		���Ա��˳��ʵ�� 
*/ 
typedef struct LNode *List;
struct LNode 
{
	ElementType Data[MAXSIZE];
	int Last;//���һ��Ԫ�� 
};
struct LNode L;
List Ptrl;
//�����±�Ϊi��Ԫ�� ��L.Data[i] �� Ptrl->Data[i]
// ���Ա���  ��  L.Last + 1  ��  Ptrl->Last + 1 
 
//  ��Ҫ������ʵ��

//  1����ʼ��(�����յ����Ա�
List MakeEmpty()
{
	List Ptrl;
	Ptrl = (List)malloc(sizeof( struct LNode) );
	Ptrl->Last = -1;
	return Ptrl;
} 

//  2������
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
		return i; //�ҵ��󷵻����ڵ�λ��i 
}

//  3�����루���ƶ��ٲ���
void Insert(ElementType X,int i,List Ptrl)
{
	int j;
	if( Ptrl->Last == MAXSIZE )
	{
		printf("������");
		return; 
	}
	if( i<1 || i > Ptrl->Last + 2 ) 
	{
		printf("λ�ò��Ϸ�");
		return; 
	}
	for(j = Ptrl->Last;j > i-1;j--)
	{
		Ptrl->Data[j+1] = Ptrl->Data[j];//��������ƶ� 
		Ptrl->Data[i-1] = X;//������Ԫ�� 
		Ptrl->Last ++ ;	//Last��ָ�����Ԫ�� 
		return ;
	}
} 

// 4��ɾ������
void Delete(int i,List Ptrl)
{
	int j;
	if( i<1 || i>Ptrl->Last+1 )
	{
		printf("Ԫ�ز�����");
		return; 
	}
	for(j=i;j<Ptrl->last;j++)
	{
		Ptrl->Data[j-1] = Ptrl->Data[j];
		Ptrl->Last --;
		return;
	}
} 

 










 
