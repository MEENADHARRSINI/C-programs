/*
program 258
20.09.22
delete the pattern
*/
#include<stdio.h>
void fnread(char a[]);
void fndelete(char a[],char b[],char c[]);
main()
{
	char a[1000],b[1000],c[1000];
	fnread(a);
	fnread(b);
	fndelete(a,b,c);
	puts(c);
}
void fnread(char a[])
{
	int i;
	for(i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fndelete(char a[],char b[],char c[])
{
	int i,j,k,l;
	for (i=0;a[i];i++)
	{
		for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';j++,k++)
		;
		if (b[j]=='\0')
		i=k;
		else{
			c[l]=a[i];
			l++;
		}
	}
	c[l]='\0';
}
