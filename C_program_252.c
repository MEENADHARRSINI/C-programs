/*
program 252
19.09.22
read the text and copy it to another array by deleting the comma
*/
#include<stdio.h>
void fnread(char a[]);
void fndel(char a[],char b[]);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fndel(a,b);
	puts(b);
}
void fnread(char a[])
{
	int i;
	for(i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fndel(char a[],char b[])
{
	int i,j;
	for (i=j=0;a[i];)
	if (a[i]==',')
	i++;
	else
	b[j++]=a[i++];
	b[j]='\0';
}
