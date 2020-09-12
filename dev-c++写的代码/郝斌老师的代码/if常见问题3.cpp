/*时间 19.8.6 15点38分
  总结  
if (表达式1)
	A;
else if (表达式2)
	B;
else if (表达式3)
	C;
else
	D;
即便表达式1和2 都成立，可只会执行A语句。 
*/ 

# include <stdio.h>

int main (void)
{
	if(3>2)
		printf("a\n");
	else if (3>1)
		printf("b\n");
	else
		printf("C\n"); 
	//输出结果为a  
	
	return 0;
}
