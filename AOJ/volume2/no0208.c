#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *o_room;
	int num=1;
	int count;
	int i;

	scanf("%d",&num);
	while(!(num==0)){
		count=1;
		//o_room=(int*)malloc(sizeof(int)*(num+1));
		for(i=1;i<num+1;i++){
			if(count%10==4 || count%10==6){
				count++;
			}
				//o_room[i]=count;
				count++;
		}
		printf("%d\n",count-1);
		//free(o_room);
		scanf("%d",&num);
	}
	return 0;
}
