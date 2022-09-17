/*
program 191
25.08.22
merge two text
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000],c[1000];
	int i,j,k;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=0;(b[j]=getchar())!='$';j++)
	;
	b[j]='\0';
	for (i=k=0;a[i];k++,i++)
	c[k]=a[i];
	for (j=0;b[j];k++,j++)
	c[k]=b[j];
	puts(c);
}
