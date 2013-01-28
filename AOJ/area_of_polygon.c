#include<stdio.h>
#include<math.h>

int main()
{
	double x1,x2,x3;
	double y1,y2,y3;
	double x,y;
	double z,s;
	double a,b,c;
	int count=0;
	while(scanf("%lf,%lf",&x,&y)!=EOF){
		count++;
		if(count==1){
			x1=x;
			y1=y;
		}else if(count==2){
			x2=x;
			y2=y;
		}else if(count==3){
			x3=x;
			y3=y;
			a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
			c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
			z=(a+b+c)/2;
			s=sqrt(z*(z-a)*(z-b)*(z-c));
		}else{
			x2=x3;
			y2=y3;
			x3=x;
			y3=y;
			a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
			c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
			z=(a+b+c)/2;
			s=s+sqrt(z*(z-a)*(z-b)*(z-c));
		}
	}
	printf("%.6lf\n",s);
	return 0;
}
