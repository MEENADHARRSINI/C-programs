/*
program 247
14.09.22
copy the last n characters
*/
#include<stdio.h>
void fnread(char a[]);
void fncopy(char a[],char b[],int n);
int fnlength(char a[]);
int l,n;
main()
{
	char a[1000],b[1000];
	fnread(a);
	scanf("%d",&n);
	fncopy(a,b,n);
	printf("%d",l);
	puts(b);
}
void fnread(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fncopy(char x[],char y[],int n)
{
    int i,j;
	l=fnlength(x);
	for (j=0,i=l-n;x[i];j++,i++)
	y[j]=x[i];
	y[j]='\0';
}
int fnlength(char x[])
{
	int i;
	for (i=0;x[i];i++)
	;
	return i;
}
