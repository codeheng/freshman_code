 #include <stdio.h>
 
 void f(int * p)
 {
 	*p = 10;
 	
  } 
 int main(void)
 {
 	int i = 5;
 	
 	f(&i);
 	printf("i = %d\n",i);
 	
 	
 	
 	return 0;
  } 
  /*	输出结果
  i = 10

--------------------------------
Process exited after 0.2286 seconds with return value 0
请按任意键继续. . . 
  */ 
