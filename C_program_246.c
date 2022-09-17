/*
program 246
14.09.22
length of the string using functions
*/
#include<stdio.h>
void fnread(char a[]);
int fnlength(char a[]);
int l;
main()
{
	char a[1000];
	int i,b;
	fnread(a);
	l=fnlength(a);
	printf("%d",l);
}
void fnread(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
int fnlength(char x[])
{
	int i;
	for (i=0;x[i]!='\0';i++)
	;
	return i;
}
