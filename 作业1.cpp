#include <stdio.h>

int main(void)
{
	int a,b;
	double avg;
	scanf("%d%d", &a,&b);
	avg = (a+b)/2.0;
	printf("%.2f\n", avg);
	return 0;
	
	
	
}

/*
第一个错误是第七行a和b前面要加&
第二个错误是第八行2改为2.0
第三个错误是第九行的%.2d改为%.2f
第四个错误是第九行的末尾少了;
*/
