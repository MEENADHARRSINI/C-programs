/*
program 119
03.08.22
display the nth line
*/
#include<stdio.h>
main()
{
	int i,j,k,n;
	char a[1000],c[1000];
	int b[1000];
	i=0;
	j=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	j=0;
	b[j]=0;
	j=j+1;
	while (a[i]!='\0')
	{
		if (a[i]=='\n')
		{
			b[j]=i+1;
			j=j+1;
		}
		i=i+1;
	}
	b[j]=-1;
	scanf("%d",&n);
	j=0;
	while (b[j]!=-1)
	{
		printf("%d",b[j]);
		j=j+1;
	}
	b[j]=-1;
	k=0;
	i=b[n-1];
	while (a[i]!='\n')
	{
		c[k]=a[i];
		k=k+1;
		i=i+1;
	}
	c[k]='\0';
	k=0;
	while (c[k]!='\0')
	{
		printf("%c",c[k]);
		k=k+1;
	}
}
