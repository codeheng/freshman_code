#include<stdio.h>
int main()
{
    int n[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, temp;
    printf("ԭʼ����\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", n[i][j]);  /*���ԭʼ����*/
        printf("\n");
    }
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            if (j>i)
            {  /*�����Խ������Ϸ�������Ԫ�������Խ������·�������Ԫ�ؽ��е����򽻻�*/
                temp=n[i][j];
                n[i][j]=n[j][i];
                n[j][i]=temp;
            }
        }
    printf("ת�þ���\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", n[i][j]);  /*���ԭʼ�����ת�þ���*/
        printf("\n");
    }
    return 0;
}
