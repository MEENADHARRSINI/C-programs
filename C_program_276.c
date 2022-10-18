/*
program 276
24.09.22
read the text and copy n characters from mth position
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,*pt,*ps;
	int n,m;
	pa=&a[0];
	pb=&b[0];
	for (pa=a;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	scanf("%d %d",&m,&n);
	pa=a;
	pt=pa+m+n;
	ps=pa+m;
	for (pb=b,pa=ps;pa<pt&&*pa;pa++,pb++)
	*pb=*pa;
	*pb='\0';
	puts(b);
}
