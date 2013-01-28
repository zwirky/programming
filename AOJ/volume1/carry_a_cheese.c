#include<stdio.h>
#include<math.h>

int main()
{
	int l,w,h;
	int r,i;
	int num;
	while(1){
		scanf("%d %d %d",&l,&w,&h);
		if(l==0 && w==0 && h==0) break;
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&r);
			if(sqrt(h*h+w*w)<2*r) printf("OK\n");
			else if(sqrt(w*w+l*l)<2*r) printf("OK\n");
			else if(sqrt(h*h+l*l)<2*r) printf("OK\n");
			else printf("NA\n");
		}
	}
	return 0;
}
