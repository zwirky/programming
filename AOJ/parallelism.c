#include<stdio.h>

int main()
{
	int set_num;
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double inc1,inc2;
	scanf("%d",&set_num);
	while(set_num>0){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		inc1=(y2-y1)/(x2-x1);
		inc2=(y4-y3)/(x4-x3);
		if(inc1==inc2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		set_num--;
	}
	return 0;
}
