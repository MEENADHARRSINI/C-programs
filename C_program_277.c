/*
program 277
26.09.22
read the text and copy the last n characters
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000],*pa,*pb,*ps,*pt;
	int i,j,n,m;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pb=b;
	scanf("%d",&n);
	ps=pa-n;
	pa=ps;
	for (;*pa;pa++,pb++)
	*pb=*pa;
	*pb='\0';
	puts(b);
}
