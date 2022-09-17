/*
program 37
21.06.22
even or odd using not condition 
*/
#include<stdio.h>
main()
{
	int n,a;
	scanf("%d",&n);
	a=n%2;
	if(!a)
	printf("even %d",n);
	else
	printf("odd %d",n);
}
