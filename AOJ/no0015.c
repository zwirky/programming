#include <stdio.h>
int main()
{
	int a[100];
	int b[100];
	int i,j;
	char c;
	int n;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(i=1;i<81;i++)
		{
			getchar();
			scanf("%c",&c);
			a[i]=c-'0';
			if(c=='\n')
			{
				a[0]=i;
				printf("%d\n",a[0]);
				break;
			}
		}
		printf("asdf\n");
		for(i=1;i<81;i++)
		{
			scanf("%c",&c);
			b[i]=c-'0';
			if(c=='\n')
			{
				b[0]=i;
				break;
			}
		}
		for(i=1;i<a[0];i++){
			printf("%d\n",a[i]);
		}
		for(i=1;i<b[0];i++){
			printf("%d\n",b[i]);
		}
	}
	return 0;
}
