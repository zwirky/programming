#include<stdio.h>

int m_n;
int m_s;
int count;

int calc(int n,int s,int sum)
{
	int i;
	if(n==m_n){
		if(sum==m_s){
			count++;
		}
	}
	for(i=s;i<10;i++){
		calc(n+1,i+1,sum+i);
	}
}

int main()
{
	int n;
	int s;
	
	while(1){
		count=0;
		scanf("%d %d",&m_n,&m_s);
		if(m_n==0 && m_s==0){
			break;
		}
		calc(0,0,0);
		printf("%d\n",count);
	}
	return 0;
}
