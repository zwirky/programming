#include<stdio.h>
#include<string.h>

int main()
{
	char ch[1001];
	char an[1001];
	int i,n;
	fgets(ch,1001,stdin);
	n=strlen(ch);
	for(i=0;i<n-1;i++){
		if(ch[i]=='A'){
			putc('X',stdout);
		}else if(ch[i]=='B'){
			putc('Y',stdout);
		}else if(ch[i]=='C'){
			putc('Z',stdout);
		}else{
			putc(ch[i]-3,stdout);
		}
	}
	puts("");
	return 0;
}
