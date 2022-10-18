/*
program 288
27.09.22
display the lines from nth line to mth line
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,*b[1000],**pb,c[1000],*pc,*pt;
	int n,m;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	pb=b;
	for (*pb=0,pb++;*pa;pa++)
	{
		if (*pa=='\n')
		{
			*pb=pa+1;
			pb++;
		}
	}
	*pb=NULL;
	scanf("%d",&n);
	scanf("%d",&m);
	pc=c;
	pa=a;
	pb=b;
	pa=*(pb+n-1);
	pt=*(pb+m);
	for (;pa<pt;pa++,pc++)
	*pc=*pa;
	*pc='\0';
	puts(c);
}

