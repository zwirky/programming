#include<stdio.h>

int main()
{
	int num;
	double xa,ya,ra,xb,yb,rb;
	double len,r;
	int i;

	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);
		len=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
		r=ra-rb;
		if(r*r>=len){
			if(r>0){
				printf("2\n");
			}else{
				printf("-2\n");
			}
		}else{
			r=ra+rb;
			if(r*r>len){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}
	}
	return 0;
}
