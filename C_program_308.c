/*
program 308
06.10.22
copy the n characters from mth position
*/
#include<stdio.h>
void fnread(char *pa);
void fncopy(char *pa,char *pb,int m,int n);
main()
{
	char a[1000],b[1000];
	int n,m;
	fnread(a);
	scanf("%d %d",&m,&n);
	fncopy(a,b,m,n);
	puts(b);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fncopy(char *pa,char *pb,int m,int n)
{
	char *pt,*ps;
	pt=pa+m+n;
	ps=pa+m;
	for (pa=ps;pa<=pt&&*pa;pa++,pb++)
	*pb=*pa;
	*pb='\0';
}
