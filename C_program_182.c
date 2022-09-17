/*
program 182
24.08.22
read the text and copy it to another array
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i;
	for (i=0,a[i]=getchar();a[i]!='$';a[++i]=getchar())
	;
	a[i]='\0';
	for (i=0;a[i]!='\0';i++)
	b[i]=a[i];
	b[i]='\0';
	printf("%s",b);
}
