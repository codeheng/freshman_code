/*		2019年8月31日 15点12分 

*/ 

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	char c;
	printf("%d %d %d\n",sizeof 'a',sizeof(char),sizeof c);
	// a就是表示字符中的字节数  英文字符在ASCII中占一个字节即为1
	//char  占一个字节 
	
	system ("PAUSE");
	
	
	return 0;
}
/*		输出结果
1 1 1
请按任意键继续. . .

--------------------------------
Process exited after 3.471 seconds with return value 0
请按任意键继续. . . 


*/
