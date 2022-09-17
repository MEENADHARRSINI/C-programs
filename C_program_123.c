/*
program 123
05.08.22
read the pattern and copy it to another array by skipping pattern
*/
#include<stdio.h>
main()
{
	int i,j,k,l;
	char a[1000],b[1000],c[1000];
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
	l=0;
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
		i=k;
		else
		{
			c[l]=a[i];
			l=l+1;
			i=i+1;
		}
	}
		c[l]='\0';
		printf("%s",c);
}
