#include<stdio.h>

int main()
{
	int shop[6];
	char name[6]="ABCDE";
	int a,b,max,c,i;
	
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		max=shop[0]=a+b;
		c=0;
		for(i=1;i<5;i++){
			scanf("%d%d",&a,&b);
			shop[i]=a+b;
			if(max<shop[i]){
				max=shop[i];
				c=i;
			}
		}
		printf("%c %d\n",name[c],max);
	}
	return 0;
}
