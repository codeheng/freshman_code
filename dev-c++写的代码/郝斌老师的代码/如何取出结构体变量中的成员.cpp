/*		2019��8��21��  10��03�� 	 
		ָ�������->��Ա�ǣ��ڼ�����л�תΪ��*ָ����������ķ�ʽִ�� 
*/	

# include <stdio.h>

//��һ�ַ�ʽ
struct student 
{ 
	int age;
	float score;
	char sex;
 }; 
int main(void)
{
	struct student st = {80,66.6f,'f'};//��ʼ���������ͬʱ����ֵ
	struct student * pst = &st;//&st���ܸĳ�st 
	
	st.score = 66.6f;//��һ�ַ�ʽ��66.6��c������Ĭ����double����
					//��Ҫ��ʾfloat��Ҫ��ĩβ����f��F 
	pst->age = 88;//�ڶ��ַ�ʽ 
	printf("%f\n",st.score);
	printf("%d\n",pst->age);
	
	
	return 0;
 } 
 /*		������
66.599998
88

--------------------------------
Process exited after 0.2207 seconds with return value 0
�밴���������. . . 
 
 */
