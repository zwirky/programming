#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *data;
	int data_num;
	int set_num;
	int a,b;
	int i;
	int temp;

	scanf("%d",&data_num);
	data=(int*)malloc(sizeof(int)*data_num+1);
	for(i=1;i<data_num+1;i++){
		data[i]=i;
	}
	scanf("%d",&set_num);
	for(i=0;i<set_num;i++){
		scanf("%d,%d",&a,&b);
		temp=data[a];
		data[a]=data[b];
		data[b]=temp;
	}
	for(i=1;i<data_num+1;i++){
		printf("%d\n",data[i]);
	}
	return 0;
}
