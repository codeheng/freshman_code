 /*   19.8.10  07点13分
 	多层switch嵌套中 ，break只终止离它最近的那个switch 
 
  */ 
 
 
 # include <stdio.h>
 
 int main(void)
 {	
 	int x=1,y=0,a=0,b=0;
 	switch(x)//第一个 
 	{
 	case 1:
 		switch(y)//第二个 
 		{
 		case 0:
 			a++;
 			break;//终止第二个switch 
 		case 1: 
 			b++;
 			break;
		}
	
		b = 100;
		break;//终止第一个switch  
	case 2:
		a++;
		b++;
		break;
	}
	printf("%d %d\n",a,b);
 	return 0;//输出结果 a=1  b = 100 
 }
