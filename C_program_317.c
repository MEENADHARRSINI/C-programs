/*
program 317
07.10.22
replace the pattern
*/
#include<stdio.h>
void fnread(char *pa);
void fnreplace(char *pa,char *pb,char *pc,char *pd);
main()
{
	char a[1000],b[1000],c[1000],d[1000];
	fnread(a);
	fnread(b);
	fnread(c);
	fnreplace(a,b,c,d);
	puts(d);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fnreplace(char *pa,char *pb,char *pc,char *pd)
{
	char *ps,*pt,*pm;
	for (;*pa;)
	{
		for (pt=pb,ps=pa;*pt==*ps&&*pt!='\0';pt++,ps++)
		;
		if (*pt=='\0')
		{
			for (pm=pc,pa=ps;*pm;pm++)
			{
				*pd=*pm;
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
}
