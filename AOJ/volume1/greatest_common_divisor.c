#include<stdio.h>

int main()
{
	long long int x,y;
	long long int t;
	int c;

	while(scanf("%lld %lld",&x,&y)){
		if(x==0&&y==0) break;
		c=0;
		while(!(y==0)){
			x=x%y;
			t=x;
			x=y;
			y=t;
			c++;
		}
		printf("%lld %d\n",x,c);
	}
	return 0;
}
