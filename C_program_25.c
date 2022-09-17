/*
program 25
20.06.22
integer is even or odd using if condition
*/
#include<stdio.h>
main()
{
	int n,a;
	scanf("%d",&n);
	a=n%2;
	if(a==0)
	printf("even %d",n);
	else
	printf("odd %d",n);
}

