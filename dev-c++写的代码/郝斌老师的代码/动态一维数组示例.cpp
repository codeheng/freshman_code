/*		2019��8��16��  16��12��	
 

*/ 

# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];//��intռ4���ֽڣ����Ա������ܹ�����20���ֽڣ�a[0]ռǰ�ĸ����Դ�����š� 
	int len;
	int * pArr;
	int i;
	
	//��̬�Ĺ���һά���� 
	printf("��������Ҫ��ŵ�Ԫ�صĸ���");
	scanf("%d",&len);
	pArr = (int*)malloc(4 * len);//���о��Ƕ�̬������һά���飬������ΪpArr�����鳤��Ϊlen
									// ÿ��Ԫ����int���ͣ����������int pArr[len] 
	/*		����������len = 5������ϵͳҪ��20���ֽڣ���int������4���ֽ�
			���pArr��ռǰ�ĸ��ֽڣ�pArr+1�Դ�����ţ��뾲̬�������� 
	
	*/
	//��һά������в�������Զ�̬һά������и�ֵ
	for(i = 0;i<len;++i)
			scanf("%d",&pArr[i]); 
			
	// ��һά����������
	printf("һά�����������\n");
	for(i = 0;i<len;++i)
			printf("%d\n",pArr[i]);
			
	free(pArr); 
	
	
	
	return 0;
 } 
 /*		������ʾ��
 ��������Ҫ��ŵ�Ԫ�صĸ���5
1 2 3 4 5
һά�����������
1
2
3
4
5

--------------------------------
Process exited after 3.856 seconds with return value 0
�밴���������. . . 
 
 */
