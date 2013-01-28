#include<stdio.h>

int main()
{
	int x[10];
	int i,o;
	int temp;
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
	}
	for(o=0;o<10;o++){
		for(i=0;i<10;i++){
			if(x[i]<x[i+1]){
				temp=x[i];
				x[i]=x[i+1];
				x[i+1]=temp;
			}
		}
	}
	printf("%d\n",x[0]);
	printf("%d\n",x[1]);
	printf("%d\n",x[2]);
	
	return 0;
}
