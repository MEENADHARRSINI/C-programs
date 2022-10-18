/*
program 284
27.09.22
display the nth line
*/
#include<stdio.h>
main()
{
	int j,n;
	char a[1000],*pa,*b[1000],c[1000],*pc;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	j=0;
	pa=a;
	b[j]=a;
	for (j++;*pa;pa++)
	{
		if (*pa=='\n')
		{
			b[j]=pa+1;
			j++;
		}
	}
	b[j]=NULL;
	scanf("%d",&n);
	for (j=0;b[j]!=NULL;j++)
	printf("%p",b[j]);
	pc=c;
	pa=b[n-1];
	for (;*pa!='\n';pa++,pc++)
	*pc=*pa;
	*pc='\0';
	puts(c);
	
}
