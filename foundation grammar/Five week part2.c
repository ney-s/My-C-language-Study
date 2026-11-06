#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	
	// x = 15;      debug
	int i;
	int isPrime=1;      //  x是素数？
	for(i=2;i<x;i++){
		if(x % i == 0){
			isPrime = 0;
			break;
			
		}
		// printf("不能被%d整除的数是%d\n", x, i);
	}
	if(isPrime == 1){
		printf("%d是素数", x);	
	}else {
		printf("%d不是素数", x);
	}
	return 0;
}
