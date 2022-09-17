/*
program 113
13.07.22
merge two text
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000],c[1000];
	int i,j,k;
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
	k=0;
	while (a[i]!='\0')
	{
		c[k]=a[i];
		k=k+1;
		i=i+1;
	}
	j=0;
	while (b[j]!='\0')
	{
		c[k]=b[j];
		k=k+1;
		j=j+1;
	}
	c[k]='\0';
	printf("%s",c);
}

