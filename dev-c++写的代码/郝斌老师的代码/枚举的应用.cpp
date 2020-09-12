/*		2019年8月23日 10点31分  

*/

# include <stdio.h>

enum weekday
{
		monday,tuesday,wednesday,thursday,friday,saturday,sunday	
};
/*考虑将WednesDay改为WednesDay = 5之后，MonDay与SunDay的值是多少？
		以此加减即可  
*/

void f(enum weekday i )//本函数的目的只是期望接受0～6之间的数字，将形参i定义为枚举型，
						//以有效的避免传参失误的问题
{
		switch(i)
		{
			case 0:
				printf("monday\n");
				break;
			case 1:
				printf("tuesday\n");
				break;
			case 2:
				printf("wednesday\n");
				break;
			case 3:
				printf("thursday\n");
				break;
			case 4:
				printf("friday\n");
				break;
			case 5:
				printf("saturday\n");
				break;
			case 6: 
				printf("sunday\n");
				break;
				
		}
}
int main(void)
{
		f(friday);
		
		return 0;


	return 0;
 } 
