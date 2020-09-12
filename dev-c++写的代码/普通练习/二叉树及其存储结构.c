/*
		2020年2月4日16:04:43
		二叉树及其存储结构（递归遍历 
*/ 

1、Boolean isEmpty(BinTree BT)//判断BT是否为空
2、void Traversal(BinTree BT) //遍历，按某顺序访问结点
3、BinTree CreatBinTree() //创建二叉树

//常用遍历方法

void PreOrderTraversal(BinTree BT)//先序遍历
void InOrderTraversal(BinTree BT)//中序
void PostOrderTraversal(BinTree BT) //后序
void LevelOrderTraversal(BinTree BT) //层次遍历 


//链表存储
typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
	ElementType Data;
	BinTree Left;
	BinTree Right; 
} 
//先序
void PreOrderTraversal(BinTree BT)
{
	if(BT)
	{
		printf("%d",BT->Data);
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->right);
	}
} 
//中序
void InOrderTraversal(BinTree BT)
{
	if(BT)
	{
		InOrderTravesal(BT->left);
		printf("%d",BT->Data);
		InorderTravesal(BT->right);
	}
} 
//后序
void PostOrderTravesal(BinTree BT)
{
	if(BT)
	{
		PostOrderTravesal(BT->left);
		PostOrderTravesal(BT->right);
		printf("%d",BT->Data);
	}
} 















