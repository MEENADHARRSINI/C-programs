/*
program 282
26.09.22
merge two text
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,c[1000],*pc;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pb=b;
	for (;(*pb=getchar())!='$';pb++)
	;
	*pb='\0';
	pa=a;
	pc=c;
	for (;*pa;pc++,pa++)
	*pc=*pa;
	pb=b;
	for (;*pb;pc++,pb++)
	*pc=*pb;
	*pc='\0';
	puts(c);
}
