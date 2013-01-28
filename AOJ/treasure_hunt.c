#include<stdio.h>
#include<math.h>

int main()
{
	double x,y;
	int angle,len,san;

	x=y=0;
	san=90;
	while(1){
		scanf("%d,%d",&len,&angle);
		if(len==0 && angle==0){
			break;
		}
		x+=cos(((double)san)*M_PI/180)*len;
		y+=sin(((double)san)*M_PI/180)*len;

		san-=angle;
	}
	printf("%d\n%d\n",(int)x,(int)y);
	return 0;
}
