/*   19.8.10 14点57分
	 定义数组要规范化，int a[5] = {1,2,3,4,5}
	 一维数组名不代表数组的所以元素
	 一维数组名代表数组第一个元素的地址 

 */ 


# include <stdio.h>
 
int main(void)
{
	int a[5] = {1,2,3,4,5};
	//a是数组的名字，5代表数组元素的个数，并且这五个元素分别用
	//a[0] a[1] a[2] a[3] a[4]表示 
	int i;
	
	for(i = 0;i<5;++i)
			printf("%d\n",a[i]);
	printf("%d\n",a[100]);//当输入不符合是，输出的将无用 
	
	return 0;
}
