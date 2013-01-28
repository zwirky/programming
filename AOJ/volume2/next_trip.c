#include<stdio.h>

int main()
{
	int l,m,n;
	int num,i;
	int frag;
	while(1){
		frag=num=0;
		scanf("%d",&l);
		if(l==0) break;
		for(i=0;i<12;i++){
			scanf("%d %d",&m,&n);
			num+=m-n;
			if(frag==1) continue;
			if(l<=num){
				printf("%d\n",i+1);
				frag=1;
			}
		}
		if(!(frag==1)) printf("NA\n");
	}
	return 0;
}
