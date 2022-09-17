/*
program 145
18.08.22
biggest of three integr using ternary expression
*/
#include<stdio.h>
main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=a>b?a:b;
	e=d>c?d:c;
	printf("%d",e);
}

