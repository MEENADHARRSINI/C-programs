/*
program 313
06.10.22
display the nth line
*/
#include<stdio.h>
void fnread(char *pa);
void fnstore(char *pa,char **pb);
void fnline(char *pa,char **pb,int n);
main()
{
	char a[1000],*b[1000];
	int n;
	fnread(a);
	fnstore(a,b);
	scanf("%d",&n);
	fnline(a,b,n);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fnstore(char *pa,char **pb)
{
	for (*pb=pa,pb++;*pa;pa++)
	{
		if (*pa=='\n')
		{
		*pb=pa+1;
		pb++;
	    }
	}
	*pb='\0';
}
void fnline (char *pa,char **pb,int n)
{
	char c[1000],*pc;
	pa=*(pb+n-1);
	for (pc=c;*pa!='\n';pa++,pc++)
	*pc=*pa;
	*pc='\0';
	puts(c);
}
