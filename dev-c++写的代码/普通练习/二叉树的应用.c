/*
	2020��2��4��19:06:11
	��������Ӧ�� 
*/
//������Ӧ�ã������������Ҷ�ӽ��

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

//��������ĸ߶�

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


















 
