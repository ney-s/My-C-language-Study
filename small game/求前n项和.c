/*
求序列前n项和
本题要求编写程序，计算序列 2/1+3/2+5/3......的前n项和。注意该序列从第二项起，每一项的分子是前一项分子和分母
的和，分母是前一项分子。
输入格式：
输入在一行中给出一个正整数N
输出格式：
在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围
输入样例：
20
输出案例：
32.66
*/

#include <stdio.h>
int main(void)
{
	int n;
	double dividend=2.0, divisor=1.0;
	double sum = 0.0;
	int i;
	double t;
	scanf("%d", &n );
	
	for (i=1; i<=n; i++){
		sum += dividend/divisor;
		t = dividend;
		dividend = dividend+divisor;
		divisor = t;
		
	}printf("%.2f\n", sum );
	
	return 0;

}

// 卧槽了 有毒 无响应 运行直接卡住了 无法输入 靠
