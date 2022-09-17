/*
program 244
13.09.22
read the text and copy the n characters
*/
#include<stdio.h>
void fnread(char a[]);
void fncopy(char a[],char b[],int n);
int n;
main()
{
	char a[1000],b[1000];
	fnread(a);
	scanf("%d",&n);
	fncopy(a,b,n);
	printf("%s",b);
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
	int i;
	for (i=0;i<=n;i++)
	y[i]=x[i];
	y[i]='\0';
}
