// 在前面的素数求和的案例中，发现有些时候用自己创建的函数可以节省很多时间
#include <stdio.h>
int isPrime(int i)
{
	int ret=1;
	int k;
	for(k=2;k<=i-1;k++){
		if(i%k==0){
			ret=0;
			break;
		}
	}
	printf("%d\n",ret);
	return ret;
	
}
int main(void)
{
	int m,n,begin;
	int sum =0;
	int count=0;
	scanf("%d %d", &m, &n);
	if(m==1){
		m=2;
	}
	for(begin=m;begin<=n;begin++){
		if(isPrime(begin)){
			sum+=begin;
			count++;
		}
	}
	printf("%d %d\n", sum, count);
	
}
// 现在写一个求和函数
int sum(int begin, int end)
{
	int i;
	int sum =0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d到%d的和是%d", begin, end, sum);
}
int next(void)
{
	sum(1,10);
	sum(20,30);
	sum(30,40);
	
	return 0;
}
