#include<stdio.h>

double calc(double x,int q)
{
	double kai;
	double temp;
	temp=(x*x*x)-q;
	if(temp<0){
		temp*=(-1);
	}	
	if(temp < 0.00001*q){
		return x;
	}
	kai=x-(((x*x*x)-q)/(3*x*x));
	return calc(kai,q);
}

int main()
{
	int q;
	double x;
	double ans;

	while(1){
		scanf("%d",&q);
		if(q==-1){
			break;
		}
		x=(double)q/2;
		ans=calc(x,q);
		printf("%.6lf\n",ans);
	}
	return 0;
}
