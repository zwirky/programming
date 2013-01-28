#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	double x,y;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(double)(a*f-d*c)/(double)(a*e-d*b);
		x=(double)(c-b*y)/(double)a;
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}
