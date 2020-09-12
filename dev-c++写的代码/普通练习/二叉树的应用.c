/*
	2020年2月4日19:06:11
	二叉树的应用 
*/
//遍历的应用，输出二叉树的叶子结点

void PreOrderPrintLeaves(BinTree BT)
{
	if(BT)
	{
		if( !BT->left && !BT->right )
		{
			printf("%d",BT->Data);
		}
		PreOrderPrintLeaves(BT->Left);
		PreOrderPrintLeaves(BT->Right);
	}
} 

//求二叉树的高度

int PostOrderGetHeight( BinTree BT)
{
	int HL,HR,MaxH;
	if(BT)
	{
		HL = PostOrderGetHeight(BT->left);
		HR = PostOrderGetHeight(BT->right);
		max = (HL > HR )?HL:HR;
		return max + 1;
	}
	else 
		return 0;
		
} 


















 
