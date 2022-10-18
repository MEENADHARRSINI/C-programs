/*
program 316
07.10.22
delete the pattern
*/
#include<stdio.h>
void fnread(char *pa);
void fndelete(char *pa,char *pb,char *pc);
main()
{
	char a[1000],b[1000],c[1000];
	fnread(a);
	fnread(b);
	fndelete(a,b,c);
	puts(c);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fndelete(char *pa,char *pb,char *pc)
{
	char *ps,*pt;
	for (;*pa;pa++)
	{
		for (pt=pb,ps=pa;*pt==*ps&&*pt!='\0';pt++,ps++)
		;
		if (*pt=='\0')
		pa=ps;
		else
		{
			*pc=*pa;
			pc++;
		}
	}
	*pc='\0';
}
