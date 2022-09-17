/*
program 243
13.09.22
read the text and copy it to another array using functions
*/
#include<stdio.h>
void fn1(char a[]);
void fn2(char a[],char b[]);
main()
{
	char a[1000],b[1000];
	fn1(a);
	fn2(a,b);
	printf("%s",b);
}
void fn1(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fn2(char x[],char y[])
{
	int i;
	for (i=0;x[i];i++)
	y[i]=x[i];
	y[i]='\0';
}
