/*
program 35
21.06.22
leap year or not by implicit checking
*/
#include<stdio.h>
main()
{
	int n,a;
	scanf("%d",&n);
	a=n%4;
	if(a)
	printf("not leap year %d",n);
	else
	printf("leap year %d",n);
}
