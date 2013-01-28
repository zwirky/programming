#include<stdio.h>
#include<string.h>

int main()
{
	char mozi[21];
	int i,j;
	fgets(mozi,21,stdin);
	j=strlen(mozi)-1;
	for(i=0;i<j+1;i++){
		putc(mozi[j-i],stdout);
	}
	puts("");
	return 0;
}
