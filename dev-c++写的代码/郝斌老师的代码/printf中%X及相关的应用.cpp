/*   
    ʱ�� 19.8.1 15��25��
	Ŀ��  ���� %x %X %#x %#X ���÷�
*/ 


#include <stdio.h>

int main(void)
{
		int x = 47; 
		
		printf("%x\n",x);// ������Ϊ2f
		printf("%X\n",x);//  ������Ϊ2F
		printf("%#X\n",x);  // ������Ϊ 0X2F ���Ƽ�ʹ�ã� 
		printf("%#x\n",x);  // ������ Ϊ  0x2f 
	
	
	
	
	return 0;
}
