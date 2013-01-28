#include<stdio.h>

int main()
{
	long long int a,b;
	long long int temp,temp2;

	while(scanf("%lld %lld",&a,&b)!=EOF){
		temp2=a*b;
		while(1){
			if(a>b){
				temp=a-b;
				a=a-temp;
				if(temp<b){
					b=b-temp;
				}
			}else if(b>a){
				temp=b-a;
				if(temp<a){
					a=a-temp;
				}
				b=b-temp;
			}else if(a==b){
				temp=a;
				break;
			}
		}	
		temp2=temp2/temp;
		printf("%lld %lld\n",temp,temp2);
	}
	return 0;
}
