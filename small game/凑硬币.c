#include <stdio.h>

int main(void)
{
	int x;
	x = 2;
	int one, two, five;
	for(one=1;one<=x*10;one++){
		for(two=1;two<=x*10;two++){
			for(five=1;five<=x*10;five++){
				if(one+two*2+five*5==x*10){
					printf("可以用%d个1角和%d个2角和%d个5角得到%d元\n", one, two, five, x );
					goto out;
				}
			}
			
		}
		
	}
out:
	return 0;
}
