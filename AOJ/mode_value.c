#include<stdio.h>

int main()
{
	int data[101];
	int count=0;
	int temp;
	int i;
	int mode=0;
	for(i=1;i<101;i++){
		data[i]=0;
	}
	while(scanf("%d",&temp)!=EOF){
		data[temp]=data[temp]+1;
		count++;
	}
	for(i=1;i<101;i++){
		if(mode<data[i]){
			mode=data[i];
		}
	}
	for(i=1;i<101;i++){
		if(mode==data[i]){
			printf("%d\n",i);
		}
	}
	return 0;
}
