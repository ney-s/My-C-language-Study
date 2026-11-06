#include <stdio.h>
int main()
{
	int x;
	
	scanf("%d", &x);
	
	int f = 0;
	
	
	if(x < 0){
		f = -1;
		
		//TODO
	}else if(x == 0){
		f = 0;
		
	}else
	    f = x * x;
	    

	printf("您的计算结果为%d", f);
	    
	return 0;
}
