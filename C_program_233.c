/*
program 233
10.09.22
interchange the position of biggest and smallest
*/
#include<stdio.h>
void fn1(int x[]);
void fn2(int x[]);
void fn3(int x[]);
main()
{
	int a[10],b,c,d,i;
	fn1(a);
	fn2(a);
	fn3(a);
}
void fn1(int x[])
{
	int i;
	for (i=0;i<=9;i++)
	scanf("%d",&x[i]);
}
void fn2(int x[])
{
	int i,b,c,d;
	for (i=b=0,c=999;i<=9;i++)
	{
		b=x[i]>x[b]?i:b;
		c=x[i]<x[c]?i:c;
	}
	d=x[b];
	x[b]=x[c];
	x[c]=d;
}
void fn3(int x[])
{
	int i;
	for (i=0;i<=9;i++)
	printf("%d",x[i]);
	
}
