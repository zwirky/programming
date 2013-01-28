#include<stdio.h>

int main()
{
	int num;
	int age;
	int data[8];
	int i;
	while(1){
		for(i=0;i<8;i++) data[i]=0;
		scanf("%d",&num);
		if(num==0) break;
		for(i=0;i<num;i++){
			scanf("%d",&age);
			if(age < 10) data[1]++;
			else if(age < 20) data[2]++;
			else if(age < 30) data[3]++;
			else if(age < 40) data[4]++;
			else if(age < 50) data[5]++;
			else if(age < 60) data[6]++;
			else data[7]++;
		}
		for(i=1;i<8;i++) printf("%d\n",data[i]);
	}
	return 0;
}
