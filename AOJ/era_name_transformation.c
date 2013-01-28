#include<stdio.h>

int main()
{
	int year,month,day;

	while(scanf("%d %d %d",&year,&month,&day)!=EOF){
		if(year>=1989){
			if(year==1989){
				if(month>=1 && !(day>=8)){
					printf("heisei %d %d %d\n",year-1988,month,day);
				}
			}else{
				printf("heisei %d %d %d\n",year-1988,month,day);
			}
		}else if(year>=1926 && year<=1989){
			if(year==1926){
				if(month>=12 && !(day>=25)){
					printf("showa %d %d %d\n",year-1926,month,day);
				}
			}else if(year==1989){
				if(month<=1 && !(day<=7)){
					printf("showa %d %d %d\n",year-1926,month,day);
				}
			}else{
				printf("showa %d %d %d\n",year-1926,month,day);
			}
		}else if(year>=1912 && year<=1926){
			if(year==1912){
				if(month>=7 && !(day>=30)){
					printf("taisho %d %d %d\n",year-1912,month,day);
				}
			}else if(year==1926){
				if(month<=12 && !(day<=24)){
					printf("taisho %d %d %d\n",year-1912,month,day);
				}
			}else{
				printf("taisho %d %d %d\n",year-1912,month,day);
			}
		}else if(year>=1868 && year<=1912){
			if(year==1868){
				if(month>=9 && !(day>=8)){
						printf("meiji %d %d %d\n",year-1868,month,day);
				}
			}else if(year==1912){
				if(month<=7 && !(day<=29)){
					printf("meiji %d %d %d\n",year-1868,month,day);
				}
			}else{
				printf("meiji %d %d %d\n",year-1868,month,day);
			}
		}else{
			printf("pre-meiji\n");
		}
	}
	return 0;
}
