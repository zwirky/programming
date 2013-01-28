#include<stdio.h>

int main()
{
	float height;
	int num,i,j;
	int data[7];
	for(i=0;i<7;i++) data[i] = 0;
	scanf("%d",&num);
	while(num>0){
		scanf("%f",&height);
		if(height < 165.0) data[1]++;
		else if(height >= 165.0 && height < 170.0) data[2]++;
		else if(height >= 170.0 && height < 175.0) data[3]++;
		else if(height >= 175.0 && height < 180.0) data[4]++;
		else if(height >= 180.0 && height < 185.0) data[5]++;
		else if(height >= 185.0) data[6]++;
		num--;
	}
	for(i=1;i<7;i++){
		printf("%d:",i);
		for(j=0;j<data[i];j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
