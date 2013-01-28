#include<stdio.h>

int main()
{
	int ch=1;
	int count;
	scanf("%d",&ch);
	while(!(ch==0)){
		count=0;
		ch=1000-ch;
		count+=ch/500;
		ch=ch%500;
		count+=ch/100;
		ch=ch%100;
		count+=ch/50;
		ch=ch%50;
		count+=ch/10;
		ch=ch%10;
		count+=ch/5;
		ch=ch%5;
		count+=ch/1;
		printf("%d\n",count);
		scanf("%d",&ch);
	}
	return 0;
}
