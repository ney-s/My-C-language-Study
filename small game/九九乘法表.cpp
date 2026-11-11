/*
九九乘法表
本题要求对任意给定的1位正整数N，输出从1*1到N*N的部分口诀表
输入格式：
输入在一行中给出一个正整数N(1<=N<=9)。
输出格式：
输出下面三角N*N部分口诀表，其中等号右边数字占4位，左对齐
*/

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N );
	int i,j;
	i = 1;
	while (i <= N){
		j = 1;
		while (j <= i){
			printf("%d*%d=%d", j, i, j * i );              // 这里i和j的顺序会影响表达的结果
			if (i * j < 10){
				printf("   ");
			}else{
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
	
}
