/*    19.8.10  19��46��
	 ����һ����������-1 �Ա� �Ǹ����жϲ����
	 �����ֻ���жϣ������ض���ֵ
	 ����˵ �����ͬ�Ķ����������ò�ͬ��ʽ��� ������ա�
	 ��һ��������� 

*/ 

# include <stdio.h>

int max2(int i,int j)
{
	if(i>j)
		return i;
	else 
		return j;
}
int main(void)
{
	int a,b,c,d,e,f;
	a = 1,b = 2,c = 3,d = 9,e = -5,f = 100;
	
	printf("%d\n",max2(a,b));
	printf("%d\n",max2(c,d));
	printf("%d\n",max2(e,f));
	//��������Ϊ  2  9  100 
	return 0;
}
