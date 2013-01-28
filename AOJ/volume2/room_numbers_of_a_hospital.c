main(n,i)
{
	char s[100], m[]="01235789";

	for(;;)
	{
		scanf("%d",&n);
		if(n==0) break;
		sprintf(s,"%o\0",n);
		for(i=0;s[i];i++) putchar(m[s[i]-'0']);
		putchar('\n');
	}
}
