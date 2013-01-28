#include<stdio.h>

int main()
{
	int month;
	int day;
	int sum;
	char *days[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int months[13]={0,0,31,60,91,121,152,182,213,244,274,305,335};
	
	while(1){
		scanf("%d %d",&month,&day);
		if(month==0 && day==0){
			break;
		}
		sum=day+months[month];
		printf("%s\n",days[sum%7]);
	}
	return 0;
}
