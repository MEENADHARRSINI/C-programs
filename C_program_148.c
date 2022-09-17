/*
program 148
18.08.22
smallest of three number using ternary expression
*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=a<b?(a<c?a:c):(b<c?b:c);
	printf("%d",d);
}

