/*
program 280
26.09.22
read the text and copy it to another array by deleting the comma
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	pb=b;
	for (;*pa;)
	if (*pa==',')
	pa++;
	else
	*pb++=*pa++;
	*pb='\0';
	puts(b);
}
