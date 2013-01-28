#include<stdio.h>

int main()
{
	int a,b;
	char box[1000];
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",sprintf(box,"%d",a+b));
	}
	return 0;
}
