/*
猜数字游戏是令系统随机产生一个100以内的正整数，用户输入一个数对其猜测，需要你编写程序自动对其随机产生的
被猜数进行比较，并提示大了("Too big")，还是小了("Too small")，相等表示猜对了。如果猜到，则表示程序结束。程序
还要求统计猜的数字次数，如果1次猜出该数，提示"Bingo"，如果3次以内猜到该数，则提示"Luck you"，如果超过3次但是
在N(>3)以内(包括第N次)猜到该数，则提示"Good guess"，如果超过N次还未猜中，则提示"Game over"，并结束程序。
如果在到达N次之前，用户输入一个负数，也输出"Game over"，并结束程序
输入格式：
输入第一行中给出两个不超过100的正整数，分别是系统产生的随机数，以及猜测的最大次数N。随后每行给出一个
用户的输入，直到出现负数为止。
输出格式：
在一行中输出每次猜测相应的结果，直到输出猜对的结果或"Game over"则结束
输入案例：
58 4
case1:70	case2:70	case3:70
      50	      50	      77
      77	      -2	      22
      50 		              78
*/

#include <stdio.h>
int main(void)
{
	int number, n;
	int inp;
	int finished =	0;
	int cnt = 0;
	scanf("%d %d", &number, &n );
	do {
		scanf("%d", &inp );
		cnt++;
	if (inp < 0 ){
		printf("Gmae over\n");
		finished = 1;
	}else if (inp < number ){
		printf("Too small\n");
	}else if (inp > number){
		printf("Too big\n");
	}else {
		if (cnt == 1){
			printf("Bingo!\n");
		}else if (cnt <= 3){
			printf("Lcuk you\n");
		}else {
			printf("Game guess");
		}
		finished = 1;
	}
	if (cnt == n ){
		if (!finished){
			printf("Game over");
			finished = 1;
		}
	}
	
	}while (!finished);
	
	return 0;
}
