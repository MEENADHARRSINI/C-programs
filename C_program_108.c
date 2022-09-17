/*
program 108
12.07.22
read the text and copy the last n character
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j,n,m;
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	j=0;
	scanf("%d",&n);
	m=i-n;
	i=m;
	while (a[i]!='\0')
	{
		b[j]=a[i];
		j=j+1;
		i=i+1;
	}
	b[j]='\0';
	printf("%s",b);
	
}
