#include<stdio.h>

int main()
{
	double bmi;
	int i;
	int count=0,j=0;
	int number[1000];
	double weight[1000];
	double height[1000];

	while(scanf("%d,%lf,%lf",&number[count],&weight[count],&height[count])!=EOF){
		count++;
	}
	for(i=0;i<count;i++){
		bmi=weight[i]/((height[i])*(height[i]));
		if(bmi>=25.0){
			printf("%d\n",number[i]);
			j++;
		}
	}
	if(j==0){
		printf("該当なし\n");
	}
	return 0;
}
