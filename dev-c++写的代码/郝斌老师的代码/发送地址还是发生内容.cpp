/*		2019年8月21日  14点53分
		发送地址好! 
		指针优点  
				快速传递数据
				耗用内存小
				执行速度快
				 

*/ 

# include <stdio.h>
# include <string.h>

struct student
{
	int age;//4个字节 
	char sex;//1个字节 
	char name[100];//100个字节 
};

void inputstudent(struct student*);
void outputstudent(struct student*);

int main(void)
{
	struct student st;
	printf("%d\n",sizeof(st));//占108个字节，需要组成原理知识 
	
	inputstudent(&st);//对结构体变量输入，必须发送st的地址 
	outputstudent(&st);//对结构体变量输出，可以发送st的地址也可以发送 内容
						//但为了减少内存的耗费，也为了提高执行速度，推荐发送地址
	
	
	return 0;
} 
void outputstudent(struct student *pst)//不发送数据，只发生地址 
{
		printf("%d %c %s\n",pst->age,pst->sex,pst->name);
}
void inputstudent(struct student * pstu)
{
		(*pstu).age = 10;
		strcpy(pstu->name,"张三");
		pstu->sex = 'f'; 
}
/*		输出结果
108
10 f 张三

--------------------------------
Process exited after 0.244 seconds with return value 0
请按任意键继续. 
*/ 
