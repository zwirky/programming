#include<stdio.h>
#define num 10000

int stack[num];
int stack_top=0;

void stack_push(int number)
{
	stack[stack_top]=number;
	++stack_top;
}

int stack_pop(void)
{
	--stack_top;
	return stack[stack_top];
}

int main()
{
	int i=0,j;
	int count=0;
	int data[num];
	int box[num];
	
	while(scanf("%d",&data[i])!=EOF){
		i++;
	}
	for(j=0;j<i;j++){
		if(data[j]==0){
			box[count]=stack_pop();
			count++;
		}else{
			stack_push(data[j]);
		}
	}
	for(j=0;j<count;j++){
		printf("%d\n",box[j]);
	}

	return 0;
}
