/*
program 114
13.07.22
convert the fortran to pascal 
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j;
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	j=0;
    i=0;
	while (a[i]!='\0')
	{
		if (a[i]=='=')
		{
			b[j]=':';
			j=j+1;
			b[j]=a[i];
		}
		else
		if (a[i]=='\n')
		{
			b[j]=';';
			j=j+1;
			b[j]=a[i];
		}
		else
		b[j]=a[i];
		j=j+1;
		i=i+1;
	}
	b[j]='\0';
	printf("%s",b);
}
