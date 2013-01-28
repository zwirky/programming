#include<stdio.h>

int main()
{
	int trade1[1001];
	int trade2[1001];
	int day1[1001];
	int day2[1001];
	int count1=0;
	int count2=0;
	int data[1001];
	int i,j;

	for(i=0;i<1001;i++){
		data[i]=0;
	}
	while(scanf("%d,%d",&trade1[count1],&day1[count1])!=EOF){
		count1++;
	}
	printf("\n");
	while(scanf("%d %d",&trade2[count2],&day2[count2])!=EOF){
		count2++;
	}
	for(i=0;i<count1;i++){
		for(j=0;j<count2;j++){
			if(trade1[i]==trade2[j] || trade1[i]==trade1[j] || trade2[i]==trade2[j]){
				data[trade1[i]]++;
			}
		}
	}
	for(i=0;i<1001;i++){
		if(data[i]!=0){
			printf("%d %d\n",i,data[i]);
		}
	}
	return 0;
}

