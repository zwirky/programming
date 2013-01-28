#include<stdio.h>

int main()
{
	int ch;
	while((ch=getchar())!=10){
		ch=toupper(ch);
		putchar(ch);
	}
	puts("");
	return 0;
}
