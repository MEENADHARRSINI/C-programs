/*
program 245
13.09.22
read the text and copy the n characters from mth position
*/
#include<stdio.h>
void fnread(char x[]);
void fncopy(char x[],char y[],int m,int n);
int n,m;
main()
{
	char a[1000],b[1000];
	fnread(a);
	scanf("%d %d",&m,&n);
	fncopy(a,b,m,n);
	printf("%s",b);
}
void fnread(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fncopy(char x[],char y[],int m,int n)
{
	int i,j;
	for (i=m,j=0;j<=n;j++,i++)
	y[j]=x[i];
	y[j]='\0';
}
