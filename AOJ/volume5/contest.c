#include<stdio.h>

int main()
{
	int w[10];
	int k[10];
	int a,i,j;
	for(i=0;i<10;i++){
		scanf("%d",&w[i]);
	}
	for(i=0;i<10;i++){
		scanf("%d",&k[i]);
	}
	for(i=0;i<9;i++){
		for(j=9;j>i;j--){
			if(w[j-1]>w[j]){
				a=w[j];
				w[j]=w[j-1];
				w[j-1]=a;
			}
			if(k[j-1]>k[j]){
				a=k[j];
				k[j]=k[j-1];
				k[j-1]=a;
			}
		}
	}	
	printf("%d %d\n",w[7]+w[8]+w[9],k[7]+k[8]+k[9]);
	return 0;
}
