/*
		2020��2��4��16:04:43
		����������洢�ṹ���ݹ���� 
*/ 

1��Boolean isEmpty(BinTree BT)//�ж�BT�Ƿ�Ϊ��
2��void Traversal(BinTree BT) //��������ĳ˳����ʽ��
3��BinTree CreatBinTree() //����������

//���ñ�������

void PreOrderTraversal(BinTree BT)//�������
void InOrderTraversal(BinTree BT)//����
void PostOrderTraversal(BinTree BT) //����
void LevelOrderTraversal(BinTree BT) //��α��� 


//����洢
typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
	ElementType Data;
	BinTree Left;
	BinTree Right; 
} 
//����
void PreOrderTraversal(BinTree BT)
{
	if(BT)
	{
		printf("%d",BT->Data);
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->right);
	}
} 
//����
void InOrderTraversal(BinTree BT)
{
	if(BT)
	{
		InOrderTravesal(BT->left);
		printf("%d",BT->Data);
		InorderTravesal(BT->right);
	}
} 
//����
void PostOrderTravesal(BinTree BT)
{
	if(BT)
	{
		PostOrderTravesal(BT->left);
		PostOrderTravesal(BT->right);
		printf("%d",BT->Data);
	}
} 















