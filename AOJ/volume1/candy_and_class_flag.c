#include<stdio.h>

int main()
{
	int n;

	while(scanf("%d",&n)!=EOF){
		n=n%39;
		if(n==0){
			printf("3C39\n");
		}else{
			printf("3C%02d\n",n);
		}
	}
	return 0;
}
