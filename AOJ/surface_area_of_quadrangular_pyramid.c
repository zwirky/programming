#include<stdio.h>
#include<math.h>

int main()
{
	int x,h;
	double s;
	double temp;
	while(1){
		scanf("%d\n%d",&x,&h);
		if(x==0 && h==0){
			break;
		}
		temp=(double)((x*x)/4.0);
		s=2*x*sqrt(temp+h*h)+x*x;
		printf("%.6lf\n",s);
	}
	return 0;
}
