#include<stdio.h>

int main()
{
	int data[5];
	int i,num[3];
	while(1){
		scanf("%d",&data[0]);
		if(data[0]==0){
			break;
		}
		num[0]=num[1]=num[2]=0;
		for(i=1;i<5;i++){
			scanf("%d",&data[i]);
		}
		for(i=0;i<5;i++){
			if(data[i]==1){
				num[0]=1;
			}
			if(data[i]==2){
				num[1]=1;
			}
			if(data[i]==3){
				num[2]=1;
			}
		}
		for(i=0;i<5;i++){
			printf("%d\n",data[i]);
			if((num[0]==1 && num[1]==1 && num[2]==1) || (num[0]==1 && num[2]==0 && num[3]==0) || ( num[0]==0 && num[1]==1 && num[2]==0) || (num[0]==0 && num[1]==0 && num[2]==1)){
				data[i]=3;
			}else if(num[0]==1 && num[1]==0 && num[2]==1){
				if(data[i]==3){
					data[i]=1;
				}else if(data[i]==1){
					data[i]=2;
				}
			}else if(num[0]==0 && num[1]==1 && num[2]==1){
				if(data[i]==2){
					data[i]=1;
				}else if(data[i]==3){
					data[i]=2;
				}
			}else if(num[0]=1 && num[1]==1 && num[2]==0){
				if(data[i]==1){
					data[i]=1;
				}else if(data[i]==2){
					data[i]=2;
				}
			}
		}
		for(i=0;i<5;i++){
			printf("%d\n",data[i]);
		}
	}
	return 0;
}
