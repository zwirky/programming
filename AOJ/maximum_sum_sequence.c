#include<stdio.h>

int main()
{
	int num;
	int data[6000];
	int max,sum;
	int i,j;

	while(1){
		sum=0;
		scanf("%d",&num);
		if(num==0){
			break;
		}
		for(i=0;i<num;i++){
			scanf("%d",&data[i]);
		}
		max=-999999999;
		for(i=0;i<num;i++){
			sum=0;
			//sum=data[i];
			for(j=i;j<num;j++){
				sum+=data[j];
				if(max<sum){
					max=sum;
				}
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
