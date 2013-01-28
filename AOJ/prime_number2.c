#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	int *p;
	int count;
	while(scanf("%d",&n)!=EOF){
		count=0;
		p=(int*)malloc(sizeof(int)*n);
		p[0]=0;
		p[1]=0;
		for(i=2;i<n;i++){
			p[i]=1;
		}
		for(i=0;i<n;i++){
			if(p[i]){
				for(j=2;(j*i)<n;j++){
					p[j*i]=0;
				}
			}
		}
		if(n==2){
			p[1]=1;
		}
		for(i=0;i<=n;i++){
			if(p[i]){
				count++;
			}
		}
		printf("%d\n",count);
		free(p);
	}
	return 0;
}
