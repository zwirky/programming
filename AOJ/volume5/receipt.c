#include<stdio.h>

int main()
{
	int s,n,i;
	scanf("%d",&s);
	while(!(s==0)){
		for(i=0;i<9;i++){
			scanf("%d",&n);
			s-=n;
		}
		printf("%d\n",s);
		scanf("%d",&s);
	}
}
