#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x );
	//x = 12345;
	int digit;
	int ret=0;
	
	while(x > 0){
		digit = x%10;
		//printf("%d\nnext\n", digit);
		ret = ret*10 + digit;
		//printf("x = %d, digit = %d, ret = %d\n", x, digit, ret );
		x /= 10;
		//printf("x /= 10 after the value=%d\n", x );
		
	}printf("%d",ret);
	return 0;
}
