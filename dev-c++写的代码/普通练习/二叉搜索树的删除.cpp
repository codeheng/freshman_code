/*
		2020��2��5��08:48:52
		������������ɾ��
			�������
		Ҫɾ������Ҷ�ӽ�㣺ֱ��ɾ���������޸��丸�ڵ�ָ�룬��ΪNULL
		Ҫɾ���Ľ��ֻ��һ������ʱ�����丸�׽���ָ��ָ��Ҫɾ�����ĺ��ӽ��	
		��ɾ���Ľ�����Һ��Ӿ��У�����һ�������汻ɾ���Ľ��(����������СԪ�ػ������������Ԫ��)	 
*/ 
BinTree Delete(ElementType X,BinTree BST)
{
	Position tmp;
	if(!BST)
		printf("Ҫɾ����Ԫ��δ�ҵ�");
	else if( X < BST->Data ) 
		BST->left = Delete(X,BST->left);//�������ݹ�ɾ�� 
	else if(X> BST->Data)
		BST->right = Delete(X,BST->right);//�������ݹ�ɾ�� 
	else//�ҵ���ɾ���Ľ�� 
		if(BST->left && BST->right)//������������� 
		{
			tmp = FindMin(BST->right);
			BST->Data = tmp->Data;
			BST->right = Delete(BST->Data,BST->right);//��ɾ��������������ɾ����СԪ�� 
		}
		else//��ɾ�������һ�������� 
		{
			tmp = BST;
			if(!BST->left)//���Һ��ӻ��� 
				BST = BST->right;
			else if(!BST->right)
				BST = BST->left;
			free(tmp); 
		}
	return BST;
}












