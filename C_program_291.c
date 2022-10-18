/*
program 291
28.09.22
read the text and copy it to another array by deleting the pattern
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,c[1000],*pc,*ps;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pb=b;
	for (;(*pb=getchar())!='$';pb++)
	;
	*pb='\0';
	for (ps=c,pa=a;*pa;pa++)
	{
		for (pb=b,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		pa=pc;
		else
		{
			*ps=*pa;
			ps++;
		}
	}
	*ps='\0';
	puts(c);
}
