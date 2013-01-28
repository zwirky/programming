#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,n;
	int i,t,c,te;
	double s;

	while(scanf("%d %d %d",&a,&b,&n)!=EOF){
		c=0;
		t=0;
		s=(double)a/(double)b;
		s=s-(int)s;
		s=s*pow(10.0,(double)n);
		te=(int)s;
		for(i=0;i<n;i++){
			c+=te%10;
			te/=10;
		}
		printf("%d\n",c);
	}
	return 0;
}
