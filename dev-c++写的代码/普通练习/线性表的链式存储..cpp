/*
		2020��1��20��20:56:40 
		���Ա����ʽ�洢ʵ�� 
*/ 
typedef struct LNode *List
struct LNode
{
	ElementType Data;
	List Next;
};
struct Lnode L;
List Ptrl;

//  1�����	
int Length(List Ptrl)
{
	List p = Ptrl;//��pָ���һ�����
	int j;
	while(p)
	{
		p = p->next;
		j++;
	}
	return j;
}
//  2������
//(1)����Ų���FindKth
List FindKth(int K,List Ptrl)
{
	List p = Ptrl;
	int i;
	while(p!=NULL && i<K)
	{
		p = p->next;
		i++;
	}
	if( i == K)
		return p;
	else
		return NULL;
}
//(2)����ֵ����Find
List Find(Element X,List Ptrl)
{
	List p = Ptrl;
	while(p != NULL && p->Data != X)
	{
		p = p->next; 
	}
	return p;
} 

//3������(�ڵ�i-1���������һ��ֵΪX���½��)
/*
	  �ȹ���һ���½�㣬��sָ��
	  ���ҵ�����ĵ�i-1����㣬��pָ��
	  Ȼ���޸�ָ�룬�����㣨p֮�����s�� 
*/ 

List Insert(ElementType X,int i,List Ptrl)
{
	List p,s;
	if(i==1)  //�������ڱ�ͷ 
	{
		s = (List)malloc(sizeof(struct LNode));//������װ��� 
		s->Data = X;
		s->next = Ptrl;
		return s;
	}
	p = FindKth(i-1,Ptrl);//���ҵ�i-1�����
	if(p == NULL)
		printf("����i����");
		return NULL; 
	else
	{
		s = (List)malloc(sizeof(struct LNode));
		s->Data = X;
		s->next = p->next;
		p->next = s;
		return Ptrl; 
	} 
} 
 
 // 4��ɾ����ɾ�������i��λ�õĽ�㣩
 /*
 			���ҵ���i-1����㣬��pָ��
			����ָ��sָ��Ҫ��ɾ���Ľ�㣨p����һ����㣩
			Ȼ���޸�ָ�룬ɾ��s�Ľ��
			����ͷ�s��ָ��Ŀռ� 
 */ 
List Delete(int i,List Ptrl)
{
	List p,s;
	if(i==1)
	{
		s = Ptrl;
		if(Ptrl != NULL)
			Ptrl = Ptrl->next;
		else 
			return NULL;
		free(s);
		return Ptrl;
	}
	p = FindKth(i-1,Ptrl)
	if(p == NULL)
	{
		printf("��%d����㲻����",i-1);
		return NULL; 
	} 
	else if(p->next == NULL)
	{
		printf("��%����㲻����",i);
	}
	else
	{
		s = p->next;
		p->next = s->next;
		free(s);
		return Ptrl;
	}
}















 







