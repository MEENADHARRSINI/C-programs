/*
program 287
27.09.22
display the nth line using pointers
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,*b[1000],**pb,c[1000],*pc;
	int n;
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
	for (pb=b;*pb!=NULL;pb++)
	printf("%p",**pb);
	pb=b;
	pc=c;
	pa=*(pb+n-1);
	for (;*pa!='\n';pa++,pc++)
	*pc=*pa;
	*pc='\0';
	puts(c);
}
