#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int fact = 1;
	
	//for(int i = 2/*初始条件*/;i<=n/*循环继续的条件*/;i++/*循环要做的事*/){
	//	fact *=i;
	//	printf("fact=%d,i=%d\n", fact, i );
	
	
	
	for(int i=n;i>1;i--){

		fact *=i;
		printf("%d\n", fact);
		
	}
	printf("%d!=%d", n, fact);
	
	return 0;
}
