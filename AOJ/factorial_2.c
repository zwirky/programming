#include<stdio.h>

int main()
{
	int num,sum;
	while(scanf("%d",&num)!=EOF){
		sum=0;
		if(num==0){
			break;
		}
		while(num/=5){
			sum+=num;
		}
		printf("%d\n",sum);
	}
	return 0;
}
