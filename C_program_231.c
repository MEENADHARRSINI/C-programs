/*
program 231
06.09.22
read and display the sum of ten numbers using function
*/
#include<stdio.h>
void fn1(int x[]);
int fn2(int x[]);
main()
{
	int a[10],i,x;
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
	int i,s;
	for (i=s=0;i<=9;i++)
	s=s+x[i];
	return s;
}
