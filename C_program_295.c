/*
program 295
01.10.22
sum of two integer
*/
#include<stdio.h>
void set1(int *pa,int *pb);
void set2(int a,int b,int *pc);
main()
{
	int a,b,c;
	set1(&a,&b);
	set2(a,b,&c);
	printf("%d",c);
}
void set1(int *pa,int*pb)
{
	*pa=10;
	*pb=20;
}
void set2(int a,int b,int *pc)
{
	*pc=a+b;
}
