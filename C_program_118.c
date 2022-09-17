/*
program 118
15.07.22
store the starting position of each line in a separate integer array and print it
*/
#include<stdio.h>
main()
{
	int i,j;
	int b[j];
	char a[1000];
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
	j=0;
	while (b[j]!=-1)
	{
		printf("%d",b[j]);
		j=j+1;
	}
}
