 /*   2019��8��21��  09��15�� 
 		�ṹ����ǰ�һЩ��������������������γɵ��µķ������ݽ��
		 �Ƽ��õ�һ�ַ�ʽ
		 �ڶ���ֱ����}���涨���˽ṹ������ 
		 ���������ǹ���ʲô�Ľṹ��ʡ���ˣ����ã� 
 
 */
 
 # include <stdio.h>
 
 //��һ�ַ�ʽ��4�е�9�оͱ�ʾ�ṹ������ 
 struct student
 {
 	int age;
 	float score;
 	char sex;
 }; //�ֺŲ�����ʡ�� 
 
 //�ڶ��ַ�ʽ
 struct student2
 {
 	int age;
 	float score;
 	char sex;
  } st2;
  
  //�����ַ�ʽ
 struct 
 {
 	int age;
 	float score;
 	char sex;
  } st3;
  
 int main(void)
 {
 	struct student st = {80,66.6,'f'};//f��ʾ�ַ���Ҫ������ 

 	return 0;
 }
