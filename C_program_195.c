/*
program 195
25.08.22
print the starting position of next line 
*/
#include<stdio.h>
main()
{
	int i;
	char a[1000],b[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=0;a[i];i++)
	if (a[i]=='\n')
	printf("%d",i+1);
}
