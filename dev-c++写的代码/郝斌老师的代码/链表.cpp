# include <stdio.h>

// ����һ������ڵ���������� 
struct Node
{
	int data;
	struct Node *pNext;

};
 
 int main(void)
{
 		struct Node *pHead;//�����������ͷ�ڵ�ĵ�ַ 
 		
 		pHead = CreateList();
 		TraverseList(pHead);
 		
 		return 0;
}
