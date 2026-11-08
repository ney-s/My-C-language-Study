#include <stdio.h>
int main(void)
{
	int a;
	a = 6;
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(double)=%ld\n", sizeof(double));
	printf("sizeof(long double)=%ld\n", sizeof(long double));
	printf("sizeof(a)=%ld\n\a", sizeof(a));
	return 0;
}
