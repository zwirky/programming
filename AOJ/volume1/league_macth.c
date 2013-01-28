#include<stdio.h>

typedef struct team{
	char name[21];
	int w;
	int l;
	int d;
	int s;
}team;

int main()
{
	team game[11];
	int n,c,i,j;
	int max,f=0;
	while(scanf("%d",&n)){
		if(n==0) break;
		if(f!=0) printf("\n");
		for(i=0;i<n;i++){
			scanf("%s %d %d %d",game[i].name,&game[i].w,&game[i].l,&game[i].d);
			game[i].s=game[i].w*3+game[i].d;
		}
		for(i=0;i<n;i++){
			max=game[i].s;
			for(j=0;j<n;j++){
				if(max<game[j].s){
					max=game[j].s;
					c=j;
				}
			}
			printf("%s,%d\n",game[c].name,game[c].s);
			game[c].s=-1;
		}
		f=1;
	}
	return 0;
}
