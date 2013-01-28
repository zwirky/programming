#include<stdio.h>
#include<stdlib.h>

int main()
{
	char data[10];
	int num[10];
	int i;

	while(scanf("%s",data)!=EOF){
		num=atoi(data);
		for(i=0;i<10;i++){
			num[i]=(num[i]+num[i+1])%10;
		}
		printf("%d\n",num[0]);
	}
	return 0;
}
