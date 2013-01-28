#include<stdio.h>
#include<string.h>

int main()
{
	char s[3];
	int m[4];
	int num;
	int i;
	for(i=0;i<4;i++){
		m[i]=0;
	}
	while(scanf("%d,%s",&num,s)!=EOF){
		if(strncmp(s,"AB",2)==0){
			m[2]++;
		}else if(strncmp(s,"B",1)==0){
			m[1]++;
		}else if(strncmp(s,"A",1)==0){
			m[0]++;
		}else{
			m[3]++;
		}
	}
	printf("%d\n%d\n%d\n%d\n",m[0],m[1],m[2],m[3]);
	return 0;
}
