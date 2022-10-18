/*
program 290
27.09.22
count the number of times the pattern exist
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,b[1000],*pb,*pc;
	int p;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pb=b;
	for (;(*pb=getchar())!='$';pb++)
	;
	*pb='\0';
	for (p=0,pa=a;*pa;pa++)
	{
		for (pb=b,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		p++;
	}
	printf("%d",p);
}
