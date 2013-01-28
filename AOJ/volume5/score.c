#include<stdio.h>

typedef struct human{
	int inf;
	int math;
	int sci;
	int eng;
	int sum;
}human;

int main()
{
	human a,b;

	scanf("%d %d %d %d",&a.inf,&a.math,&a.sci,&a.eng);
	scanf("%d %d %d %d",&b.inf,&b.math,&b.sci,&b.eng);
	a.sum=a.inf+a.math+a.sci+a.eng;
	b.sum=b.inf+b.math+b.sci+b.eng;
	if(a.sum>b.sum) printf("%d\n",a.sum);
	else printf("%d\n",b.sum);
	return 0;
}
