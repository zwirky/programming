#include<stdio.h>

int main()
{
	int data[9];
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d%d%d%d%d%d",&d[0],&d[1],&d[2],&d[3],&d[4],&d[5],&d[6],&d[7],&d[8]);
		for(j=0;j<8-1;j++){
			for(k=8-1;k>j;k--){
				if(d[k-1]>d[k]){
					t=d[k];
					d[k]=d[k-1];
					d[k-1]=d[k];
				}
			}
		}
		for(j=0;j<8;j++){
			dd[i]=d[i];
		}
		for(j=0;j<8-1;j++){
			for(k=8-1;k>j;k--){
				if(d[k-1]<d[k]){
					t=d[k];
					d[k]=d[k-1];
					d[k-1]=d[k];
				}
			}
		}
		if(d
		ddd[7]=d
