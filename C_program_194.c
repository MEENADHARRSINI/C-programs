/*
program 194
25.08.22
number of lines
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,l;
	for (i=l=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=l=0;a[i];i++)
	{
		if (a[i]=='\n')
		l++;
	}
	printf("%d",l);
}
