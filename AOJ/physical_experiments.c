#include<stdio.h>
#include<math.h>

int main()
{
	double data;
	double t,y;
	double floor_num;

	while(scanf("%lf",&data)!=EOF){
		t=data/9.8;
		y=4.9*(t*t);
		floor_num=(y+5)/5;
		floor_num=ceil(floor_num);
		printf("%d\n",(int)floor_num);
	}
	return 0;
}
