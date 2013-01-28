#include<stdio.h>

int main()
{
	int n,j,k;
	while(scanf("%d",&n)){
		if(n==0) break;
		if(n%2==0) n--;
		for(j=0;;n-=2){
			for(k=3;k<n/2;k+=2){
				if(n%k==0) break;
			}
			if(k<n/2){
				j=0;
				continue;
			}
			if(j==1) break;
			j++;
		}
		printf("%d %d\n",n,n+2);
	}
	return 0;
}		
