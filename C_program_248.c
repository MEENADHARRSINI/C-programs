/*
program 248
15.09.22
reverse the text
*/
#include<stdio.h>
void fnread(char a[]);
void fnreverse(char a[],char b[]);
int fnlength(char a[]);
int l;
main()
{
	char a[1000],b[1000];
	fnread(a);
	fnreverse(a,b);
	puts(b);
	printf("%d",l);
}
void fnread(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fnreverse(char x[],char y[])
{
	int i,j;
	l=fnlength(x);
	i=l;
	for (i--,j=0;i>=0;j++,i--)
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
