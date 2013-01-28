#include<stdio.h>
#include<math.h>

int main()
{
	int money[10000];
	int amount[10000];
	int count=0;
	double ave;
	int sum=0;
	int amount_sum=0;
	int i;
	while(scanf("%d,%d",&money[count],&amount[count])!=EOF){
		count++;
	}
	for(i=0;i<count;i++){
		sum=sum+money[i]*amount[i];
		amount_sum=amount_sum+amount[i];
	}
	ave=(double)amount_sum/(double)count;
	ave+=0.5;
	floor(ave);
	printf("%d\n%d\n",sum,(int)ave);
	return 0;
}
