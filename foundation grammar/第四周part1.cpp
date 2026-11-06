/*#include <stdio.h>

int main (void)
{
	int x;
	int n = 0;
	scanf("%d", &x );
	n++;
	
	x /= 10;
	
	while( x > 0 ){
		printf("in loop\n");
		n++;
		x /= 10;
		
		
	}
	printf("%d\n", n);
	return 0;
	
}*/

#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x);
	
	int n = 0;
	do
	{
		x /= 10;
		n ++;
	}while(x > 0);
	printf("%d", n);
	
	return 0;
	
	
}
