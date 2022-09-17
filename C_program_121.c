/*
program 121
04.08.22
given word or pattern is available or not
*/
#include<stdio.h>
main()
{
	int i,j,k;
	char a[1000],b[1000];
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	j=0;
	scanf("%c",&b[j]);
	while (b[j]!='$')
	{
		j=j+1;
		scanf("%c",&b[j]);
	}
	b[j]='\0';
	i=0;
	while (a[i]!='\0')
	{
		j=0;
		k=i;
		while (b[j]==a[k]&&b[j]!='\0')
		{
			j=j+1;
			k=k+1;
		}
		if (b[j]=='\0')
		{
			printf("exist %c",b[j]);
			return 0;
		}
		else
		i=i+1;
	}
	printf("not exist %c",b[j]);
}
