/*		19.8.7 14点36分
    	计算 1+1/2+1/3+...+1/100=？
		总结 首先要知道 1/2 = 0 ...（因为这是整型，结果肯定也是整型）
		如果 sum = sum + 1/i 的话 1/i将一直等于0
		最终输出sum = 1
		所以要利用浮点型 
 
*/ 


 # include <stdio.h>
 
 int main(void)
 {
 	int i;
	float sum;
	
	for(i = 1;i<=100;++i)
 		sum = sum + 1.0/i;  //推荐！ 
 		// sum = sum + 1/(float)(i) // 是对的 但不推荐（强制类型转化） 
 		// sum =  sum  + float(1/i)  这样是不对的 ，0转换为浮点型仍是0 
 		printf("sum = %f\n",sum);
 		
	return 0;// 输出结果为5.187378 
  } 
