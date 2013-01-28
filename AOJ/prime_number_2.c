#include<stdio.h>

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++){
		if(!(n%i)) return 0;
	}
	return 1;
}

int main()
{
	int n,i;
	while(scanf("%d\n",&n)){
		for(i=n-1;0<=i;i--){
			if(prime(i)){
				printf("%d",i);
				break;
			}
		}
		for(i=n+1;;i++){
			if(prime(i)){
				printf(" %d\n",i);
				break;
			}
		}
	}
	return 0;
}
