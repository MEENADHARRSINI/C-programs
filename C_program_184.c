/*
program 184
24.08.22
read the text and copy all the characters from mth position
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j,m;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (scanf("%d",&m),i=m,j=0;a[i]!='\0';j++,i++)
	b[j]=a[i];
	b[j]='\0';
	printf("%s",b);
}
