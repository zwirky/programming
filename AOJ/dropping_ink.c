#include<stdio.h>
#define NUM 10

int add_map(int map[NUM][NUM],int y,int x)
{
	if(0<=x && x<NUM && 0<=y && y<NUM)
		map[y][x]++;
}

int main()
{
	int map[NUM][NUM];
	int x,y,size;
	int sum,max;
	int i,j;

	for(i=0;i<NUM;i++) for(j=0;j<NUM;j++) map[i][j]=0;
	
	while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
		if(1<=size){
			add_map(map,y,x);
			add_map(map,y-1,x);
			add_map(map,y+1,x);
			add_map(map,y,x-1);
			add_map(map,y,x+1);
//			map[y][x-1]++;
//			map[y-1][x]++;
//			map[y][x]++;
//			map[y+1][x]++;
//			map[y][x+1]++;
		}
		if(2<=size){
			add_map(map,y-1,x-1);
			add_map(map,y-1,x+1);
			add_map(map,y+1,x-1);
			add_map(map,y+1,x+1);
//			map[y-1][x-1]++;
//			map[y+1][x-1]++;
//			map[y-1][x+1]++;
//			map[y+1][x+1]++;
		}
		if(3<=size){
			add_map(map,y,x-2);
			add_map(map,y,x+2);
			add_map(map,y-2,x);
			add_map(map,y+2,x);
//			map[y][x-2]++;
//			map[y-2][x]++;
//			map[y+2][x]++;
//			map[y][x+2]++;
		}
	}
	sum=max=0;
	for(i=0;i<NUM;i++){
		for(j=0;j<NUM;j++){
			if(map[i][j]==0){
				sum++;
			}
			if(max<map[i][j]){
				max=map[i][j];
			}
		}
	}
	printf("%d\n%d\n",sum,max);
	return 0;
}

