#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m,k;
	int i,j;
	int *card;
	int *a,*b;
	scanf("%d",&n);
	card=(int*)malloc(sizeof(int)*(2*n));
	for(i=0;i<2*n;i++){
		card[i]=i;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&k);
		if(k==0){
			a=(int*)malloc(sizeof(int)*n);
			b=(int*)malloc(sizeof(int)*n);
			for(j=0;j<n;j++){
				a[j]=card[j];
				b[j]=card[j+n];
			}
			for(j=0;j<2*n;j++){
				if(j%2==0){
					card[j]=a[j];
				}else{
					card[j]=b[j];
				}
			}
			free(a);
			free(b);
		}else{
			a=(int*)malloc(sizeof(int)*k);
			b=(int*)malloc(sizeof(int)*(2*n-k));
			for(j=0;j<k;j++){
				a[j]=card[j];
			}
			for(j=k+1;j<2*n;j++){
				b[j]=card[j];
			}
			for(j=0;j<2*n;j++){
				if(!(j==(2*n-k))){
					card[j]=b[j];
				}else{
					card[j]=a[j];
				}
			}
			free(a);
			free(b);
		}
	}
	for(i=0;i<2*n;i++){
		printf("%d\n",card[i]);
	}
	free(card);
	return 0;
}
