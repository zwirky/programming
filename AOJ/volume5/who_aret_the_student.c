#include<stdio.h>

int main()
{
	int stu[31];
	int i,n;

	for(i=1;i<31;i++) stu[i]=0;
	for(i=1;i<31;i++){
		scanf("%d",&n);
		stu[n]=1;
	}
	for(i=1;i<31;i++){
		if(stu[i]==0) printf("%d\n",i);
	}
	return 0;
}
