/*
	2020��2��4��21:24:26
	��������������2 
*/
//����СԪ��
/*
		ps:���Ԫ��һ�����������ҷ�֧�Ķ˵���
			��СԪ��һ�������������֧�Ķ˵��� 
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
//�����Ԫ�أ�������ѭ��ʵ��
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














