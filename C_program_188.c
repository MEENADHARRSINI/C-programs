/*
program 188
24.08.22
read and copy the text to another array by converting comma to semicolon
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
		if (a[i]==',')
		b[i]=';';
		else
		b[i]=a[i];
	}
	b[i]='\0';
	puts(b);
} 
