//时间  19.8.3  19点10分
 //  测试 && 与 ||的作用 


# include <stdio.h>

int main(void) 
{
	int i = 20;
	int k = 20;
	int m;
	
	m = (1>2)||(k = 5);//非0即为真   &&且 ||或 
	printf("m = %d,k =%d\n",m,k);
	//输出结果为 m = 1  k= 5

	
	return 0;
}



//总结  逻辑运算符&&与||  &&表示且即有假就假，||是或有真就真 
