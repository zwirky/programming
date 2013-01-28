#include<stdio.h>

typedef struct body{
	int num[1000001];
	int length;
	int weight;
	double bmi[1000001];
	double temp[1000001];
}data;

int main()
{
	int n=1;
	int i;
	int num;
	data bmi;
	double tmp;
	while(n!=0){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d %d",&bmi.num[i],&bmi.length,&bmi.weight);
			bmi.bmi[i]=(double)(bmi.length/(bmi.weight*bmi.weight));
			bmi.temp[i]=bmi.bmi[i]-22.0;
			if(bmi.temp[i]<0) bmi.temp[i]=bmi.temp[i]*(-1.0);
		}
		for(i=0;i<n;i++){
			tmp=bmi.temp[0];
			num=bmi.num[0];
			if(tmp>bmi.temp[i]){
				tmp=bmi.temp[i];
				num=bmi.num[i];
			}
		}
		printf("%d\n",num);
	}
	return 0;
}
