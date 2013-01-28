#include<stdio.h>

int main()
{
	char c[15][9];
	int a,b,i;

	for(i=0;i<9;i++){
		scanf("%s %d %d",c[i],&a,&b);
		printf("%s %d %d\n",c[i],a+b,a*200+b*300);
	}
	return 0;
}
