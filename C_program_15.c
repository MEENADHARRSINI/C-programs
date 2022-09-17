/*
program 15
17.06.22
digits of three digit number
*/
#include<stdio.h>
main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	printf("%d",d);
	printf("%d",c);
	printf("%d",a);
}
