/*
		2020��2��4��18:40:42
		�������ķǵݹ���� 
*/ 
/*
����

	����һ����㣬�Ͱ���ѹ��ջ�У���ȥ��������������
	�����������������󣬴�ջ�����������㲢������
	Ȼ������ָ����ȥ��������ý��������� 
*/
void InOrderTraversal(BinTree BT)
{
	BinTree T = BT;
	Stack S = CreatStack(MaxSize);//��������ʼջ
	while( T || !IsEmpty(S) ) 	
	{
		while(T)//һֱ������;�����ѹ��ջ�� 
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
���-->��������
 
	�ȸ������ӣ�Ȼ��
		�Ӷ�����ȡ��һ��Ԫ��
		���ʸ�Ԫ����ָ��Ľ��
		��ָ��Ԫ�ؽ������Һ��ӽ��ǿգ��������Һ��ӵ�ָ��˳����� 
*/ 
void LevelOrderTravesal( BinTree BT)
{
	Queue Q;
	BinTree T;
	if( !BT )//���ǿ���ֱ�ӷ��� 
	{
		return ;
	}
	Q = CreatQueue( MaxSize );//��������ʼ������ 
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


















