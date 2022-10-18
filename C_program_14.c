/*
program 14
17.06.22
sum and product of digits of two digits
*/
#include<stdio.h>
main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	c=a+b;
	d=a*b;
	printf("%d",c);
	printf("%d ",d);
}
