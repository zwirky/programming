#include<stdio.h>

int main()
{
	double data[1000];
	int count=0;
	int i;
	while(scanf("%lf",&data[count])!=EOF){
		count++;
	}
	for(i=0;i<count;i++){
		if(data[i]<=48.0){
			printf("light fly\n");
		}else if(data[i]>48.0 && data[i]<=51.0){
			printf("fly\n");
		}else if(data[i]>51.0 && data[i]<=54.0){
			printf("bantam\n");
		}else if(data[i]>54.0 && data[i]<=57.0){
			printf("feather\n");
		}else if(data[i]>57.0 && data[i]<=60.0){
			printf("light\n");
		}else if(data[i]>60.0 && data[i]<=64.0){
			printf("light welter\n");
		}else if(data[i]>64.0 && data[i]<=69.0){
			printf("welter\n");
		}else if(data[i]>69.0 && data[i]<=75.0){
			printf("light middle\n");
		}else if(data[i]>75.0 && data[i]<=81.0){
			printf("middle\n");
		}else if(data[i]>81.0 && data[i]<=91.0){
			printf("light heavy\n");
		}else{
			printf("heavy\n");
		}
	}
	return 0;
}
