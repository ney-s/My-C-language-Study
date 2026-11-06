#include <stdio.h>


int main(void)
{
	double number;
	double sum = 0;
	double count = 0;
	
	scanf("%lf", &number);
	while (number != -1)
	{
		sum += number;
		count ++;
		scanf("%lf", &number);
	}
	
	printf("%f", sum / count);
	return 0;
}
