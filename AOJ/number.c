#include<stdio.h>
#define N 91
int main()
{
	int i;
	for(i=0;i<91;i++){
		if(i%4==1){
			printf("okazaki ");
			printf("No.%d\t",i);
			printf("yukie ");
			printf("No.%d\t",i-1);
			printf("kim ");
			printf("No.%d\t",i+1);
			printf("mega ");
			printf("No.%d\n",i+2);
		}
	}
	return 0;
}
