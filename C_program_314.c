/*
program 314
06.10.22
nth line to mth line 
*/
#include<stdio.h>
void fnread(char *pa);
void fnstore(char *pa,char **pb);
void fnline(char *pa,char **pb,int n,int m);
main()
{
	char a[1000],*b[1000];
	int n,m;
	fnread(a);
	fnstore(a,b);
	scanf("%d %d",&n,&m);
	fnline(a,b,n,m);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fnstore(char *pa,char **pb)
{
	for (pb++;*pa;pa++)
	{
		if (*pa=='\n')
		{
		*pb=pa+1;
		pb++;
	    }
	}
	*pb='\0';
}
void fnline (char *pa,char **pb,int n,int m)
{
	char c[1000],*pc,*pt;
	pa=*(pb+n-1);
	pt=*(pb+m);
	for (pc=c;pa<pt;pa++,pc++)
	*pc=*pa;
	*pc='\0';
	puts(c);
}
