#include<stdio.h>
#include<string.h>

int main()
{
	char aa[82],bb[82],out[82];
	int a,b,i,n,k;
	int carry;

	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%s",aa);
		scanf("%s",bb);
		a=strlen(aa);
		b=strlen(bb);
		a--;
		b--;
		carry=0;
		for(i=80;i>=0;i--){
			int temp=carry;
			if(a>=0){
				temp+=aa[a--]-'0';
			}
			if(b>=0){
				temp+=bb[b--]-'0';
			}
			out[i]=temp%10+'0';
		}
		if(out[0]!='0'){
			printf("overflow\n");
		}else{
			out[81]='\0';
			for(i=0;;i++){
				if(out[i]!='0'){
					printf("%s\n",&out[i]);
					break;
				}
			}
		}
	}
	return 0;
}
