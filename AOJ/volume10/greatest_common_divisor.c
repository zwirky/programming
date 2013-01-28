#include<stdio.h>

int main()
{
	int a,b;

	while(scanf("%d %d",&a,&b)!=EOF){
		while(!(a==b)){
			if(a>b) a=a-b;
			if(b>a) b=b-a;
		}
		printf("%d\n",a);
	}
	return 0;
}
