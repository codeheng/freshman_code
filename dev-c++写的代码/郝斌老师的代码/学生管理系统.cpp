/*
		2019年8月22日 16点07分
		
		输入学生信息，根据学生成绩高低，输出！ 
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
	
	//动态的构造一维数组
	printf("请输入学生的个数\n");
	printf("len = ");
	scanf("%d",&len);
	pArr = (struct student*)malloc(len * sizeof(struct student));
	
	//输入
	for (i = 0;i<len;++i)
	{
		printf("请输入第%d个学生的信息\n",i+1);
		printf("age = ");
		scanf("%d",&pArr[i].age);
		
		printf("name = ");
		scanf("%s",pArr[i].name);//name是数组名，本身就已经是数组首元素的地址，所以不用加&
		

		printf("score = ");
		scanf("%f",&pArr[i].score);
	} 
	
// 按学生成绩升序排序（冒泡算法）
for(i = 0;i<len-1;++i)
{
		{
				if(pArr[j].score > pArr[j+1].score)//>表示升序，<降序
				{
						t = pArr[j];
						pArr[j] = pArr[j+1];
						pArr[j+1] = t; 
				} 
		}
} 
printf("\n\n学生的信息是\n");

//输出
for (i = 0;i<len;++i)
{
		printf("第%d个学生的信息是\n",i+1);
		printf("age = %d\n",pArr[i].age);
		printf("name = %s\n",pArr[i].name);
		printf("score = %f\n",pArr[i].score); 
		
		printf("\n");
 } 
	return 0;
 } 
