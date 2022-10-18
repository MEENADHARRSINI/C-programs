/*
program 275
24.09.22
read the text and copy all the characters from mth position
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,*pt;
	int m;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	pb=b;
	scanf("%d",&m);
	pt=m+pa;
	pa=pt;
	for (;*pa;pa++,pb++)
	*pb=*pa;
	*pb='\0';
	puts(b);
}
