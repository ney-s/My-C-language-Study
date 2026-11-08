/* 
求符合给定条件的整数集
要求：给定不超过6的整数A，考虑从A开始的连续4个数字。并输出所有由它们组成的无重复数字的三位数
输入格式：
输入在一行中给出A
输出格式：
输出满足条件的3位数，要求从小到大，每行6个数。整数间以空格分隔，但行末不能有多余的空格
*/

#include <stdio.h>
int main(void)
{
	int A;
	scanf("%d", &A);
	int i,j,k;
	int cnt = 0;                 // 计数器，计数总共有几个结果
	
	i=A;
	while(i<=A+3){
		j=A;
		while(j<=A+3){
			k=A;
			while(k<=A+3){
				if(i!=j){
					if(i!=k){
						if(j!=k){
							cnt++;
							printf("%d%d%d", i, j, k);
							if(cnt==6){
								printf("\n");
								cnt=0;
							}else{
								printf(" ");
								
							}
							
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
		
	}
	return 0;
	
}
