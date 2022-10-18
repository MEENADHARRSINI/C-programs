/*
program 298
03.10.22
biggest of smallest of three numbers
*/
#include<stdio.h>
void set1(int *pa,int *pb,int *pc);
void set2(int a,int b,int c,int *pd,int *pe);
main()
{
	int a,b,c,d,e;
	set1(&a,&b,&c);
	set2(a,b,c,&d,&e);
	printf("%d %d",d,e);
}
void set1(int *pa,int *pb,int *pc)
{
	*pa=10;
	*pb=40;
	*pc=70;
}
void set2(int a,int b,int c,int *pd,int *pe)
{
	*pd=a>b?(a>c)?a:c:(b>c)?b:c;
	*pe=a<b?(a<c)?a:c:(b<c)?b:c;
}
