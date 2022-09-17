/*
program 187
24.08.22
read the text and copy it to another array by flipping upper to lower and lower to upper
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]>=65&&a[i]<=90)
		b[i]=a[i]+32;
		else
		if (a[i]>=97&&a[i]<=122)
		b[i]=a[i]-32;
		else
		b[i]=a[i];
	}
	b[i]='\0';
	puts(b);
}
