/*
program 186
24.08.22
read the text and copy the last n characters
*/
#include<stdio.h>
main()
{
	int i,j,n,m;
	char a[1000],b[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=m=0,scanf("%d",&n),m=i-n,i=m;a[i]!='\0';j++,i++)
	b[j]=a[i];
	b[j]='\0';
	puts(b);
}
