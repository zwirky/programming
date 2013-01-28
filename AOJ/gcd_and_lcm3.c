#include<stdio.h>

int main()
{
	long long int a,b,gcd,lcm;

	while(scanf("%lld %lld",&a,&b)!=EOF){
		long long int m,n,o;
		m=a;
		n=b;
		while(1){
			if(!(o=m%n)){
				gcd=n;
				break;
			}
			m=n;
			n=o;
		}
		lcm=a*b/gcd;
		printf("%lld %lld\n",gcd,lcm);
	}
	return 0;
}
