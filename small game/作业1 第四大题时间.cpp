/*
程序名称：时间换算
功能描述：输入0-86339范围内的整数秒数，转换为小时，分钟，秒并输出
*/

#include <stdio.h>
int main(void)
{
	int total;
	int hours,minutes,seconds;
	// 第一步：输入总秒数//
	printf("请输入秒数(0-86339):");
	scanf("%d", &total);
	
	// 第二步：用除法和取余完成换算 //
	hours = total / 3600;           // 除以3600取整，得到小时数 //
	minutes = total % 3600 / 60;    // 对3600取余去掉小时数，再除以60取整得到分钟数 //
	seconds = total % 3600;         // 对60取余，得到剩余的秒数 //
	
	// 第三步：输出换算结果 //
	printf("%d小时%d分钟%d秒\a\n", hours,minutes,seconds);
	
	return 0;
	
	
	
	
	
	
}
