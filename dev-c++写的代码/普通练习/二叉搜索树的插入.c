/*
	2020��2��4��21:36:21
	�����������Ĳ��� 
*/

BinTree Insert(ElementType X,BinTree BST)
{
	if(!BST)//��ԭ��Ϊ�� 
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
