/*
program 239
12.09.22
read and display a text character by character
*/
#include<stdio.h>
void fn1(char a[]);
void fn2(char a[]);
main()
{
	char a[1000];
	fn1(a);
	fn2(a);
}
void fn1(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fn2(char x[])
{
	puts(x);
}
