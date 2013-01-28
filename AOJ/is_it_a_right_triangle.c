#include<stdio.h>

int main()
{
	int a,b,c;
	int num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
