/*
program 26
20.06.22
leap year or not using if condition
*/
#include<stdio.h>
main()
{
	int n,a;
	scanf("%d",&n);
	a=n%4;
	if (a==0)
	printf("leap year %d",n);
	else
	printf("not leap year %d",n);
}
