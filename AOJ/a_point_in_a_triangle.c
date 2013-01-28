#include<stdio.h>

int calc(double x1,double y1,double x2,double y2)
{
	return x1*y2-y1*x2;
}

int main()
{
	double x1,x2,x3,y1,y2,y3,xp,yp;
	double a,b,c;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
		a=calc(x2-x1,y2-y1,xp-x1,yp-y1);
		b=calc(x3-x2,y3-y2,xp-x2,yp-y2);
		c=calc(x1-x3,y1-y3,xp-x3,yp-y3);
		if(a*b>0 && a*c>0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
