/*
program 232
06.09.22
biggest of ten numbers using function
*/
#include<stdio.h>
void fn1(int x[]);
int fn2(int x[]);
main()
{
	int a[10],b,i,x;
	fn1(a);
	x=fn2(a);
	printf("%d",x);
}
void fn1(int x[])
{
	int i;
	for (i=0;i<=9;i++)
	scanf("%d",&x[i]);
}
int fn2(int x[])
{
	int i,b;
	for (i=b=0;i<=9;i++)
	b=x[i]>b?x[i]:b;
	return b;
}
