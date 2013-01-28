#include<stdio.h>
#include<math.h>

int main()
{
	double x1,x2,x3,y1,y2,y3;
	double x,y;
	double a1,b1,c1,a2,b2,c2;
	double radius;
	int n,i;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
		a1=2*(x2-x1);
		b1=2*(y2-y1);
		c1=(x1*x1)-(x2*x2)+(y1*y1)-(y2*y2);
		a2=2*(x3-x1);
		b2=2*(y3-y1);
		c2=(x1*x1)-(x3*x3)+(y1*y1)-(y3*y3);
		x=((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
		y=((c1*a2)-(c2*a1))/((a1*b2)-(a2*b1));
		radius=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
		printf("%.3lf %.3lf %.3lf\n",x,y,radius);
	}
	return 0;
}
