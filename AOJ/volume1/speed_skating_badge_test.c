#include<stdio.h>

int main()
{
	double sh,lo;
	int i,a,b;
	char d[]="AAAAAABCDENA";
	while(scanf("%lf%lf",&sh,&lo)!=EOF){
		if(sh<35.50) a=0;
		else if(sh>=35.50&&sh<37.50) a=3;
		else if(sh>=37.50&&sh<40.0) a=5;
		else if(sh>=40.0&&sh<43.0) a=6;
		else if(sh>=43.0&&sh<50.0) a=7;
		else if(sh>=50.0&&sh<55.0) a=8;
		else if(sh>=55.0&&sh<70.0) a=9;
		else a=10;
		if(lo<71.0) b=0;
		else if(lo>=71.0&&lo<77.0) b=3;
		else if(lo>=77.0&&lo<83.0) b=5;
		else if(lo>=83.0&&lo<89.0) b=6;
		else if(lo>=89.0&&lo<105.0) b=7;
		else if(lo>=105.0&&lo<116.0) b=8;
		else if(lo>=116.0&&lo<148.0) b=9;
		else b=10;
		if(a<b) a=b;
		if(a==0) printf("AAA\n");
		if(a==3) printf("AA\n");
		if(5<a&&a<10) printf("%c\n",d[a]);
		if(a==10) printf("NA\n");
	}
	return 0;
}
