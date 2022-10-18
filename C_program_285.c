/*
program 285
27.09.22
display the lines from nth line to mth line
*/
#include<stdio.h>
main()
{
	int j,n,m,k;
	char a[1000],*pa,*b[1000],c[1000],*pc,*pt;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	j=0;
	pa=a;
	b[j]=pa;
	for (j++;*pa;pa++)
	{
		if (*pa=='\n')
		{
		b[j]=pa+1;
		j++;
	    }
	}
	b[j]=NULL;
	scanf("%d %d",&n,&m);
	for (j=0,pc=c,pa=b[n-1],pt=b[m];pa<pt;pc++,pa++)
	*pc=*pa;
	*pc='\0';
	for (pc=c;*pc;pc++)
	printf("%c",*pc);
}
