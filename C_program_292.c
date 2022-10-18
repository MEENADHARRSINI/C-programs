/*
program 292
28.09.22
read the text and copy it to another array by replacing the pattern
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,c[1000],*pc,d[1000],*pd,*ps;
	for (pa=a;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	for (pb=b;(*pb=getchar())!='$';pb++)
	;
	*pb='\0';
	for (pc=c;(*pc=getchar())!='$';pc++)
	;
	*pc='\0';
	for (pa=a,pd=d;*pa!='\0';)
	{
		for (pb=b,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		{
			for (ps=c,pa=pc;*ps!='\0';ps++)
			{
				*pd=*ps;
				pd++;
			}
		}
		else
		{
			*pd=*pa;
			pd++;
			pa++;
		}
	}
	*pd='\0';
	printf("%s",d);
}
