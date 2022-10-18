/*
program 293
30.09.22
store the value of a and print it in the main
*/
#include<stdio.h>
main()
{
	int a,b;
	voidset(&a);
	printf("%d",a);
}
voidset(int *pa)
{
	*pa=10;
}
