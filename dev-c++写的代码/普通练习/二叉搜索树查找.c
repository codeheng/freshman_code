/*
		2020��2��4��21:00:31
		������ 
*/ 
Position Find(ElementType X,BinTree BST) //�Ӷ������в���X�����ؽ�����ڵĵ�ַ
Position FindMin(BinTree BST) //�Ӷ����������в��Ҳ�������СԪ�����ڽ��ĵ�ַ 
Position FindMax(BinTree BST) //�Ӷ����������в��Ҳ��������Ԫ�����ڽ��ĵ�ַ
BinTree Insert(ElementType X,BinTree BST) 
BinTree Delete(ElementType X,BinTree BST)

//����1
Position Find(ElementType X,BinTree BST)
{
	if(!BST)
		return 0;
	if(X > BST->Data)
	{
		return Find(X,BST->right);//���������еݹ���� 
	}
	else if(X < BST->Data)
	{
		return Find(X,BST->left);//���������еݹ���� 
	}
	else
		return BST;
} 
//����2������������β�ݹ飬���Կ�����ѭ��ʵ��
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



























