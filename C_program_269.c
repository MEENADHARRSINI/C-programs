/*
program 269
23.09.22
read and display a text
*/
#include<stdio.h>
main()
{
	char a[1000],*pa;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	for (;*pa;pa++)
	printf("%c",*pa);
}
