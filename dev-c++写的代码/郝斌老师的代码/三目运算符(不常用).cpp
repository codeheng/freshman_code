/*   19.8.8 14��36��
	 i = (3>2?5:12);�ȼ���
	 if(3>2)
	 	5;
	 else
	 	12; 

*/ 


# include <stdio.h>

int main(void)
{
	int i;
	
	i = (3>2?5:12);
	printf("%d\n",i);
	
	return 0;// ������Ϊ5  
 } 
