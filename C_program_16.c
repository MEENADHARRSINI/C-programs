/*
program 16
17.06.22
reverse a three digit number
*/
#include<stdio.h>
main()
{
	int n,a,b,c,d,e,f,g,r;
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=a*100;
	f=c*10;
	g=d*1;
	r=e+f+g;
	printf("%d",r);
}
