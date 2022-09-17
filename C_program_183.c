/*
program 183
24.08.22
read the text and copy the n characters to another array
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,n;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	for (i=0,scanf("%d",&n);i<=n;i++)
	b[i]=a[i];
	b[i]='\0';
	printf("%s",b);
}
