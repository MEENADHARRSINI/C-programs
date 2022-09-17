/*
program 222
03.09.22
sum of two integers using functions
*/
#include<stdio.h>
int sum (int,int);
main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=sum(a,b);
	printf("%d",c);
}
int sum (int x,int y)
{
	int z;
	z=x+y;
	return z;
}

