/*
program 278
26.09.22
read the text and copy it to another array by converting upper to lower
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000],*pa,*pb;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	pb=b;
	for (;*pa;pa++,pb++)
		if (*pa>='A'&&*pa<='Z')
		*pb=*pa+32;
		else
		*pb=*pa;
		*pb='\0';
		puts(b);
}
