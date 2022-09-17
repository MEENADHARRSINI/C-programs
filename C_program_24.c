/*
program 24
20.06.22
smallest of three integer using if condition
*/
#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b)
	if(a<c)
	printf("a %d",a);
	else
	printf("c %d",c);
	else
	if(b<c)
	printf("b %d",b);
	else
	printf("c %d",c);
}
