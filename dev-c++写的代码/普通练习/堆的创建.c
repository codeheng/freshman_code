/*
	2020��2��6��20:40:25
	�ѣ��Ǹ���ȫ�����������ҽ���ŵ���˳���ţ���Ϊ����Ѻ�С���� 
*/ 
MaxHeap Creat( int MaxSize ) //����һ���յ�����
Boolean IsFull(MaxHeap H) //�ж�����H�Ƿ�����
Insert(MaxHeap H,ElementType item) //��Ԫ��item��������H��
Boolean IsEmpty(MaxHeap H) //�ж������Ƿ�Ϊ��
ElementType DeleteMax(MaxHeap H) //����H�е����Ԫ��

//���ѵĴ���
typedef struct HeapStruct *MaxHeap;
struct HeapStruct
{
	ElementType *Elements;//�洢��Ԫ�ص����� 
	int Size; //�ѵĵ�ǰԪ�ظ��� 
	int Capacity;//�ѵ�������� 
};

MaxHeap Creat(int MaxSize)
{
	MaxHeap H = malloc(sizeof(struct HeapStruct));
	H->Elements = malloc((MaxSize + 1) * sizeof(ElementType));
	H->Size = 0;
	H->Capacity = MaxSize;
	H->Elements[0] = MaxData;//���� �ڱ� Ϊ���ڶ������п���Ԫ�ص�ֵ�������Ժ���������
	
	return H;	
}
















