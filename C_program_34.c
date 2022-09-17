/*
program 34
21.06.22
integer is even or odd by implicit checking
*/
#include<stdio.h>
main()
{
	int n,a;
	scanf("%d",&n);
	a=n%2;
	if(a)
	printf("odd %d",n);
	else
	printf("even %d",n);
}
