/*
		2020年2月5日08:48:52
		二叉搜索树的删除
			三种情况
		要删除的是叶子结点：直接删除，并再修改其父节点指针，置为NULL
		要删除的结点只有一个孩子时：将其父亲结点的指针指向要删除结点的孩子结点	
		若删除的结点左右孩子均有：用另一个结点代替被删除的结点(右子树的最小元素或左子树的最大元素)	 
*/ 
BinTree Delete(ElementType X,BinTree BST)
{
	Position tmp;
	if(!BST)
		printf("要删除的元素未找到");
	else if( X < BST->Data ) 
		BST->left = Delete(X,BST->left);//左子树递归删除 
	else if(X> BST->Data)
		BST->right = Delete(X,BST->right);//右子树递归删除 
	else//找到了删除的结点 
		if(BST->left && BST->right)//有左右两个结点 
		{
			tmp = FindMin(BST->right);
			BST->Data = tmp->Data;
			BST->right = Delete(BST->Data,BST->right);//在删除结点的右子树中删除最小元素 
		}
		else//被删除结点有一个结点或无 
		{
			tmp = BST;
			if(!BST->left)//有右孩子或无 
				BST = BST->right;
			else if(!BST->right)
				BST = BST->left;
			free(tmp); 
		}
	return BST;
}












