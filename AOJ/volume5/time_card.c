#include<stdio.h>

int main()
{
	int s_h,s_m,s_s;
	int e_h,e_m,e_s;
	int h,m,s;
	while(scanf("%d %d %d %d %d %d",&s_h,&s_m,&s_s,&e_h,&e_m,&e_s)!=EOF){
		if(e_s-s_s<0){
			s=60-(s_s-e_s);
			e_m--;
		}else{
			s=e_s-s_s;
		}
		if(e_m-s_m<0){
			m=60-(s_m-e_m);
			e_h--;
		}else{
			m=e_m-s_m;
		}
		h=e_h-s_h;
		printf("%d %d %d\n",h,m,s);
	}
	return 0;
}
