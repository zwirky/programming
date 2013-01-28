#include<stdio.h>

int main()
{
	int len1,len2,len3;
	int rectangle=0;
	int diamond=0;

	while(scanf("%d,%d,%d",&len1,&len2,&len3)!=EOF){
		if(len1==len2){
			diamond++;
		}
		if(len3*len3==len1*len1+len2*len2){
			rectangle++;
		}
	}
	printf("%d\n%d\n",rectangle,diamond);
	return 0;
}
