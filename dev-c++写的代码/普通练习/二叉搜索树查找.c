/*
		2020年2月4日21:00:31
		二叉树 
*/ 
Position Find(ElementType X,BinTree BST) //从二叉树中查找X，返回结点所在的地址
Position FindMin(BinTree BST) //从二叉搜索树中查找并返回最小元素所在结点的地址 
Position FindMax(BinTree BST) //从二叉搜索树中查找并返回最大元素所在结点的地址
BinTree Insert(ElementType X,BinTree BST) 
BinTree Delete(ElementType X,BinTree BST)

//查找1
Position Find(ElementType X,BinTree BST)
{
	if(!BST)
		return 0;
	if(X > BST->Data)
	{
		return Find(X,BST->right);//向右子树中递归查找 
	}
	else if(X < BST->Data)
	{
		return Find(X,BST->left);//向左子树中递归查找 
	}
	else
		return BST;
} 
//查找2，上述是利用尾递归，所以可以用循环实现
Position Find(ElementType X,BinTree BST)
{
	while(BST)
	{
		if(X>BST->Data)
		{
			BST = BST->right;
		}
		else if(X < BST->Data) 
		{
			BST = BST->left;
		}
		else
			return BST;
	}
	return NULL;
} 



























