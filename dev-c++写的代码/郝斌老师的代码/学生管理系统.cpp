/*
		2019��8��22�� 16��07��
		
		����ѧ����Ϣ������ѧ���ɼ��ߵͣ������ 
*/

# include <stdio.h>
# include <malloc.h>

struct student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len;
	struct student * pArr;
	int i,j;
	struct student t; 
	
	//��̬�Ĺ���һά����
	printf("������ѧ���ĸ���\n");
	printf("len = ");
	scanf("%d",&len);
	pArr = (struct student*)malloc(len * sizeof(struct student));
	
	//����
	for (i = 0;i<len;++i)
	{
		printf("�������%d��ѧ������Ϣ\n",i+1);
		printf("age = ");
		scanf("%d",&pArr[i].age);
		
		printf("name = ");
		scanf("%s",pArr[i].name);//name����������������Ѿ���������Ԫ�صĵ�ַ�����Բ��ü�&
		

		printf("score = ");
		scanf("%f",&pArr[i].score);
	} 
	
// ��ѧ���ɼ���������ð���㷨��
for(i = 0;i<len-1;++i)
{
		{
				if(pArr[j].score > pArr[j+1].score)//>��ʾ����<����
				{
						t = pArr[j];
						pArr[j] = pArr[j+1];
						pArr[j+1] = t; 
				} 
		}
} 
printf("\n\nѧ������Ϣ��\n");

//���
for (i = 0;i<len;++i)
{
		printf("��%d��ѧ������Ϣ��\n",i+1);
		printf("age = %d\n",pArr[i].age);
		printf("name = %s\n",pArr[i].name);
		printf("score = %f\n",pArr[i].score); 
		
		printf("\n");
 } 
	return 0;
 } 
