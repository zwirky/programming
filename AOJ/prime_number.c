#include<stdio.h>

int prime(int n)
{
	int i;

	if(n<2) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;

	for(i=3;i*i<=n;i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int i;
	int prime_num;
	int count;

	while(scanf("%d",&prime_num)!=EOF){
		count=0;
		for(i=1;i<=prime_num;i++){
			if(prime(i)){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
