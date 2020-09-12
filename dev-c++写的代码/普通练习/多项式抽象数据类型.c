/*
		2020年1月20日08:21:15
		多项式存储   链表结构存储 
		链表每个结点存储多项式的非零项，包括数据域(指数和系数)和指针域 
*/
typedef struct PolyNode *Polynomial;
struct PolyNode
{
	int coef; //系数
	int expon;//指数
	Polynomial link; //指针域 
}
