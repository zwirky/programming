#include<stdio.h>
#include<string.h>

int main()
{
	char mozi[100],rever[100];
	int i,j,c=0;
	while(fgets(mozi,100,stdin)!='\0'){
		for(i=0;i<100;i++) rever[i]=0;
		j=strlen(mozi)-1;
		for(i=0;i<j+1;i++){
			rever[i]=mozi[j-i];
		}
		if(!(strncmp(rever,mozi,j-1))==0){
			c++;
		}
	}
	printf("%d\n",c);
	return 0;
}
