#include<stdio.h>
#include<string.h>

int search(char *str,int max)
{
	int i;
	for(i=0;i<max;i++){
		if(!strncmp((&str[i]),"this ",5)){
			return 1;
		}
		if(!strncmp((&str[i]),"that ",5)){
			return 1;
		}
		if(!strncmp((&str[i]),"the ",4)){
			return 1;
		}
		if(!strncmp((&str[i]),"this.",5)){
			return 1;
		}
		if(!strncmp((&str[i]),"that.",5)){
			return 1;
		}
		if(!strncmp((&str[i]),"the.",4)){
			return 1;
		}
		for(i++;;i++){
			if(str[i]==' ' || str[i]=='.'){
				break;
			}
		}
	}
	return 0;
}

int main()
{
	char mozi[82];
	int n,i=0;

	while(fgets(mozi,82,stdin)!=NULL){
		while(1){
			n=strlen(mozi);
			for(i=0;i<n;i++){
				if(mozi[i]!=' ' && mozi[i]!='.'){
					mozi[i]=mozi[i]+1;
					if(mozi[i]=='z'+1){
						mozi[i]='a';
					}
				}
			}
			if(search(mozi,n)){
				break;
			}
		}
		printf("%s\n",mozi);
	}
	return 0;
}
