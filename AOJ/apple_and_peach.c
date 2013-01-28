#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	int i;
	fgets(str,1001,stdin);

	for(i=0;i<strlen(str);i++){
		if(str[i]=='a'&&str[i+1]=='p'&&str[i+2]=='p'&&str[i+3]=='l'&&str[i+4]=='e'){
			str[i]='p';
			str[i+1]='e';
			str[i+2]='a';
			str[i+3]='c';
			str[i+4]='h';
			i+=4;
		}else if(str[i]=='p'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='c'&&str[i+4]=='h'){
			str[i]='a';
			str[i+1]='p';
			str[i+2]='p';
			str[i+3]='l';
			str[i+4]='e';
			i+=4;
		}
	}
	printf("%s",str);
	return 0;
}
