/*求最大公约数
如果b等于0，计算结束，a就是最大公约数
否则，计算a除以b的余数，然后让a等于b，让b等于余数
再回到第一步
*/

#include <stdio.h>

int main(void)
{
	int a, b,t;
	scanf("%d %d", &a, &b);
	int orig_a = a;
	int orig_b = b;
	while(b != 0){
		t = a%b;
		a =b;
		b = t;
		// printf("a=%d,b=%d,t=%d\n", a, b, t);                // 了解循环过程中 abt的变化过程
	}
	printf("%d和%d最大公约数是%d\n.", orig_a, orig_b, a);
	
	return 0;
}
