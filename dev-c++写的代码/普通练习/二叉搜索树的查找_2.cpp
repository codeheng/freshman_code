/*
	2020年2月4日21:24:26
	二叉搜索树查找2 
*/
//找最小元素
/*
		ps:最大元素一定在树的最右分支的端点上
			最小元素一定在树的最左分支的端点上 
*/
Position FindMin(BinTree BST)
{
	if(!BST)
		return NULL;
	else if(!BST->left)
		return BST;
	else
		return FindMin(BST->left); 
} 
//找最大元素，可利用循环实现
Position FindMax(BinTree BST) 
{
	if(BST)
	{
		while(BST->right)
		{
			BST = BST->right;
		}
	}
	return BST;	
}














