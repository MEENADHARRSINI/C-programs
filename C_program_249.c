/*
program 249
16.09.22
merge two text
*/
#include<stdio.h>
void fnread(char a[]);
void fnmerge(char a[],char d[]);
int fnlength(char d[]);
main()
{
	char a[1000],b[1000],c[1000],d[1000];
	fnread(a);
	fnread(b);
	fnread(c);
	fnmerge(a,d);
	fnmerge(b,d);
	fnmerge(c,d);
}
void fnread(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fnmerge(char x[],char d[])
{
	int i,l;
	l=fnlength(d);
	for (i=0;x[i];l++,i++)
	d[l]=x[i];
	d[l]='\0';
}
int fnlength(char d[])
{
	int l;
	for (l=0;d[l];l++)
	;
	return l;
}