/*		2019��8��21��  14��53��
		���͵�ַ��! 
		ָ���ŵ�  
				���ٴ�������
				�����ڴ�С
				ִ���ٶȿ�
				 

*/ 

# include <stdio.h>
# include <string.h>

struct student
{
	int age;//4���ֽ� 
	char sex;//1���ֽ� 
	char name[100];//100���ֽ� 
};

void inputstudent(struct student*);
void outputstudent(struct student*);

int main(void)
{
	struct student st;
	printf("%d\n",sizeof(st));//ռ108���ֽڣ���Ҫ���ԭ��֪ʶ 
	
	inputstudent(&st);//�Խṹ��������룬���뷢��st�ĵ�ַ 
	outputstudent(&st);//�Խṹ�������������Է���st�ĵ�ַҲ���Է��� ����
						//��Ϊ�˼����ڴ�ĺķѣ�ҲΪ�����ִ���ٶȣ��Ƽ����͵�ַ
	
	
	return 0;
} 
void outputstudent(struct student *pst)//���������ݣ�ֻ������ַ 
{
		printf("%d %c %s\n",pst->age,pst->sex,pst->name);
}
void inputstudent(struct student * pstu)
{
		(*pstu).age = 10;
		strcpy(pstu->name,"����");
		pstu->sex = 'f'; 
}
/*		������
108
10 f ����

--------------------------------
Process exited after 0.244 seconds with return value 0
�밴���������. 
*/ 
