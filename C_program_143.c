/*
program 143
18.08.22
biggest of two number using ternary expression
*/
#include<stdio.h>
main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	b=a>b?a:b;
	printf("%d",b);
}
