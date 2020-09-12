/*
		2020年2月4日18:40:42
		二叉树的非递归遍历 
*/ 
/*
中序

	遇到一个结点，就把它压入栈中，并去遍历它的左子树
	当左子树遍历结束后，从栈顶弹出这个结点并访问他
	然后按照右指针再去中序遍历该结点的右子树 
*/
void InOrderTraversal(BinTree BT)
{
	BinTree T = BT;
	Stack S = CreatStack(MaxSize);//创建并初始栈
	while( T || !IsEmpty(S) ) 	
	{
		while(T)//一直向左并沿途将结点压入栈中 
		{
			Push(S,T);
			T = T->left;
		}
		if( !isEmpty(S) )
		{
			T = pop(S);
			printf("%d",T->Data);
			T = T->right;
		}
	}
}
/*
层次-->借助队列
 
	先根结点入队，然后
		从队列中取出一个元素
		访问该元素所指向的结点
		若指向元素结点的左右孩子结点非空，则将其左右孩子的指针顺序入队 
*/ 
void LevelOrderTravesal( BinTree BT)
{
	Queue Q;
	BinTree T;
	if( !BT )//若是空树直接返回 
	{
		return ;
	}
	Q = CreatQueue( MaxSize );//创建并初始化队列 
	AddQ(Q,BT);
	while( !IsEmpty(Q)  )
	{
		T = DeleteQ(Q);
		printf("%d\n",T->Data);
		if(T->left)
		{
			AddQ(Q,T->left);
		}
		if(T->right)
		{
			Add(Q,T->right);
		}
	}
}


















