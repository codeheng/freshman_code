/*		2019��8��23�� 10��31��  

*/

# include <stdio.h>

enum weekday
{
		monday,tuesday,wednesday,thursday,friday,saturday,sunday	
};
/*���ǽ�WednesDay��ΪWednesDay = 5֮��MonDay��SunDay��ֵ�Ƕ��٣�
		�Դ˼Ӽ�����  
*/

void f(enum weekday i )//��������Ŀ��ֻ����������0��6֮������֣����β�i����Ϊö���ͣ�
						//����Ч�ı��⴫��ʧ�������
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
