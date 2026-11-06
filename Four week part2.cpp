#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("这是一个猜数字的小游戏\n");
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100整数，猜猜这个数是多少\n");
	do
	{
		scanf("%d", &a );
		count ++;
		if(a > number){
			printf("你猜的数字太大了，猜小一点\n");
			
		}else if(a < number){
			printf("你猜的数太小了，猜大一点\n");
			
			
		}	
	}while(a != number);
	if(count > 10){
		printf("你用了%d次猜对了答案，答案是%d，下次继续努力", count, number);
	}else{
		printf("恭喜你，只用了%d次猜对了答案，答案是%d", count, number);
		
	}
	return 0;
	
}
