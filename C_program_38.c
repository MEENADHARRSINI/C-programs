/*
program 38
21.06.22
leap year or not using not condition
*/
#include<stdio.h>
main()
{
	int n,a;
	scanf("%d",&n);
	a=n%4;
	if(!a)
	printf("leap year %d",n);
	else
	printf("not leap year %d",n);
}
