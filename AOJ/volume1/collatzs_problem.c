#include<stdio.h>

int main()
{
	int n;
	int count;
	while(scanf("%d",&n)){
		if(n==0) break;
		count=0;
		while(1){
			if(n==1) break;
			if(n%2==0){
				n/=2;
				count++;
			}else{
				n=n*3+1;
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
