/*
	2020年2月4日21:36:21
	二叉搜索树的插入 
*/

BinTree Insert(ElementType X,BinTree BST)
{
	if(!BST)//若原树为空 
	{
		BST = malloc(siezeof(struct TreeNode));
		BST->Data = X;
		BST->left = BST->right = NULL;  
	} 
	else
	{
		if( X < BST->Data )
		{
			BST->left = Insert(X,BST->left);
		}
		else if ( X > BST->Data)
		{
			BST->right = Insert(X,BST->right);
		}
	}
	return BST;
} 
