#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	int i,k,n;
	scanf("%d%*c",&n);
	for(k=0;k<n;k++){
		fgets(str,1001,stdin);
		for(i=0;i<strlen(str)-1;i++){
			if(str[i]=='H'&&str[i+1]=='o'&&str[i+2]=='s'&&str[i+3]=='h'&&str[i+4]=='i'&&str[i+5]=='n'&&str[i+6]=='o'){
				str[i+6]='a';
				i+=6;
			}
		}
		printf("%s",str);
	}
	return 0;
}
