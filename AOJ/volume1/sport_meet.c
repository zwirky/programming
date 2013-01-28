#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int num;
	int run;
	int ball;
	int frun;
	int rell;
	int sum;
}sport;

int main()
{
	sport *teem;
	int n;
	int a,aa,b,bb,c,cc,d,dd;
	sport temp;
	int i,j;
	while(scanf("%d",&n)){
		if(n==0) break;
		teem=(sport*)malloc(sizeof(sport)*n);
		for(i=0;i<n;i++){
			scanf("%d %d %d %d %d %d %d %d %d",&teem[i].num,&a,&aa,&b,&bb,&c,&cc,&d,&dd);
			teem[i].run=a*60+aa;
			teem[i].ball=b*60+bb;
			teem[i].frun=c*60+cc;
			teem[i].rell=d*60+dd;
			teem[i].sum=teem[i].run+teem[i].ball+teem[i].frun+teem[i].rell;
		}
		for(i=0;i<n-1;i++){
			for(j=n-1;j>i;j--){
				if(teem[j-1].sum>teem[j].sum){
					temp=teem[j-1];
					teem[j-1]=teem[j];
					teem[j]=temp;
				}
			}
		}
		printf("%d\n%d\n%d\n",teem[i].num,teem[i+1].num,teem[n-1].num);
	}
	return 0;
}
