/*
program 250
19.09.22
read the text and copt it to another array by converting upper to lower case
*/
#include<stdio.h>
void fnread(char a[]);
void fnflip(char a[],char b[]);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fnflip(a,b);
	puts(b);
}
void fnread(char a[])
{
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fnflip(char a[],char b[])
{
	int i;
	for (i=0;a[i];i++)
	if (a[i]>='A'&&a[i]<='Z')
	b[i]=a[i]+32;
	else
	b[i]=a[i];
	b[i]='\0';
}


