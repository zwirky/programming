#include<stdio.h>

int main()
{
	int weight;
	int count;
	int flag=0;
	while(scanf("%d",&weight)!=EOF){
		flag=0;
		count=1;
		for(;weight;weight>>=1){
			if(weight&1){
				if(!flag){
					printf("%d",count);
					flag = 1;
				}
				else
				printf(" %d",count);
			}
			count<<=1;
		}
		printf("\n");
	}
	return 0;
}
