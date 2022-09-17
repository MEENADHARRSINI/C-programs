/*
program 20
18.06.22
integer is positive, negative or zero using if condition
*/
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	printf("positive %d",n);
	else
	if(n<0)
	printf("negative %d",n);
	else
	printf("zero %d",n);
}
