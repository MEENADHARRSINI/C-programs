/*
program 289
27.09.22
pattern is available in the text or not
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
	for (;*pa;pa++)
	{
		for (pb=b,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		{
			printf("exist %c",*pb);
			return 0;
		}
	}
	printf("not exist %c",*pb);
}
