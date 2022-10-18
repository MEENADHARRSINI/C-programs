/*
program 274
24.09.22
read the text and copy the left n characters to another array
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,*pt;
	int n;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	pb=b;
	scanf("%d",&n);
	pt=pa+n;
	for (;pa<=pt;pa++,pb++)
	*pb=*pa;
	*pb='\0';
	puts(b);
}
