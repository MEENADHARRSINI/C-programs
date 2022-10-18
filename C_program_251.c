/*
program 251
19.09.22
read the text and copy it to another array by converting comma to semicolon
*/
#include<stdio.h>
void fnread(char a[]);
void fnconvert(char a[],char b[]);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fnconvert(a,b);
	puts(b);
}
void fnread(char a[])
{
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fnconvert(char a[],char b[])
{
	int i;
	for (i=0;a[i];i++)
	b[i]=a[i]==','?';':a[i];
	b[i]='\0';
}
