#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **magic;
	int num;
	int i,j,k;

	while(1){
		scanf("%d",&num);
		if(num==0) break;
		magic = (int**)malloc(sizeof(int*)*num+1);
		for(i=0;i<num+1;i++) magic[i] = (int*)malloc(sizeof(int)*num+1);
		for(i=0;i<num;i++){
			for(j=num-1;j<=i;j--){
				magic[i+
		
		for(i=1;i<=num;i++){
			for(j=1;j<=num;j++){
				printf("%4d",magic[i][j]);
			}
			printf("\n");
		}
		free(magic);
	}
	return 0;
}
