#include<stdio.h>

int even(long long int num)
{
	num=num/2;
	return num;
}
int odd(long long int num)
{
	num=(num*3)+1;
	return num;
}

int main()
{
	long long int num,n;
	int count=0;

	scanf("%lld",&num);
	n=num;
	while(num!=0){
		if(n%2==0){
			n=even(n);
			count++;
		}else{
			n=odd(n);
			count++;
		}
		if(n==1){
			printf("%d\n",count);
			scanf("%lld",&num);
			count=0;
			n=num;
		}
	}
	return 0;
}
