/*  19.8.9 15��51��

   break��������if ����if��ѭ���ڲ����Ӿ� 

*/ 

# include <stdio.h>

int main(void)
{ 
	int i;
	
/*	switch (2)
	{
	case 2:    //����Ҫ�ӿո񣬲�Ȼ����ʾ����� 
		printf("����!\n");
		break;  
	} 
*/	
	
	for(i = 0;i<3;++i)
	{
		if(3>2)
			break;//����breakע�͵������������ �ٺ� 
		printf("�ٺ�!\n");
	}
	return 0;//��Զ������ʾ������  ��Ϊbreak���Ƶ�ʱforѭ������if 
 } 
