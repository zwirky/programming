#include<stdio.h>

int main()
{
	int num[10000],col[10000];
	int rank[10000];
	int i=1;
	while(1){
		scanf("%d,%d",&num[i],&col[i]);
		if(num==0&&col==0) break;
		i++;
	}
	j=1;
	while(scanf("%d",&rank[j])!=EOF){
		for(k=1;k<i;k++){

