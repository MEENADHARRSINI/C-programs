/*
program 307
05.10.22
copy the first n characters
*/
#include<stdio.h>
void fnread(char *pa);
void fncopy(char *pa,char *pb,int n);
main()
{
	char a[1000],b[1000];
	int n;
	fnread(a);
	scanf("%d",&n);
	fncopy(a,b,n);
	printf("%s",b);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fncopy(char *pa,char *pb,int n)
{
	char *pt;
	pt=pa+n;
	for (;pa<=pt;pa++,pb++)
	*pb=*pa;
	*pb='\0';
}
