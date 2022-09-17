/*
program 116
13.07.22
count the number of lines in the text
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,l;
	i=0;
	l=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	l=0;
	while (a[i]!='\0')
	{
		if (a[i]=='\n')
		l=l+1;
		i=i+1;
	}
	printf("%d",l);
	printf("%s",a);
}

