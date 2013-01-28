#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m,num;
	int i,j;
	int *data;

	while(1){
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
		data=(int*)malloc(sizeof(int)*n);
		for(i=1;i<n+1;i++) data[i]=i;
		for(i=1;i<n+1;i++){
			if(i%m==0) data[i]=0;

