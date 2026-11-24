#include <stdio.h>
int main(void)
{
	char c = 1;         // 整数
	char d = '1';       // 字符
	if(c==d){
		printf("相等\n");
	}else
	printf("不相等\n");
	
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	
	// printf和scanf用%c来输入输出字符
	char a;
	scanf("%c", &a);
	printf("a=%c\n", a);
	printf("a=%d\n", a);
	
	// 如何输出'1'这个字符给char c
	// scanf("%c",&c)->1
	// scanf("%d",&i) c=i, ->49
	// '1',的ASCII编码是49,所以当c==49时，它代表'1'
	if(49=='1'){
		printf("ok\n");
	}
	
	// 混合输出
	int i;
	char s;
	scanf("%d %c", &i, &s);
	printf("i=%d, c='%c', c=%d\n", i, s, s);
	scanf("%d%c", &i, &s);
	printf("i=%d, c='%c', c=%d\n", i, s, s);
	// 有空格说明前面的整数读取到空格，如果没有空格那么前面的整数读取到整数就结束了
	
	printf("字符计算\n");
	// 字符计算
	char f = 'A';
	f++;
	printf("%c\n", f);
	
	/*大小写转换
	字母在ASCII表中是顺序排列的
	大写字母和小写字母是分开排列的，并不在一起
	'a'-'A'可以得到两段之间的距离，于是
	a+'a'-'A'可以把一个大写的字母变成小写字母，而
	a+'A'-'a'可以把一个小写的字母变成大写字母*/
	printf("大小写转换");
	char q = 'q';
	q = q+'Q'-'q';
	printf("%c", q);
	
	
	
	
	return 0;
	
}
