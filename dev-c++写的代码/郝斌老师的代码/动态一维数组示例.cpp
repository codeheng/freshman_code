/*		2019年8月16日  16点12分	
 

*/ 

# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];//因int占4个字节，所以本数组总共包含20个字节，a[0]占前四个，以此向后排。 
	int len;
	int * pArr;
	int i;
	
	//动态的构造一维数组 
	printf("请输入你要存放的元素的个数");
	scanf("%d",&len);
	pArr = (int*)malloc(4 * len);//此行就是动态构造了一维数组，数组名为pArr，数组长度为len
									// 每个元素是int类型，因此类似于int pArr[len] 
	/*		试数，假设len = 5；则向系统要了20个字节，因int类型是4个字节
			因此pArr就占前四个字节，pArr+1以此向后排，与静态数组类似 
	
	*/
	//对一维数组进行操作。如对动态一维数组进行赋值
	for(i = 0;i<len;++i)
			scanf("%d",&pArr[i]); 
			
	// 对一维数组进行输出
	printf("一维数组的内容是\n");
	for(i = 0;i<len;++i)
			printf("%d\n",pArr[i]);
			
	free(pArr); 
	
	
	
	return 0;
 } 
 /*		输出结果示例
 请输入你要存放的元素的个数5
1 2 3 4 5
一维数组的内容是
1
2
3
4
5

--------------------------------
Process exited after 3.856 seconds with return value 0
请按任意键继续. . . 
 
 */
