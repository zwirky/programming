#include<stdio.h>
int main()
{
	int l,m,n;
	long long int total,re;
	while(scanf("%d%d%d",&l,&m,&n)!=EOF){
		if(l==-1&&m==-1&&n==-1) break;
		total=l*60*60+m*60+n;
		re=120*60-total;
		printf("%02lld:%02lld:%02lld\n",re/60/60,re/60%60,re%60);
		re*=3;
		printf("%02lld:%02lld:%02lld\n",re/60/60,re/60%60,re%60);
	}
	return 0;
}
