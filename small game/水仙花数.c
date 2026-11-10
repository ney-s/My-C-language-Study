/*
水仙花数
水仙花数是指一个N位正整数(N>=3),它的每个位上的数字的N次幂之和等于它本身。
例如：153=1的三次方+5的三次方+3的三次方
本题要求编写程序,计算出所有的N位水仙花数。
输入格式：
输入一行中给出一个正整数N(3<=N<=7)。
输出格式：
按照递增顺序输出所有N位水仙花数，每个数字占一行。
*/

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N );
	
	int first = 1;
	int i = 1;
	while(i < N ){
		first *= 10;
		i ++;
		
	}
	// printf("first=%d", first);       // 测试first是不是我们要的那个大小
	// 遍历100-999
	i = first;
	while(i < first * 10){
		int t = i;                  // 因为要把i分解掉，会破坏i值，所以设t来储存i的值
		int sum = 0;                // 每位的N次幂的和
		do {
			int d = t % 10;         // d就是t取余后的值，也就是t的最后一位
			t /= 10;
			int p = 1;              // 先初始化，p代表幂的结果
			int j = 0;              // 计数
			                        // 这里需要注意幂的计数应该是N-1次 例如d^2实际是d*d，*只出现一次
			while( j < N ){
				p *= d;
				j ++;
			}
			sum += p;
			
			
		}while (t > 0 );            // 建议在做分解数字的时候使用do-while循环 因为do-while循环可以解决0的问题
    	if( sum == i){
			printf("%d\n", i );
			
		}
		i ++;
		
		
	}
	
	return 0;
}

// 经典不错的题目
