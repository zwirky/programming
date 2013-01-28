#include<stdio.h>
#include<string.h>
char bell[5][6]={"afkpuz","bglqv.","chmrw?","dinsx!","ejoty "};

int main()
{
	int i,a,b;
	char str[200];
	fgets(str,200,stdin);
	for(i=0;;i+=2){
		if(str[i]=='\n') break;
//		a=atoi(str[i]);
//		b=atoi(str[i+1]);
		printf("%c",bell[str[i]][str[i+1]]);
	}

	return 0;
}
