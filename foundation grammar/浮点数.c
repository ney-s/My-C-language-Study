/*超出范围的浮点数
printf输出inf代表超过范围的浮点数：±∞
printf输出nan代表不存在的浮点数
在Linux或者Mac就是表示以上的形式，如果是windows则不是，无穷大：1.#INF00，负无穷大：-1.#INF00,无效1.#IND00
*/
#include <stdio.h>
int main(void)
{
	printf("%f\n", 12.0/0.0);
	printf("%f\n", -12.0/0.0);
	printf("%f\n", 0.0/0.0);
//	printf("%f\n", 12/0);        这句是无效的
	
	return 0;
	
}


// a = 12.33f        带小数的字面量的double不是float，float需要用f或者F后缀来表明身份
