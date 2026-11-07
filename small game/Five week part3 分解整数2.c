// 针对上一章提及的尾数是0的情况
#include <stdio.h>
int main(void)
{
	int x;
	x = 8342;
	int t = x;
	int mask = 1;
	while(t > 9){
		t /= 10;
		mask *= 10;
	}printf("x=%d,mask=%d\n", t, mask );                  // debug The value of 'mask'
	do{
		int d = x / mask;
		printf("%d", d );
		if (mask > 9){
			printf(" ");
		}
		x %= mask;
		mask /= 10;
		// printf("x=%d,mask=%d,d=%d\n", x, mask, d);     // debug
	}while( mask > 0);
	printf("\n");
	
	return 0;
}
