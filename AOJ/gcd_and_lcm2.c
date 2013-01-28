nclude<stdio.h>
#include<stdlib.h>
#define swap(a,b) {int _tempolary_integer_variable=a;a=b;b=_tempolary_integer_variable;}

int gcd(int m, int n)
{
	    int r;
		    if (m < n) {
				        swap(m, n);
						    }
			    if (n == 0) {
					        return m;
							    }
				    if ((r = m % n)) {
						        return gcd(n, r);
								    }
					    return n;
}

int lcm(int m, int n)
{
	    return (m * n) / gcd(m, n);
}

int main(void)
{
	    int m, n;
		    while(scanf("%d %d",&m,&n)!=EOF){
				printf("%d %d\n",gcd(m,n),lcm(m,n));
				return 0;
			}
			}
