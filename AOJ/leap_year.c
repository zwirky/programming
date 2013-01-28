#include<stdio.h>

int main()
{
	int a,b;
	int count1,count2;
	int i;
	int flag = 0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0 && b==0){
			return 0;
		}
		if(flag)
			printf("\n");
		flag = 1;
		count1=count2=0;
		for(i=a;i<=b;i++){
			if(i%4==0){
				if(i%100==0){
					if(i%400==0){
						printf("%d\n",i);
						count1++;
					}
					continue;
				}
				printf("%d\n",i);
				count2++;
			}
		}
		if(count1+count2==0){
			printf("NA\n");
		}
	}
	return 0;
}
