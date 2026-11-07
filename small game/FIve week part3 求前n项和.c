// 前n项求和
#include <stdio.h>

int main(void)
{
	int n;
	int i;
	double sum = 0;
	        //int sign =1;          // 如果遇到求前n项和的公式是一加一减的 引入这个变量
	scanf("%d", &n );
						  //n = 100;              // debug
	for(i=1;i<=n;i++){
		sum += 1.0/i;
			//sum += sign*1.0/i;
			//sign = -sign;     // 为了让公式是一加一减
		
	}
	printf("f(%d)的前n项和为%lf", n, sum);
	
	return 0;
}
