#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int i,j;
	int **matrix;

	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		matrix = (int**)malloc(sizeof(int*)*(n+1));
		for(i=0;i<n+1;i++){
			matrix[i] = (int*)malloc(sizeof(int)*(n+1));
		}
		for(i=0;i<n+1;i++){
			for(j=0;j<n+1;j++){
				matrix[i][j] = 0;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d ",&matrix[i][j]);
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				matrix[i][n] += matrix[i][j];
				matrix[n][j] += matrix[i][j];
				if(j==n-1){
					matrix[n][n] +=  matrix[i][n];
				}
			}
		}
		for(i=0;i<n+1;i++){
			for(j=0;j<n+1;j++){
				printf("%5d",matrix[i][j]);
			}
			printf("\n");
		}
		free(matrix);
	}
	return 0;
}
