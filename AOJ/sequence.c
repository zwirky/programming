#include<stdio.h>

int main()
{
	int i;
	double a;
	double data[10];
	double sum;
	while(scanf("%lf",&a)!=EOF){
		sum=a;
		for(i=0;i<10;i++){
			if(i==0){
				data[i]=a;
				continue;
			}
			if(i%2==1){
				data[i]=data[i-1]*2.0;
			}else{
				data[i]=data[i-1]/3.0;
			}
			sum+=data[i];
		}
		printf("%lf\n",sum);
	}
	return 0;
}

