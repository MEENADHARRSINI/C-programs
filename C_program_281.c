/*
program 281
26.09.22
reverse the text
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pb=b;
	for (pa--;pa>=a;pb++,pa--)
	*pb=*pa;
	*pb='\0';
	puts(b);
}
