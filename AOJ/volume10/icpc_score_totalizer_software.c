#include<stdio.h>

int main()
{
	int num;
	int n[101];
	int s,i;
	int max,min;
	while(1){
		scanf("%d",&num);
		if(num==0) break;
		s=max=0; min=1000;
		for(i=0;i<num;i++){
			scanf("%d",&n[i]);
			if(max<n[i]) max=n[i];
			if(min>n[i]) min=n[i];
			s+=n[i];
		}
		printf("%d\n",(s-max-min)/(i-2));
	}
	return 0;
}
		
