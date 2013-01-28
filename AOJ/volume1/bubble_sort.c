#include<stdio.h>

int main()
{
	int num;
	int data[1000001];
	int count;
	int i,j;
	int temp;
	while(scanf("%d",&num)>0){
		count=0;
		for(i=0;i<num;i++) scanf("%d",&data[i]);
		for(i=0;i<num-1;i++){
			for(j=0;j<num-i-1;j++){
				if(data[j] > data[j+1]){
					temp = data[j];
					data[j] = data[j+1];
					data[j+1] = temp;
					count++;
				}
			}
		}
		if(num!=0) printf("%d\n",count);
	}
	return 0;
}
