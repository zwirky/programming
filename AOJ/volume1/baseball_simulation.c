#include<stdio.h>
#include<string.h>
#define STRLEN 10

int main()
{
	int i;
	int n;
	int field;
	int out;
	int score;
	char str[STRLEN];

	fgets(str,STRLEN,stdin);
	n = atoi(str);

	for(i=0;i<n;i++){
		out = score = field = 0;
		
		while(out<3){
			fgets(str,STRLEN,stdin);

			if(strncmp(str,"HIT",3)==0){
				field++;
				if(field>3){
					score++;
					field=3;
				}
			}
			else if(strncmp(str,"HOMERUN",7)==0){
				field++;
				score+=field;
				field=0;
			}
			else{
				out++;
			}
		}
		printf("%d\n",score);
	}
	return 0;
}

