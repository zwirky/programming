#include<stdio.h>

int main()
{
	int num;
	long long int sum=1;
	scanf("%d",&num);
	while(num>0){
		sum=sum*num;
		num--;
	}
	printf("%lld\n",sum);
	return 0;
}
