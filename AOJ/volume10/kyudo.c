#include<stdio.h>

int main()
{
	int n,i;
	int sum,num;

	scanf("%d",&n);
	while(!(n==0)){
		sum=0;
		for(i=0;i<n/4;i++){
			scanf("%d",&num);
			sum+=num;
		}
		printf("%d\n",sum);
		scanf("%d",&n);
	}
	return 0;
}
