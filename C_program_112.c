/*
program 112
12.07.22
reverse the text
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
	i=i-1;
	j=0;
	while (i>=0)
	{
		b[j]=a[i];
		j=j+1;
		i=i-1;
	}
	b[j]='\0';
	printf("%s",b);
}
