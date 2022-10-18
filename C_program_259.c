/*
program 259
20.09.22
replace the pattern
*/
#include<stdio.h>
void fnread(char a[]);
void fnreplace(char a[],char b[],char c[],char d[]);
main()
{
	int i,j,k,l,m;
	char a[1000],b[1000],c[1000],d[1000];
	fnread(a);
	fnread(b);
	fnread(c);
	fnreplace(a,b,c,d);
	puts(d);
}
void fnread(char a[])
{
	int i;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
}
void fnreplace(char a[],char b[],char c[],char d[])
{
	int i,j,k,l,m;
	for (i=m=0;a[i];)
	{
		for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';k++,j++)
		;
		if (b[j]=='\0')
		{
			for (l=0,i=k;c[l]!='\0';l++)
			{
				d[m]=c[l];
				m++;
			}
		}
		else
		{
			d[m]=a[i];
			m++;
			i++;
		}
	}
	d[m]='\0';
}

