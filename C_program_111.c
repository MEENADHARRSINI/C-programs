/*
program 111
12.07.22
read the text and copy it to another array by skipping comma 
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
	i=j=0;
	while (a[i]!='\0')
	{
		if (a[i]==',')
		i=i+1;
		else
		{
			b[j]=a[i];
			j=j+1;
			i=i+1;
		}
	}
	b[j]='\0';
	printf("%s",b);
}
