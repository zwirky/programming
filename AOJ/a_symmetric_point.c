#include<stdio.h>

int main()
{
	double x1,x2,xp,y1,y2,yp;
	double m,n;
	double a,b;

	while(scanf("%lf,%lf,%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2,&xp,&yp)!=EOF){
		m=(y2-y1)/(x2-x1);
		printf("%lf\n",m);
		n=y1+(-m*x1);
		printf("%lf\n",n);
		a=((-1)*xp*m*m+yp*m+xp+xp*m+(-2*n))/(m+1);
		printf("%lf\n",a);
		if(m==0.0){
			b=-xp;
		}else{
			b=((-1)*a+xp+xp*m)/m;
		}
		printf("%lf\n",b);
		printf("%.6lf %.6lf\n",a,b);
	}
	return 0;
}
