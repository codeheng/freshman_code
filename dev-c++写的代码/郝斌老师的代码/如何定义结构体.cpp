 /*   2019年8月21日  09点15分 
 		结构体就是把一些基本数据类型组合起来形成的新的符合数据结果
		 推荐用第一种方式
		 第二种直接在}后面定义了结构体名字 
		 第三章则是关于什么的结构体省略了，不好！ 
 
 */
 
 # include <stdio.h>
 
 //第一种方式，4行到9行就表示结构体类型 
 struct student
 {
 	int age;
 	float score;
 	char sex;
 }; //分号不可以省略 
 
 //第二种方式
 struct student2
 {
 	int age;
 	float score;
 	char sex;
  } st2;
  
  //第三种方式
 struct 
 {
 	int age;
 	float score;
 	char sex;
  } st3;
  
 int main(void)
 {
 	struct student st = {80,66.6,'f'};//f表示字符，要加引号 

 	return 0;
 }
