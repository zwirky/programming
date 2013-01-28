#include<stdio.h>

int main()
{
	float left,right;
	int data1[5];
	int data2[5];
	int i,j;
	for(i=0;i<5;i++) data1[i]=data2[i]=0;
	while(scanf("%f %f",&left,&right)!=EOF){
		if(left >= 1.1) data1[1]++;
		else if(left >= 0.6 && left < 1.1) data1[2]++;
		else if(left >= 0.2 && left < 0.6) data1[3]++;
		else if(left < 0.2) data1[4]++;
	 	if(right >= 1.1) data2[1]++;
		else if(right >= 0.6 && right < 1.1) data2[2]++;
		else if(right >= 0.2 && right < 0.6) data2[3]++;
		else if(right < 0.2) data2[4]++;
	}
	for(i=1;i<5;i++) printf("%d %d\n",data1[i],data2[i]);
	return 0;
}
