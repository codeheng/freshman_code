 /*   19.8.10  07��13��
 	���switchǶ���� ��breakֻ��ֹ����������Ǹ�switch 
 
  */ 
 
 
 # include <stdio.h>
 
 int main(void)
 {	
 	int x=1,y=0,a=0,b=0;
 	switch(x)//��һ�� 
 	{
 	case 1:
 		switch(y)//�ڶ��� 
 		{
 		case 0:
 			a++;
 			break;//��ֹ�ڶ���switch 
 		case 1: 
 			b++;
 			break;
		}
	
		b = 100;
		break;//��ֹ��һ��switch  
	case 2:
		a++;
		b++;
		break;
	}
	printf("%d %d\n",a,b);
 	return 0;//������ a=1  b = 100 
 }
