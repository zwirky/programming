#include<stdio.h>

int main(){
	int x[100],i=1,count=1;
	while(1){
		scanf("%d",&x[i]);
		if(x[i]==0){
			break;
		}
		i++;
		count++;
	}
	for(i=1;i<count+1;i++){
		printf("Case %d: %d\n",i,x[i]);
	}
		return 0;
}
