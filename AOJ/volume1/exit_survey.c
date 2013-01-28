#include<stdio.h>

int main()
{
	int n,i,a;
	long long int s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		s+=a;
	}
	printf("%lld\n",s/n);
	return 0;
}
