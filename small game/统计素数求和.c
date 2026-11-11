/*
统计素数并求和
本题要求统计给定整数M和N区间内素数的个数并对他们求和
输入格式：
输入在一行中给定的2个整数M和N(1<=M<=N<=500)
输出格式：
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
输入样例：
10 31
输出样例：
7 143
*/

#include <stdio.h>
int main(void)
{
	int M,N;
	scanf("%d %d", &M, &N);
	int i;
	int cnt = 0;                 // 计数素数
	int sum = 0;                 // 计算素数的和
	if (M==1){
		M=2;                     // 如果M等于1 不加这个if语句 这个程序会把1认为是素数
	}
	for (i=M; i<=N; i++){
		int isPrime = 1;         // 素数
		int k;
		for (k=2; k<i-1; k++){
			if (i%k==0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime==1){
			cnt++;
			sum+=i;
		}
	}
	printf("%d %d", cnt, sum);
	return 0;
	
}
