#include<stdio.h>

int main()
{
	int ball[10];
	int num;
	int b,c;
	int i,k;
	int frag;
	scanf("%d",&num);
	for(k=0;k<num;k++){
		scanf("%d %d %d %d %d %d %d %d %d %d",&ball[0],&ball[1],&ball[2],&ball[3],&ball[4],&ball[5],&ball[6],&ball[7],&ball[8],&ball[9]);
		b=c=0;
		frag=0;
		for(i=0;i<10;i++){
			if(i==0){
				b=ball[i];
				continue;
			}
			if(ball[i]>b && ball[i]>c){
				if(b>c){
					b=ball[i];
				}else{
					c=ball[i];
				}
			}else if(ball[i]>b && ball[i]<c){
				b=ball[i];
			}else if(ball[i]<b && ball[i]>c){
				c=ball[i];
			}else{
				printf("NO\n");
				frag=1;
				break;
			}
		}
		if(frag==0) printf("YES\n");
	}
	return 0;
}
		
