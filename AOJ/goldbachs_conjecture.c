#include<stdio.h>

int main()
{
	int n,i,j,c;
	char prime[50001];
	for(i=0;i<=50000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(i=2;i<=50000;i++){
		if(!prime[i]) continue;
		for(j=i+i;j<=50000;j+=i){
			prime[j]=0;
		}
	}
	while(scanf("%d",&n)){
		if(n==0) break;
		c=0;
		for(i=2;i<=n/2;i++){
			if(prime[i]&&prime[n-i]){
				c++;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
