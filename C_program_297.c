/*
program 297
03.10.22
biggest of three integer
*/
#include<stdio.h>
void set1(int *pa,int *pb,int *pc);
void set2(int a,int b,int c,int *pd,int *pe);
main()
{
	int a,b,c,d,e;
	set1(&a,&b,&c);
	set2(a,b,c,&d,&e);
	printf("%d",e);
}
void set1(int *pa,int *pb,int *pc)
{
	*pa=10;
	*pb=20;
	*pc=30;
}
void set2(int a,int b,int c,int *pd,int *pe)
{
	*pd=a>b?a:b;
	*pe=*pd>c?*pd:c;
}
