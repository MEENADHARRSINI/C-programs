/*
program 190
25.08.22
reverse the text
*/
#include<stdio.h>
main()
{
	int i,j;
	char a[1000],b[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i--,j=0;i>=0;j++,i--)
	b[j]=a[i];
	b[j]='\0';
	puts(b);
}
