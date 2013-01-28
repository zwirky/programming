#include<stdio.h>

int main()
{
	int num;
	int div,ans;
	int i,d;
	while(scanf("%d",&num)!=EOF){
		ans=0;
		d=num;
		num=600/num;
		for(i=1;i<num;i++){
			ans+=(i*d)*(i*d)*d;
		}
		printf("%d\n",ans);
	}
	return 0;
}
