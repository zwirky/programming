#include<stdio.h>

int main()
{
	int i;
	int count=0;
	double max=0,min=10000;
	double result;
	double data[1000];
	while(scanf("%lf",&data[count])!=EOF){
		count++;
	}
	for(i=0;i<count;i++){
		if(max<data[i]){
			max=data[i];
		}
		if(min>data[i]){
			min=data[i];
		}
	}
	result=max-min;
	printf("%.1lf\n",result);
	return 0;
}
