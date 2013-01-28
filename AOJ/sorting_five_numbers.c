#include<stdio.h>

int main()
{
	int data[5];
	int temp;
	int i,j;
	scanf("%d %d %d %d %d",&data[0],&data[1],&data[2],&data[3],&data[4]);
	for(i=0;i<5-1;i++){
		for(j=5-1;j>i;j--){
			if(data[j-1]<data[j]){
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
			}
		}
	}
	printf("%d %d %d %d %d\n",data[0],data[1],data[2],data[3],data[4]);
	return 0;
}
