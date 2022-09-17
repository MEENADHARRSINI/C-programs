/*
program 226
03.09.22
biggest of three integer
*/
#include<stdio.h>
int bignum(int,int,int);
main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=bignum(a,b,c);
	printf("%d",d);
}
int bignum(int a,int b,int c)
{
	int d;
	d=a>b?(a>c?a:c):(b>c?b:c);
	return d;
}
