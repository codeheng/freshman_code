// 2019年9月1日  08点26分   

# include <stdio.h>

int main(void)
{
	int fahr;
	for(fahr = 0;fahr <= 300;fahr+=20)//可以进行修改利用#define 
			printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
	
	
	return 0;
}
/*  输出结果 
 0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9

--------------------------------
Process exited after 0.2154 seconds with return value 0
请按任意键继续. . . 

*/
